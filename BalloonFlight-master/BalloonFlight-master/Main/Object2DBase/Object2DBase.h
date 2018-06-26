#ifndef OBJECT2DBASE_H
#define	OBJECT2DBASE_H

//----------------------------------------------------------------------
// Include
//----------------------------------------------------------------------
#include"Library\ObjectBase\ObjectBase.h"

/**
* 2D�I�u�W�F�N�g�̊��N���X
*/
class Object2DBase : public Lib::ObjectBase
{
public:
	/**
	* �R���X�g���N�^
	*/
	Object2DBase();

	/**
	* �f�X�g���N�^
	*/
	virtual ~Object2DBase();

	/**
	* ����������
	* @return �������ɐ���������true ���s������false
	*/
	virtual bool Initialize();

	/**
	* �I������
	*/
	virtual void Finalize();

	/**
	* �I�u�W�F�N�g�̍X�V
	*/
	virtual void Update();

	/**
	* �I�u�W�F�N�g�̕`��
	*/
	virtual void Draw();

private:

};



#endif