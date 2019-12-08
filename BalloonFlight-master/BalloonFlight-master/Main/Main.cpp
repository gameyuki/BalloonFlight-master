//----------------------------------------------------------------------
// Include
//----------------------------------------------------------------------
#include<Windows.h>
#include"Application\Application.h"

int WINAPI WinMain(HINSTANCE _hInstance, HINSTANCE _hPrevInstance, LPSTR _szStr, INT _icmdShow)
{
	::ImmDisableIME(NULL);
	Application app;
	app.Initialize();
	app.Run();
	app.Finalize();

	return 0;
}