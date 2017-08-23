#include "SimulateKeyboard.h"

#include <iostream>

#include <msclr\marshal_cppstd.h>//for convert system string to std string

#ifndef MAPVK_VK_TO_VSC_EX
#define MAPVK_VK_TO_VSC_EX 4
#endif

const INPUT INPUT_leftshift_pressed = { INPUT_KEYBOARD,{ VK_LSHIFT,0,0,0,0 }  };
const INPUT INPUT_leftshift_released = { INPUT_KEYBOARD,{ VK_LSHIFT, 0, KEYEVENTF_KEYUP, 0, 0 } };
const INPUT INPUT_leftctrl_pressed = { INPUT_KEYBOARD,{ VK_LCONTROL, 0,0,0,0 } };
const INPUT INPUT_leftctrl_released = { INPUT_KEYBOARD,{ VK_LCONTROL, 0, KEYEVENTF_KEYUP, 0, 0 }  };
const INPUT INPUT_leftalt_pressed = { INPUT_KEYBOARD,{ VK_LMENU, 0,0,0,0 }  };
const INPUT INPUT_leftalt_released = { INPUT_KEYBOARD,{ VK_LMENU, 0, KEYEVENTF_KEYUP, 0, 0 }  };
const HKL hkl = LoadKeyboardLayout(L"00000409", KLF_SUBSTITUTE_OK);

void PutCharacter(char key)
{
	SHORT vk = VkKeyScanExA(key, hkl);//A and a have same lower byte. But A have higher byte set to 1 to indicate shift is pressed.
									  //    std::cout << std::hex << "Key virtual code for " << key << " is " << vk << std::endl;

	INPUT INPUT_vk_pressed;
	INPUT_vk_pressed.type = INPUT_KEYBOARD;
	INPUT_vk_pressed.ki.wVk = vk;
	INPUT_vk_pressed.ki.dwFlags = 0;//pressed

	INPUT INPUT_vk_release;
	INPUT_vk_release.type = INPUT_KEYBOARD;
	INPUT_vk_release.ki.wVk = vk;
	INPUT_vk_release.ki.dwFlags = KEYEVENTF_KEYUP;

	bool leftshift_pressed = vk & 0x0100;
	bool leftctrl_pressed = vk & 0x0200;
	bool leftalt_pressed = vk & 0x0400;

	INPUT input[4];
	input[1] = INPUT_vk_pressed;
	input[2] = INPUT_vk_release;

	if (leftshift_pressed) {
		input[0] = INPUT_leftshift_pressed;
		input[3] = INPUT_leftshift_released;
		SendInput(4, input, sizeof(INPUT));
	}
	else if (leftctrl_pressed) {
		input[0] = INPUT_leftctrl_pressed;
		input[3] = INPUT_leftctrl_released;
		SendInput(4, input, sizeof(INPUT));
	}
	else if (leftalt_pressed) {
		input[0] = INPUT_leftalt_pressed;
		input[3] = INPUT_leftalt_released;
		SendInput(4, input, sizeof(INPUT));
	}
	else {
		SendInput(2, input + 1, sizeof(INPUT));
	}
}

void PutString(char *keys, UINT nKeys)
{
	for (UINT i = 0; i < nKeys; i++) {
		PutCharacter(keys[i]);
	}
}

WPARAM GetVkCode(char key)
{
	return VkKeyScanA(key) & 0x00FF;
}

BYTE GetScanCode(char key)
{
	return MapVirtualKeyExA(GetVkCode(key), MAPVK_VK_TO_VSC_EX, hkl);
}

LPARAM MakeLPARAM_WM_KEYDOWN(char key, bool prev, unsigned short rep)
{
	LPARAM result = 0x0;
	result |= rep;//set repeat count. [0-15]
	result |= GetScanCode(key) << 16;//set scan code. [16-23]
	result &= ~(0x1 << 24);//clear extended. [24]
	result &= ~(0x1 << 29);//clear context. [29]
	if (prev) {
		result |= 0x1 << 30;//set previous is down. [30]
	}
	else {
		result &= ~(0x1 << 30);//clear. previous is up. [30]
	}
	result &= ~(0x1 << 31);//celar transition. [31]
	return result;
}

