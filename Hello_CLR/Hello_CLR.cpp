// Hello_CLR.cpp: ����Ŀ�ļ���

#include "stdafx.h"
#include "..\Hello_DLL\Hello_DLL.h"

#pragma comment(lib, "..\\Debug\\Hello_DLL.lib")

using namespace System;

int main(array<System::String ^> ^args)
{
    Console::WriteLine(L"Hello World");

	Hello_DLL h;
	h.SayHello(L"Visual studio: Hello_CLR");

    return 0;
}
