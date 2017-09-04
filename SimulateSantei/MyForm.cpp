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
namespace Stupid {
	RECT oldRect;
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
	RECT newRect;
	GetWindowRect(hwnd, &newRect);	
	System::Drawing::Size size;
	System::Drawing::Point topleft;
	System::Windows::Forms::Control^ control;
	System::String^ name = GetSanteiName(i);

	if (name != "INVALID") {
		SanteiHWND[IntToSanteiOrder(i)] = hwnd;
		if (form->Controls->Find(name, true) &&
			form->Controls->Find(name, true)->Length == 1) {
			control = form->Controls->Find(name, true)[0];

			if (IntToSanteiOrder(i) != SanteiOrder::Image &&
				IntToSanteiOrder(i) != SanteiOrder::RotVer &&
				IntToSanteiOrder(i) != SanteiOrder::RotHoz &&
				IntToSanteiOrder(i) != SanteiOrder::RotLeft &&
				IntToSanteiOrder(i) != SanteiOrder::RotRight &&
				IntToSanteiOrder(i) != SanteiOrder::Batch &&
				IntToSanteiOrder(i) != SanteiOrder::ID &&

				IntToSanteiOrder(i) != SanteiOrder::Submit &&
				IntToSanteiOrder(i) != SanteiOrder::Sb_Lg &&
				IntToSanteiOrder(i) != SanteiOrder::Pause &&
				IntToSanteiOrder(i) != SanteiOrder::BL1 &&
				IntToSanteiOrder(i) != SanteiOrder::BL2 &&
				IntToSanteiOrder(i) != SanteiOrder::BL3 &&
				IntToSanteiOrder(i) != SanteiOrder::BL4 &&
				IntToSanteiOrder(i) != SanteiOrder::BL5) {
				size = System::Drawing::Size(Stupid::oldRect.right - Stupid::oldRect.left, Stupid::oldRect.bottom - Stupid::oldRect.top);
				topleft = System::Drawing::Point(Stupid::oldRect.left, Stupid::oldRect.top);

			}
			else {
				size = System::Drawing::Size(newRect.right - newRect.left, newRect.bottom - newRect.top);
				topleft = System::Drawing::Point(newRect.left, newRect.top);
			}
			control->Size = size;
			control->Location = form->PointToClient(topleft);


			System::Drawing::Size size(Stupid::oldRect.right - Stupid::oldRect.left, Stupid::oldRect.bottom - Stupid::oldRect.top);
			System::Drawing::Point topleft(Stupid::oldRect.left, Stupid::oldRect.top);
		}
		else {
			std::cout << "Couldn't found or multiple exist of: " << SystemStringToStdString(name) << "\n";
		}
	}
	Stupid::oldRect = newRect;



	i++;
	return true;
}

//System::Void Transparency::MyForm::textbox_test_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
//	//if (e->KeyCode == Keys::Enter) {
//	//	//Move to next tab order
//	//	SendKeys::Send("{TAB}");//send to active form
//
//	//	//
//	//	//Disable "Ding" sound
//	//	//
//	//	e->SuppressKeyPress = true;//dont pass key event to underlying control
//	//}
//}

//System::Void Transparency::MyForm::MyForm_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
//	//if (e->KeyCode == Keys::Escape) {
//	//	std::cout << "Esc is pressed\n";
//	//	e->SuppressKeyPress = true;//dont pass key event to underlying control
//	//}
//}
//
//System::Void Transparency::MyForm::TX_B1_1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
//	HWND hwnd;
//
//	if (SanteiHWND.find(SanteiOrder::BL1_1) != SanteiHWND.end()) {
//		hwnd = SanteiHWND.find(SanteiOrder::BL1_1)->second;
//		
//	}
//}