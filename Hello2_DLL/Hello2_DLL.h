#pragma once
class __declspec(dllexport) Hello2_DLL
{
public:
	Hello2_DLL(void);
	~Hello2_DLL(void);

	void SayThis(wchar_t *phrase);
};

extern "C" __declspec(dllexport) Hello2_DLL* HelloWorld_New();
extern "C" __declspec(dllexport) void Hello2_DLL_Delete(Hello2_DLL* h);
