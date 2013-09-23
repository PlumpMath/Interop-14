#include "StdAfx.h"
#include "Hello_DLL.h"

Hello_DLL::Hello_DLL(void)
{
}


Hello_DLL::~Hello_DLL(void)
{
}

void Hello_DLL::SayHello(wchar_t *phrase)
{
	MessageBox(NULL, phrase, L"Say Hello Says", MB_OK);
}