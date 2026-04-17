#include <iostream>
#include <Windows.h>

void setColor(int textColor, int bgColor = 0)
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, textColor | (bgColor << 4));
}