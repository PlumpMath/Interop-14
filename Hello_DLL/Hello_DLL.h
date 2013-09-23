#pragma once
class __declspec(dllexport) Hello_DLL
{
public:
	Hello_DLL(void);
	~Hello_DLL(void);

	void SayHello(wchar_t *phrase);
};

