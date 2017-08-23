#include "MyForm.h"
#include <iostream>
#include <vector>
#include <Windows.h>
#include "CaptureAnImage.h"
#include "SimulateKeyboard.h"
#include "SanteiOrder.h"
#include "SanteiHWND.h"

using namespace System;
using namespace System::Windows::Forms;

//Function SetChildRect
// Purpose: Set location and size of all childs of SimulateSantei accoording to real santei
//

System::Void SetChildsRect(Transparency::MyForm^);

//Function: SetRect
//Purpose: Use as call back in EnumChildWindow, used in SetChildRect
//

BOOL CALLBACK SetRect(HWND hwnd, LPARAM lParam);
//
// Function CheckSantei
// Purpose: Check whether Santei is shown and NOT minimized
// Output: return HWND of Santei if shown and not minimized, 0 otherwise 

HWND CheckSantei();

[STAThread]
void Main(cli::array<System::String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Transparency::MyForm form;

	std::cout << "\t\tWelcom to Santei Helper\n";
	//
	//Find Santei Window
	//
	HWND hwnd_santei = CheckSantei();
	if (!hwnd_santei) {
		std::cout << "*ERROR: Santei is not exist or is minimized" << std::endl;
		exit(0);
	}

	//
	//Check context
	//
	//if (GetNextWindow(this_hwnd, GW_HWNDNEXT) == hwnd_santei) {}
	//from in-active(invisible, minimized, background, in-active) to active -> Dialog box: try again or cancel(minimized) or close.

	//
	//Set Form's rectangle
	//
	RECT rect_santei;
	GetWindowRect(hwnd_santei, &rect_santei);
	form.Size = System::Drawing::Size(rect_santei.right - rect_santei.left, rect_santei.bottom - rect_santei.top);
	form.StartPosition = FormStartPosition::Manual;//needed
	form.Location = System::Drawing::Point(rect_santei.left, rect_santei.top);

	//
	//Set childs rectangle
	//
	SetChildsRect(%form);

	Application::Run(%form);
}

System::Void SetChildsRect(Transparency::MyForm^ form)
{
	//
	//Check santei is not minimized
	//
	HWND santei = CheckSantei();
	if (!santei) {
		std::cout << "Cannot find santei\n";
		return;
	}

	//
	//Convert form to LPARAM
	//
	System::Runtime::InteropServices::GCHandle gch2 = System::Runtime::InteropServices::GCHandle::Alloc(form);
	IntPtr ip2 = System::Runtime::InteropServices::GCHandle::ToIntPtr(gch2);
	int obj = ip2.ToInt32();

	//
	//Set Rect
	//
	EnumChildWindows(santei, SetRect, obj);
}

HWND CheckSantei() {
	HWND hwnd_santei = FindWindowA(0, "Santei");
	if (!hwnd_santei) {
		std::cout << "*Cannot find Santei Window." << std::endl;
		return nullptr;
	}

	if (IsIconic(hwnd_santei)) {
		std::cout << "*Santei is minimized, isn't it? DON'T minimize Santei" << std::endl;
		return nullptr;
	}

	return hwnd_santei;
}

BOOL CALLBACK SetRect(HWND hwnd, LPARAM lParam) {
	//
	//Convert LPARAM to MyForm
	//
	IntPtr ip2(lParam);
	System::Runtime::InteropServices::GCHandle val = System::Runtime::InteropServices::GCHandle::FromIntPtr(ip2);
	System::Object ^obj = val.Target;
	//Console::WriteLine("Type - " + obj->GetType()->ToString());
	Transparency::MyForm^ form = (Transparency::MyForm ^) (obj);

	//
	//Set Location and Size
	//
	static int i = 0;
	RECT rect;
	GetWindowRect(hwnd, &rect);
	System::Drawing::Size size(rect.right - rect.left, rect.bottom - rect.top);
	System::Drawing::Point topleft(rect.left, rect.top);
	System::Windows::Forms::Control^ control;
	System::String^ name = GetSanteiName(i);

	if (name != "INVALID") {
		SanteiHWND[IntToSanteiOrder(i)] = hwnd;
		if (form->Controls->Find(name, true) &&
			form->Controls->Find(name, true)->Length == 1) {
			control = form->Controls->Find(name, true)[0];
			control->Size = size;
			control->Location = form->PointToClient(topleft);
		}
		else {
			std::cout << "Couldn't found or multiple exist of: " << SystemStringToStdString(name) << "\n";
		}
	}



	i++;
	return true;
}

System::Void Transparency::MyForm::bt_start_Click(System::Object^  sender, System::EventArgs^  e) {
	//
	//1.Test Capture
	//2.Test pass MyForm as LPARAM
	//
#if 0
	HWND hwnd_santei = FindWindowA(0, "new 1 - Notepad++ [Administrator]");
	if (hwnd_santei) {
		std::cout << "Found Notepad++\n";
		//
		//1
		//
		//CaptureAWindow(hwnd_santei, L"C:/Users/Admin/Desktop/capture.bmp");

		//
		//2
		//
		System::Runtime::InteropServices::GCHandle gch2 = System::Runtime::InteropServices::GCHandle::Alloc(this);
		IntPtr ip2 = System::Runtime::InteropServices::GCHandle::ToIntPtr(gch2);
		int obj = ip2.ToInt32();
		EnumChildWindows(hwnd_santei, EnumChildProc, obj);
	}
#endif
	//
	// IDEA: USE TIMER to BLINK '|' to simulate CARET
	//
	HWND notepad = FindWindowA(0, "Untitled - Notepad");
	if (notepad) {
		HWND notepad_edit = FindWindowExA(notepad, 0, "Edit", 0);
		if (!notepad_edit) {
			std::cout << "Cannot find Edit of Notepad\n";
			return;
		}
		System::String^ text = textbox_test->Text;
		WriteStringCP(notepad_edit, SystemStringToStdString(text).c_str(), text->Length);
	}
}

System::Void Transparency::MyForm::textbox_test_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
	if (e->KeyCode == Keys::Enter) {
		//Move to next tab order
		SendKeys::Send("{TAB}");//send to active form

		//
		//Disable "Ding" sound
		//
		e->SuppressKeyPress = true;//dont pass key event to underlying control
	}
}

System::Void Transparency::MyForm::MyForm_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
	if (e->KeyCode == Keys::Escape) {
		std::cout << "Esc is pressed\n";
		e->SuppressKeyPress = true;//dont pass key event to underlying control
	}
}

System::Void Transparency::MyForm::TX_B1_1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	HWND hwnd;

	if (SanteiHWND.find(SanteiOrder::BL1_1) != SanteiHWND.end()) {
		hwnd = SanteiHWND.find(SanteiOrder::BL1_1)->second;
		
	}
}