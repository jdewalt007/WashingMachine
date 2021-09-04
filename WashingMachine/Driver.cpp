#include "Common.h"
#include "WashMachine.h"

int main(int argc, char* argv[])
{
	WashMachine myMachine;
	myMachine.closeDoor();
	myMachine.run();

	/*
	WashMachine* pMachine =
	new WashMachine;
	if (pMachine!=nullptr)
	pMachine->run();
	*/

	return 0;
}