#include <iostream>
#include "WashMachine.h"






int main(int argc, char* argv[])
{
	WashMachine myMachine;
	myMachine.closeDoor();
	myMachine.run();
	myMachine.openDoor();
	myMachine.closeDoor();

	return 0;
}