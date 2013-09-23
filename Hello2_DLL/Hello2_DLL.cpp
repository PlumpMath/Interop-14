#include "Hello2_DLL.h"
#include <Windows.h>


Hello2_DLL::Hello2_DLL(void)
{
}


Hello2_DLL::~Hello2_DLL(void)
{
}

Hello2_DLL* HelloWorld_New()
{
	return new Hello2_DLL();
}

void Hello2_DLL_Delete(Hello2_DLL* h)
{
	delete(h);
	h = 0;
}

void Hello2_DLL::SayThis(wchar_t *phrase)
{
	MessageBox(NULL, phrase, L"Hello2_DLL:SayThis()", MB_OK);
}