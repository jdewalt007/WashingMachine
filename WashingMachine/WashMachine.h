#pragma once
#include "Door.h"
#include "FrontPanel.h"
#include "main_motor.h"
#include "Pump.h"
#include "Timer.h"

class WashMachine
{

public:
	WashMachine();
	virtual ~WashMachine();
	void run();
	void closeDoor();
	void openDoor();


private:

	bool getInput(Command&);
	void processInput(const Command&);

	void processLoad();
	void processPumpWater();
	void drain();
	void rinse();
	void spin();


	Door m_door;
	FrontPanel m_panel;
	main_motor m_motor;
	Command m_command;
	Pump m_pump;
	
};

