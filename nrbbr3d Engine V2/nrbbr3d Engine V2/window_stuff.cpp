#include "window_stuff.h"

LRESULT CALLBACK WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);

bool window_stuff::MakeMessageBox(LPCWSTR ueberschrift, LPCWSTR text)
{
	return MessageBox(
		NULL,
		text,
		ueberschrift,
		MB_OK
	);;
}

bool window_stuff::MakeWindow(LPCWSTR fenster_name)
{
	return true;
}
