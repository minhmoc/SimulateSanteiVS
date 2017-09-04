/*Author: minhhn4
* Date: 07/08/2017
*/
#ifndef SIMULATE_MOUSE_H
#define SIMULATE_MOUSE_H
#include <windows.h>

void PutLMClick(LONG dx, LONG dy);
void PutRMClick(LONG dx, LONG dy);

void MakeLMClick(HWND hwnd, short relative_x, short relative_y);//use short instead of WORD due to ability to receive negative coordinate in system with multi monitor
void MakeRMClick(HWND hwnd, short relative_x, short relative_y);

void MakeLMDbClick(HWND hwnd, short relative_x, short relative_y);
void MakeRMDbClick(HWND hwnd, short relative_x, short relative_y);
#endif // SIMULATE_MOUSE_H
