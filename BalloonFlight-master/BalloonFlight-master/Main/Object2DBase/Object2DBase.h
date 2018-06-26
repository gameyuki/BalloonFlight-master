#ifndef OBJECT2DBASE_H
#define	OBJECT2DBASE_H

//----------------------------------------------------------------------
// Include
//----------------------------------------------------------------------
#include"Library\ObjectBase\ObjectBase.h"

/**
* 2Dオブジェクトの基底クラス
*/
class Object2DBase : public Lib::ObjectBase
{
public:
	/**
	* コンストラクタ
	*/
	Object2DBase();

	/**
	* デストラクタ
	*/
	virtual ~Object2DBase();

	/**
	* 初期化処理
	* @return 初期化に成功したらtrue 失敗したらfalse
	*/
	virtual bool Initialize();

	/**
	* 終了処理
	*/
	virtual void Finalize();

	/**
	* オブジェクトの更新
	*/
	virtual void Update();

	/**
	* オブジェクトの描画
	*/
	virtual void Draw();

private:

};



#endif