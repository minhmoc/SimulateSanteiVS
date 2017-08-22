#include "MyForm.h"
#include <iostream>
#include <vector>
#include <Windows.h>
#include "CaptureAnImage.h"
#include "SimulateKeyboard.h"

using namespace System;
using namespace System::Windows::Forms;
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
	HWND hwnd_santei = FindWindowA(0, "Qt Creator");
	if (!hwnd_santei) {
		std::cout << "*Cannot find Santei Window." << std::endl;
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
	if (IsIconic(hwnd_santei)) {
		std::cout << "*Santei is minimized, isn't it? DON'T minimize Santei" << std::endl;
		exit(0);
	}

	RECT rect_santei;
	GetWindowRect(hwnd_santei, &rect_santei);
	std::cout << rect_santei.left << " " << rect_santei.top << std::endl;
	form.Size = System::Drawing::Size(rect_santei.right - rect_santei.left, rect_santei.bottom - rect_santei.top);
	form.StartPosition = FormStartPosition::Manual;//needed
	form.Location = System::Drawing::Point(rect_santei.left, rect_santei.top);

	//
	//Set childs rectangle
	//

	//2. Find child (according to Z order)
	//3. Set Size and Location of all child.

	Application::Run(%form);
}

BOOL CALLBACK EnumChildProc(HWND hwnd, LPARAM lParam) {
	IntPtr ip2(lParam);
	System::Runtime::InteropServices::GCHandle val = System::Runtime::InteropServices::GCHandle::FromIntPtr(ip2);
	System::Object ^obj = val.Target;
	Console::WriteLine("Type - " + obj->GetType()->ToString());
	Transparency::MyForm^ form = (Transparency::MyForm ^) (obj);

	static int i = 0;
	RECT rect;
	bool useful = false;
	char szBuff[64];
	sprintf(szBuff, "%p", hwnd);//for print hwnd
	GetWindowRect(hwnd, &rect);//for size of hwnd
	std::cout << "The " << i << "th child of Santei" << " - Rectangle is: " << rect.left << ", " << rect.top << ", " << rect.right << ", " << rect.bottom << std::endl;
	//std::cout << "The " << i << "th child of Santei" << std::endl;
	i++;
	return false;
}

System::Void Transparency::MyForm::bt_start_Click(System::Object^  sender, System::EventArgs^  e) {
	//
	//Test Capture
	//Test pass MyForm as LPARAM
	//
#if 0
	HWND hwnd_santei = FindWindowA(0, "new 1 - Notepad++ [Administrator]");
	if (hwnd_santei) {
		std::cout << "Found Notepad++\n";
		//CaptureAWindow(hwnd_santei, L"C:/Users/Admin/Desktop/capture.bmp");
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