//---------------------------------------------------------------------------
// Sword3 Engine (c) 1999-2000 by Kingsoft
// 
// File:	KScript.cpp
// Date:	2001-9-11 10:33:35
// Code:	Romandou
// Desc:	脚本引擎接口
//---------------------------------------------------------------------------
#include "KWin32.h"
#include "KDebug.h"
#include "KScript.h"
//---------------------------------------------------------------------------
// 函数:	KScript::KScript
// 功能:	
// 返回:	
//---------------------------------------------------------------------------
KScript::KScript()
{
}
//---------------------------------------------------------------------------
// 函数:	KScript::~KScript
// 功能:	
// 返回:	
//---------------------------------------------------------------------------
KScript::~KScript()
{
}
//---------------------------------------------------------------------------
// 函数:	KScript::Init
// 功能:	
// 返回:	BOOL 
//---------------------------------------------------------------------------
BOOL KScript::Init()
{
	return TRUE;
}
//---------------------------------------------------------------------------
// 函数:	KScript::Exit
// 功能:	
// 返回:	void
//---------------------------------------------------------------------------
void KScript::Exit()
{
}
//---------------------------------------------------------------------------
// 函数:	KScript::Load
// 功能:	
// 返回:	BOOL 
//---------------------------------------------------------------------------
BOOL KScript::Load(char* FileName)
{
	return TRUE;
}
//---------------------------------------------------------------------------
// 函数:	KScript::Compile
// 功能:	
// 返回:	BOOL 
//---------------------------------------------------------------------------
BOOL KScript::Compile(char* FileName)
{
	return TRUE;
}
//---------------------------------------------------------------------------
// 函数:	KScript::Execute
// 功能:	
// 返回:	BOOL 
//---------------------------------------------------------------------------
BOOL KScript::Execute()
{
	return TRUE;
}
//---------------------------------------------------------------------------
// 函数:	KScript::CallFunction
// 功能:	
// 返回:	BOOL 
//---------------------------------------------------------------------------
BOOL KScript::CallFunction(LPSTR cFuncName, int nResults, LPSTR cFormat,...)
{
	return TRUE;
}
//---------------------------------------------------------------------------
// 函数:	KScript::RegisterFunction
// 功能:	
// 参数:	
// 返回:	BOOL
//---------------------------------------------------------------------------
BOOL KScript::RegisterFunction(LPSTR FuncName, void* Func)
{
	return TRUE;
}
//---------------------------------------------------------------------------
