#pragma once
#include <Windows.h>

class window_stuff
{
public:
	bool MakeMessageBox(LPCWSTR ueberschrift, LPCWSTR text);
	bool MakeWindow(LPCWSTR fenster_name);
	//bool MakeWindow(LPCWSTR fenster_name);
};

