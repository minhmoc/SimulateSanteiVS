#include "MyForm.h"
#include <iostream>
#include <vector>
#include <Windows.h>
#include "CaptureAnImage.h"
//#include "SimulateKeyboard.h"
//#include "SanteiOrder.h"
//#include "SanteiHWND.h"

using namespace System;
using namespace System::Windows::Forms;

HWND CheckSantei();

[STAThread]
void Main(cli::array<System::String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	SanteiChildren::MyForm form;

	std::cout << "\t\tWelcom to Santei Childrens\n";
	//
	//Find Santei Window
	//
	HWND hwnd_santei = CheckSantei();
	if (!hwnd_santei) {
		std::cout << "*ERROR: Santei is not exist or is minimized" << std::endl;
		exit(0);
	}

	//
	//Set Form's rectangle
	//
	RECT rect_santei;
	GetWindowRect(hwnd_santei, &rect_santei);
	form.Size = System::Drawing::Size(rect_santei.right - rect_santei.left, rect_santei.bottom - rect_santei.top);
	form.StartPosition = FormStartPosition::Manual;//needed
	form.Location = System::Drawing::Point(rect_santei.left, rect_santei.top);

	//
	//Set picture box
	//
	System::Windows::Forms::Control^ control;
	if (form.Controls->Find("pictureBox1", true) &&
		form.Controls->Find("pictureBox1", true)->Length == 1) {
		control = form.Controls->Find("pictureBox1", true)[0];
		control->Size = System::Drawing::Size(rect_santei.right - rect_santei.left, rect_santei.bottom - rect_santei.top);;
		control->Location = form.PointToClient(System::Drawing::Point(rect_santei.left, rect_santei.top));
	}
	System::Windows::Forms::PictureBox^ picture = (System::Windows::Forms::PictureBox^)control;
	CaptureAWindow(hwnd_santei, L"Santei.bmp");
	picture->Load(L"Santei.bmp");
	
	//
	//Draw child order 
	//
	System::Drawing::Bitmap^ bitmap = gcnew System::Drawing::Bitmap(picture->Width, picture->Height);
	picture->DrawToBitmap(bitmap, picture->ClientRectangle);

	//
	//Convert form to LPARAM
	//
	System::Drawing::Graphics^ graphics = System::Drawing::Graphics::FromImage(bitmap);
	System::Runtime::InteropServices::GCHandle gch2 = System::Runtime::InteropServices::GCHandle::Alloc(graphics);
	IntPtr ip2 = System::Runtime::InteropServices::GCHandle::ToIntPtr(gch2);
	int obj = ip2.ToInt32();
	EnumChildWindows(hwnd_santei, EnumChildProc, obj);
	picture->Image = bitmap;

	Application::Run(%form);
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

BOOL CALLBACK EnumChildProc(HWND hwnd, LPARAM lParam) {
	//
	//Convert LPARAM to MyForm
	//
	IntPtr ip2(lParam);
	System::Runtime::InteropServices::GCHandle val = System::Runtime::InteropServices::GCHandle::FromIntPtr(ip2);
	System::Object ^obj = val.Target;
	//Console::WriteLine("Type - " + obj->GetType()->ToString());
	Transparency::MyForm^ form = (Transparency::MyForm ^) (obj);

	//graphics->DrawString(L"Hello .NET Guide!", gcnew System::Drawing::Font("Arial", 60), System::Drawing::Brushes::Green, System::Drawing::PointF(2, 2));
	//
	//Set Location and Size
	//
	static int i = 0;
	System::Drawing::Size size(Stupid::oldRect.right - Stupid::oldRect.left, Stupid::oldRect.bottom - Stupid::oldRect.top);
	System::Drawing::Point topleft(Stupid::oldRect.left, Stupid::oldRect.top);
	RECT newRect;
	GetWindowRect(hwnd, &newRect);
	Stupid::oldRect = newRect;
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
