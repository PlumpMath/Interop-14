#include "ManagedHello4.h"
using namespace cliwrapperhello4;

ManagedHello4::ManagedHello4(void)
	: pHello4(new Hello4_DLL())
{
}

ManagedHello4::~ManagedHello4()
{
	delete(pHello);
	pHello4 = 0;
}


void ManagedHello4::SayThis()
{
	pHello4->SayThis();
}