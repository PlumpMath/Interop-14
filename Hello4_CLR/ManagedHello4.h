#pragma once
#include "..\Hello4_DLL\Hello4_DLL.h"

#pragma comment(lib, "..\\Debug\\Hello4_DLL.lib")

namespace cliwrapperhello4
{
	public ref class ManagedHello4
	{
	public:
		ManagedHello4(void);
		~ManagedHello4();
		void SayThis(System::String ^phrase);


	private:
		Hello4_DLL *pHello4;

	};


}
