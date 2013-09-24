#pragma once
#include <vcclr.h>
#include <cstring>

namespace SimpleMarshal
{
	static wchar_t* to(System::String ^str)
	{
		pin_ptr<const wchar_t> cpwc = PtrToStringChars(str);
		int len = str->Length + 1;
		wchar_t* nativeStr = new wchar_t[len]; 
		wcscpy_s(nativeStr, len, cpwc);

		return nativeStr;
	}
}