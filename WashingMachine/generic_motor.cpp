#include "Common.h"
#include "generic_motor.h"



GenericMotor::GenericMotor()
{
}


GenericMotor::~GenericMotor()
{
}

void
GenericMotor::powerOn()
{
	cout << "GenericMotor::powerOn" << endl;
}

void
GenericMotor::powerOff()
{

}

bool
GenericMotor::run()
{
	cout << "GenericMotor::run" << endl;
	return true;
}
