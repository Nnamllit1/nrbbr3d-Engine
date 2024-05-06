#include "window_stuff.h"

bool window_stuff::MakeMessageBox(LPCWSTR ueberschrift, LPCWSTR text)
{
	return MessageBox(
		NULL,
		text,
		ueberschrift,
		MB_OK
	);;
}
