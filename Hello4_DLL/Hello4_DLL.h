#pragma once

class __declspec(dllexport) Hello4_DLL
{
public:
	Hello4_DLL();
	~Hello4_DLL();

	void SayThis(wchar_t *phrase);
};