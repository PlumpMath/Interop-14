#include "ManagedHello4.h"
#include "SimpleMarshal.hpp"

using namespace cliwrapperhello4;

ManagedHello4::ManagedHello4(void)
	: pHello4(new Hello4_DLL())
{
}

ManagedHello4::~ManagedHello4()
{
	delete(pHello4);
	pHello4 = 0;
}


void ManagedHello4::SayThis(System::String ^phrase)
{
	pHello4->SayThis(SimpleMarshal::to(phrase));
}