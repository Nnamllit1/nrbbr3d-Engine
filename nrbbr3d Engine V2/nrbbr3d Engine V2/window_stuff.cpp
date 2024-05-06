#include "window_stuff.h"

int window_stuff::MakeMessageBox(LPCWSTR ueberschrift, LPCWSTR text)
{
	return MessageBox(
		NULL,
		text,
		ueberschrift,
		IDOK
	);;
}