LPARAM MakeLPARAM_WM_KEYUP(char key, SHORT rep)
{
	LPARAM result = 0x0;
	result |= rep;//set repeat count. [0-15]
	result |= GetScanCode(key) << 16;//set scan code. [16-23]
	result &= ~(0x1 << 24);//clear extended. [24]
	result &= ~(0x1 << 29);//clear context. [29]
	result |= 0x1 << 30;//set previous is down. [30]
	result |= 0x1 << 31;//set transition. [31]
	return result;
}

std::string SystemStringToStdString(System::String^ SysString)
{
	msclr::interop::marshal_context context;
	std::string StdString = context.marshal_as<std::string>(SysString);
	return StdString;
}

void WriteCharacter(HWND hwnd, const char key)
{
	SHORT vk_and_shift = VkKeyScanExA(key, hkl);
	bool leftshift_pressed = vk_and_shift & 0x0100;
	if (leftshift_pressed) {
		PostMessageA(hwnd, WM_KEYDOWN, VK_SHIFT, MakeLPARAM_WM_KEYDOWN_VK(VK_SHIFT));
	}

	PostMessageA(hwnd, WM_KEYDOWN, GetVkCode(key), MakeLPARAM_WM_KEYDOWN(key));
	PostMessageA(hwnd, WM_KEYUP, GetVkCode(key), MakeLPARAM_WM_KEYUP(key));

	if (leftshift_pressed) {
		PostMessageA(hwnd, WM_KEYUP, VK_SHIFT, MakeLPARAM_WM_KEYUP_VK(VK_SHIFT));
	}
}

void WriteString(HWND hwnd, const char *keys, int nKeys)
{
	for (int i = 0; i < nKeys; i++) {
		WriteCharacter(hwnd, *(keys + i));;
	}
}

LPARAM MakeLPARAM_WM_KEYDOWN_VK(BYTE vk, bool prev, unsigned short rep)
{
	LPARAM result = 0x0;
	result |= rep;//set repeat count. [0-15]
	result |= GetScanCode_VK(vk) << 16;//set scan code. [16-23]
	result &= ~(0x1 << 24);//clear extended. [24]
	result &= ~(0x1 << 29);//clear context. [29]
	if (prev) {
		result |= 0x1 << 30;//set previous is down. [30]
	}
	else {
		result &= ~(0x1 << 30);//clear. previous is up. [30]
	}
	result &= ~(0x1 << 31);//celar transition. [31]
	return result;
}

LPARAM MakeLPARAM_WM_KEYUP_VK(BYTE vk, unsigned short rep)
{
	LPARAM result = 0x0;
	result |= rep;//set repeat count. [0-15]
	result |= GetScanCode_VK(vk) << 16;//set scan code. [16-23]
	result &= ~(0x1 << 24);//clear extended. [24]
	result &= ~(0x1 << 29);//clear context. [29]
	result |= 0x1 << 30;//set previous is down. [30]
	result |= 0x1 << 31;//set transition. [31]
	return result;
}

BYTE GetScanCode_VK(BYTE vk)
{
	return MapVirtualKeyExA(vk, MAPVK_VK_TO_VSC_EX, hkl);
}

void WriteCharacterCP(HWND hwnd, const char key)
{
	PostMessageA(hwnd, WM_KEYDOWN, GetVkCode(key), MakeLPARAM_WM_KEYDOWN(key));
	//PostMessageA(hwnd, WM_CHAR, key, MakeLPARAM_WM_CHAR(key));
	PostMessageA(hwnd, WM_KEYUP, GetVkCode(key), MakeLPARAM_WM_KEYUP(key));
}

LPARAM MakeLPARAM_WM_CHAR(char key, unsigned short rep)
{
	LPARAM result = 0x0;
	result |= rep;//set repeat count. [0-15]
	result |= GetScanCode(key) << 16;//set scan code. [16-23]
	result &= ~(0x1 << 24);//clear extended. [24]
	result &= ~(0x1 << 29);//clear context (alt key in NOT held down). [29]
	result |= 0x1 << 30;//whatever
	result |= 0x1 << 31;//whatever
	return result;
}

void WriteStringCP(HWND hwnd, const char *keys, int nKeys)
{
	for (int i = 0; i < nKeys; i++) {
		PostMessageA(hwnd, WM_CHAR, *(keys + i), MakeLPARAM_WM_CHAR(*(keys + i)));
	}
}
