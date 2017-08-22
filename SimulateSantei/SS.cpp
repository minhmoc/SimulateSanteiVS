#include "SS.h"
#include <Windows.h>
#include <iostream>
using namespace System;
using namespace System::Windows::Forms;

BOOL CALLBACK EnumChildProc(HWND hwnd, LPARAM lParam) {
	static int i = 0;
	RECT rect;
	bool useful = false;
	char szBuff[64];
	sprintf(szBuff, "%p", hwnd);
	/*if (memcmp(szBuff, (char*)"00030666", 8) == 0) {
		std::cout << "Component Image - " << szBuff << " - ";
		useful = true;
	}
	if (memcmp(szBuff, (char*)"0003066A", 8) == 0) {
		std::cout << "Component Rotate Vertical - " << szBuff << " - ";
		useful = true;
	}
	if (memcmp(szBuff, (char*)"0003066C", 8) == 0) {
		std::cout << "Component Rotate Horizontal - " << szBuff << " - ";
		useful = true;
	}
	if (memcmp(szBuff, (char*)"000403F6", 8) == 0) {
		std::cout << "Component Rotate left - " << szBuff << " - ";
		useful = true;
	}
	if (memcmp(szBuff, (char*)"00030670", 8) == 0) {
		std::cout << "Component Rotate right - " << szBuff << " - ";
		useful = true;
	}
	if (memcmp(szBuff, (char*)"000303F0", 8) == 0) {
		std::cout << "Component batch value - " << szBuff << " - ";
		useful = true;
	}
	if (memcmp(szBuff, (char*)"000303EC", 8) == 0) {
		std::cout << "Component ID Image value - " << szBuff << " - ";
		useful = true;
	}
	if (memcmp(szBuff, (char*)"000403D8", 8) == 0) {
		std::cout << "Component Submit - " << szBuff << " - ";
		useful = true;
	}
	if (memcmp(szBuff, (char*)"000303C4", 8) == 0) {
		std::cout << "Component Submit and logout - " << szBuff << " - ";
		useful = true;
	}
	if (memcmp(szBuff, (char*)"00160390", 8) == 0) {
		std::cout << "Component Pause - " << szBuff << " - ";
		useful = true;
	}
	if (memcmp(szBuff, (char*)"00020464", 8) == 0) {
		std::cout << "Component Block 1 - " << szBuff << " - ";
		useful = true;
	}
	if (memcmp(szBuff, (char*)"000503B4", 8) == 0) {
		std::cout << "Component Block1.1a - " << szBuff << " - ";
		useful = true;
	}
	if (memcmp(szBuff, (char*)"000503C2", 8) == 0) {
		std::cout << "Component Block1.1b - " << szBuff << " - ";
		useful = true;
	}
	if (memcmp(szBuff, (char*)"000A03A4", 8) == 0) {
		std::cout << "Component Block1.2a - " << szBuff << " - ";
		useful = true;
	}
	if (memcmp(szBuff, (char*)"000803B0", 8) == 0) {
		std::cout << "Component Block1.2b - " << szBuff << " - ";
		useful = true;
	}
	if (memcmp(szBuff, (char*)"000403A0", 8) == 0) {
		std::cout << "Component Block1.3a - " << szBuff << " - ";
		useful = true;
	}
	if (memcmp(szBuff, (char*)"000502EE", 8) == 0) {
		std::cout << "Component Block1.3b - " << szBuff << " - ";
		useful = true;
	}
	if (memcmp(szBuff, (char*)"0004039C", 8) == 0) {
		std::cout << "Component Block1.7a - " << szBuff << " - ";
		useful = true;
	}
	if (memcmp(szBuff, (char*)"000F034A", 8) == 0) {
		std::cout << "Component Block1.7b - " << szBuff << " - ";
		useful = true;
	}
	if (memcmp(szBuff, (char*)"00020412", 8) == 0) {
		std::cout << "Component Block1.8a - " << szBuff << " - ";
		useful = true;
	}
	if (memcmp(szBuff, (char*)"00020414", 8) == 0) {
		std::cout << "Component Block1.8b - " << szBuff << " - ";
		useful = true;
	}
	if (memcmp(szBuff, (char*)"00020438", 8) == 0) {
		std::cout << "Component Block1.9a - " << szBuff << " - ";
		useful = true;
	}
	if (memcmp(szBuff, (char*)"00020434", 8) == 0) {
		std::cout << "Component Block1.9b - " << szBuff << " - ";
		useful = true;
	}
	if (memcmp(szBuff, (char*)"00020450", 8) == 0) {
		std::cout << "Component Block1.10a - " << szBuff << " - ";
		useful = true;
	}
	if (memcmp(szBuff, (char*)"00020452", 8) == 0) {
		std::cout << "Component Block1.10b - " << szBuff << " - ";
		useful = true;
	}
	if (memcmp(szBuff, (char*)"000403CE", 8) == 0) {
		std::cout << "Component Block1.11a - " << szBuff << " - ";
		useful = true;
	}
	if (memcmp(szBuff, (char*)"000303D4", 8) == 0) {
		std::cout << "Component Block1.11b - " << szBuff << " - ";
		useful = true;
	}
	if (memcmp(szBuff, (char*)"0002040A", 8) == 0) {
		std::cout << "Component Block1.12a - " << szBuff << " - ";
		useful = true;
	}
	if (memcmp(szBuff, (char*)"00020424", 8) == 0) {
		std::cout << "Component Block1.13a - " << szBuff << " - ";
		useful = true;
	}
	if (memcmp(szBuff, (char*)"000303E0", 8) == 0) {
		std::cout << "Component Block1.15a - " << szBuff << " - ";
		useful = true;
	}
	if (memcmp(szBuff, (char*)"0002040C", 8) == 0) {
		std::cout << "Component Block1.16a - " << szBuff << " - ";
		useful = true;
	}
	if (memcmp(szBuff, (char*)"00020416", 8) == 0) {
		std::cout << "Component Block1.17a - " << szBuff << " - ";
		useful = true;
	}
	if (memcmp(szBuff, (char*)"00020428", 8) == 0) {
		std::cout << "Component Block1.18a - " << szBuff << " - ";
		useful = true;
	}
	if (memcmp(szBuff, (char*)"0002043A", 8) == 0) {
		std::cout << "Component Block1.19a - " << szBuff << " - ";
		useful = true;
	}
	if (memcmp(szBuff, (char*)"00020444", 8) == 0) {
		std::cout << "Component Block1.20a - " << szBuff << " - ";
		useful = true;
	}
	if (memcmp(szBuff, (char*)"00020456", 8) == 0) {
		std::cout << "Component Block1.21a - " << szBuff << " - ";
		useful = true;
	}
	if (memcmp(szBuff, (char*)"0002042A", 8) == 0) {
		std::cout << "Component Block1.22a - " << szBuff << " - ";
		useful = true;
	}
	if (memcmp(szBuff, (char*)"0002043E", 8) == 0) {
		std::cout << "Component Block1.23a - " << szBuff << " - ";
		useful = true;
	}
	if (memcmp(szBuff, (char*)"0002044A", 8) == 0) {
		std::cout << "Component Block1.24a - " << szBuff << " - ";
		useful = true;
	}
	if (memcmp(szBuff, (char*)"00020458", 8) == 0) {
		std::cout << "Component Block1.25a - " << szBuff << " - ";
		useful = true;
	}
	if (memcmp(szBuff, (char*)"00020460", 8) == 0) {
		std::cout << "Component Block1.00a - " << szBuff << " - ";
		useful = true;
	}*/
	if (memcmp(szBuff, (char*)"00060680", 8) == 0) {
		std::cout << "Component Block2 - " << szBuff << " - ";
		useful = true;
	}
	if (memcmp(szBuff, (char*)"00040602", 8) == 0) {
		std::cout << "Component Block2.1a - " << szBuff << " - ";
		useful = true;
	}
	if (memcmp(szBuff, (char*)"00040610", 8) == 0) {
		std::cout << "Component Block2.2a - " << szBuff << " - ";
		useful = true;
	}
	if (memcmp(szBuff, (char*)"00040624", 8) == 0) {
		std::cout << "Component Block2.3a - " << szBuff << " - ";
		useful = true;
	}
	if (memcmp(szBuff, (char*)"00040626", 8) == 0) {
		std::cout << "Component Block2.7a - " << szBuff << " - ";
		useful = true;
	}
	if (memcmp(szBuff, (char*)"00040636", 8) == 0) {
		std::cout << "Component Block2.8a - " << szBuff << " - ";
		useful = true;
	}
	if (memcmp(szBuff, (char*)"00040656", 8) == 0) {
		std::cout << "Component Block2.9a - " << szBuff << " - ";
		useful = true;
	}
	if (memcmp(szBuff, (char*)"000605E6", 8) == 0) {
		std::cout << "Component Block2.10a - " << szBuff << " - ";
		useful = true;
	}
	if (memcmp(szBuff, (char*)"00060684", 8) == 0) {
		std::cout << "Component Block2.00a - " << szBuff << " - ";
		useful = true;
	}
	if (memcmp(szBuff, (char*)"00040612", 8) == 0) {
		std::cout << "Component Block2.11a - " << szBuff << " - ";
		useful = true;
	}
	if (memcmp(szBuff, (char*)"0004062C", 8) == 0) {
		std::cout << "Component Block2.12a - " << szBuff << " - ";
		useful = true;
	}
	if (memcmp(szBuff, (char*)"00040618", 8) == 0) {
		std::cout << "Component Block2.15a - " << szBuff << " - ";
		useful = true;
	}
	if (memcmp(szBuff, (char*)"00040628", 8) == 0) {
		std::cout << "Component Block2.16a - " << szBuff << " - ";
		useful = true;
	}
	if (memcmp(szBuff, (char*)"0004063C", 8) == 0) {
		std::cout << "Component Block2.17a - " << szBuff << " - ";
		useful = true;
	}
	if (memcmp(szBuff, (char*)"00040642", 8) == 0) {
		std::cout << "Component Block2.18a - " << szBuff << " - ";
		useful = true;
	}
	if (memcmp(szBuff, (char*)"00040660", 8) == 0) {
		std::cout << "Component Block2.19a - " << szBuff << " - ";
		useful = true;
	}
	if (memcmp(szBuff, (char*)"001206AE", 8) == 0) {
		std::cout << "Component Block2.20a - " << szBuff << " - ";
		useful = true;
	}
	if (memcmp(szBuff, (char*)"00040650", 8) == 0) {
		std::cout << "Component Block2.22a - " << szBuff << " - ";
		useful = true;
	}
	if (memcmp(szBuff, (char*)"00050396", 8) == 0) {
		std::cout << "Component Block2.23a - " << szBuff << " - ";
		useful = true;
	}
	if (memcmp(szBuff, (char*)"00060668", 8) == 0) {
		std::cout << "Component Block2.24a - " << szBuff << " - ";
		useful = true;
	}
	if (memcmp(szBuff, (char*)"00070696", 8) == 0) {
		std::cout << "Component Block2.25a - " << szBuff << " - ";
		useful = true;
	}
	if (memcmp(szBuff, (char*)"00040648", 8) == 0) {
		std::cout << "Component Block2.13a - " << szBuff << " - ";
		useful = true;
	}
	if (memcmp(szBuff, (char*)"0006066E", 8) == 0) {
		std::cout << "Component Block2.21a - " << szBuff << " - ";
		useful = true;
	}

	if (useful) {
		GetWindowRect(hwnd, &rect);
		//std::cout << "The " << i << "th child of Santei" << " - Rectangle is: " << rect.left << ", " << rect.top << ", " << rect.right << ", " << rect.bottom << std::endl;
		std::cout << "The " << i << "th child of Santei" << std::endl;
	}
	i++;
	return TRUE; // must return TRUE; If return is FALSE it stops the recursion
}

[STAThread]
void Main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	SimulateSantei::SS form;

	HWND santei_hwnd = FindWindowA(0, "Santei");
	if (!santei_hwnd) {
		std::cout << "Could not find Santei\n";
		exit(0);
	}
	EnumChildWindows(santei_hwnd, EnumChildProc, 0);

	Application::Run(%form);
}