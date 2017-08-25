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
BOOL CALLBACK EnumChildProc(HWND hwnd, LPARAM lParam);

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
	System::Drawing::Graphics^ graphic = (System::Drawing::Graphics^) (obj);

	//
	//Get Location and Size
	//
	RECT rect;
	GetWindowRect(hwnd, &rect);
	static int i = 0;
	System::Drawing::Size size(rect.right - rect.left, rect.bottom - rect.top);
	System::Drawing::Point topleft(rect.left, rect.top);
	
	//
	//Drawing
	//
	System::Drawing::Pen^ pen_odd = gcnew System::Drawing::Pen(System::Drawing::Color::Red, 1);
	System::Drawing::Pen^ pen_even = gcnew System::Drawing::Pen(System::Drawing::Color::Green, 1);
	System::Drawing::Pen^ pen = (i % 2 == 0) ? pen_even : pen_odd;
	System::Drawing::Rectangle rectangle(topleft, size);
	graphic->DrawRectangle(pen, rectangle);
	graphic->DrawString(System::Convert::ToString(i), gcnew System::Drawing::Font("Arial", 14), 
		((i%2)==0?System::Drawing::Brushes::Green : System::Drawing::Brushes::Red), 
		System::Drawing::PointF(topleft.X+2, topleft.Y+2));
	graphic->DrawLine(pen, topleft, System::Drawing::Point(topleft.X+2, topleft.Y+2));

	i++;
	return true;
}
