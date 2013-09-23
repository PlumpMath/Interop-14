// Hello4_DLL.cpp : 定义 DLL 应用程序的导出函数。
//

#include "stdafx.h"
#include "Hello4_DLL.h"
#include <Windows.h>

Hello4_DLL::Hello4_DLL()
{

}

Hello4_DLL::~Hello4_DLL()
{

}

void Hello4_DLL::SayThis(wchar_t *phrase)
{
	MessageBox(NULL, phrase, L"Hello4_DLL Invoked", MB_OK);
}

