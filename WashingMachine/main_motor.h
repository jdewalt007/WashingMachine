#pragma once
#include "common.h"
#include "Command.h"


class main_motor 
	
{
public:


	main_motor();
	virtual ~main_motor();

	void powerOn();
	void powerOff();
	void runWash(Command&, main_motor&);
	void runRinse(Command&, main_motor&);
	void runSpin(Command&, main_motor&);
	void setMotorState(MOTOR_STATE);

private:
	MOTOR_STATE m_state = STOPPED;
	
};

