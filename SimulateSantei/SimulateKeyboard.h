#ifndef SIMULATE_KEYBOARD_H
#define SIMULATE_KEYBOARD_H
#include <windows.h>
#include <string>

WPARAM GetVkCode(char key);//used as wparam in WM_KEYDOWN/WM_KEYUP message
BYTE   GetScanCode(char key);//used in LPARAM of WM_KEYDOWN/WM_KEYUP message
BYTE   GetScanCode_VK(BYTE vk);

LPARAM MakeLPARAM_WM_KEYDOWN(char key, bool prev = false, unsigned short rep = 1);
LPARAM MakeLPARAM_WM_KEYUP(char key, SHORT rep = 1);
LPARAM MakeLPARAM_WM_CHAR(char key, unsigned short rep = 1);

LPARAM MakeLPARAM_WM_KEYDOWN_VK(BYTE vk, bool prev = false, unsigned short rep = 1);
LPARAM MakeLPARAM_WM_KEYUP_VK(BYTE vk, unsigned short rep = 1);

std::string SystemStringToStdString(System::String^);

void WriteCharacter(HWND hwnd, const char key);//cannot send Capital character or any special character using shift
void WriteString(HWND hwnd, const char* keys, int nKeys);//cannot send Capital character or any special character using shift
void WriteCharacterCP(HWND hwnd, const char key);//can write capital character
void WriteStringCP(HWND hwnd, const char* keys, int nKeys);//can write capital character

void PutCharacter(char key);//using SendInput
void PutString(char* keys, UINT nKeys);//using SendInput
#endif // SIMULATE_KEYBOARD_H
