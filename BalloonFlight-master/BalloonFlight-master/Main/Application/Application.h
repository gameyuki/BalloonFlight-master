#ifndef APPLICATION_H
#define	APPLICATION_H

//----------------------------------------------------------------------
// Include
//----------------------------------------------------------------------
#include"Library\Window\Window.h"
#include"Library\SceneManager\SceneManager.h"

class ClearScene;
class GameScene;
class OverScene;
class ResultScene;
class SelectScene;
class TitleScene;

/**
* �A�v���P�[�V�����N���X
*/
class Application
{
public:
	/**
	* �V�[����ID�񋓎q
	*/
	enum SCENE_ID
	{
		TITLESCENE_ID,
		SELECTSCENE_ID,
		GAMESCENE_ID,
		CLEARSCENE_ID,
		OVERSCENE_ID,
		RESULTSCENE_ID,
		ENDSCENE_ID
	};

	/**
	* �R���X�g���N�^
	*/
	Application();

	/**
	* �f�X�g���N�^
	*/
	~Application();

	/**
	* ����������
	*/
	bool Initialize();

	/**
	* �I������
	*/
	void Finalize();

	/**
	* �A�v���P�[�V�����̎��s
	*/
	void Run();

private:

	/* TODO �R�����g */
	bool CreateMainWindow();
	
	bool CreateGraphicsDevice();

	bool CreateInputDevice();
	
	bool CreateSceneManager();

	void ReleaseMainWindow();

	void ReleaseGraphicsDevice();

	void ReleaseInputDevice();

	void ReleaseSceneManager();

	Lib::Window* m_pMainWindow;
	Lib::SceneManager* m_pSceneManager;


};



#endif