#pragma once
#include "Command.h"
#include "common.h"

class Pump
{
public:
	Pump();
	virtual ~Pump();

	void powerOn();
	void powerOff();
	void run(Command&,Pump&);



	void setPumpState(PUMP_STATE);
	PUMP_STATE getPumpState();

private:
	PUMP_STATE p_state = OFF;

};

