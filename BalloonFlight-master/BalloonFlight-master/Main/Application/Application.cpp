/* TODO ƒRƒƒ“ƒg */
#include"Application.h"

Application::Application()
{

}

Application::~Application()
{

}

bool Application::Initialize()
{
	m_pMainWindow = new Lib::Window;
	m_pSceneManager = new Lib::SceneManager;
	return true;
}

void Application::Finalize()
{

}

void Application::Run()
{
	/* TODO 60fps */
	DWORD CurrentTime = timeGetTime();
	DWORD PrevTime = timeGetTime();
	timeBeginPeriod(1);

	while (1)
	{
		Sleep(1);

		if (!m_pMainWindow->Update())
		{

			CurrentTime = timeGetTime();

			if (PrevTime - CurrentTime >= 1000 / 60)
			{
				if (m_pSceneManager->Update())
				{
					break;
				}

				CurrentTime = PrevTime;
			}
			timeEndPeriod(1);
		}
		else
		{
			break;
		}
	}
}

void Application::Test()
{

}

//----------------------------------------------------------------------
// Private Functions
//----------------------------------------------------------------------
bool Application::CreateMainWindow()
{

	return true;
}

bool Application::CreateGraphicsDevice()
{

	return true;
}

bool Application::CreateInputDevice()
{

	return true;
}

bool Application::CreateSceneManager()
{

	return true;
}