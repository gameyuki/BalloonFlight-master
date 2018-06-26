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
* アプリケーションクラス
*/
class Application
{
public:
	/**
	* シーンのID列挙子
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
	* コンストラクタ
	*/
	Application();

	/**
	* デストラクタ
	*/
	~Application();

	/**
	* 初期化処理
	*/
	bool Initialize();

	/**
	* 終了処理
	*/
	void Finalize();

	/**
	* アプリケーションの実行
	*/
	void Run();

private:

	/* TODO コメント */
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