#include "WashMachine.h"


WashMachine::WashMachine()
{
}


WashMachine::~WashMachine()
{
}

void WashMachine::closeDoor()
{
	m_door.setState(CLOSED);
	cout << "Washer Door Closed   ";
	Sleep(1000);
	system("cls");
}

void WashMachine::openDoor()
{
	m_door.setState(OPEN);
	cout << "Washer Door Opened    ";
	Sleep(1000);
	system("cls");
}

void WashMachine::run()
{
	if (getInput(m_command))
		processInput(m_command);
}

bool WashMachine::getInput(Command& c)
{
	m_panel.getInputs(c);

	if (c.wash_cycle_selected == -1 || c.water_temp_selected == -1
		|| c.water_level_selected == -1)
		return false;
	else
		return true;
}

void WashMachine::processInput(const Command& c)
{
	if (m_door.getState() != OPEN)
	{
		processPumpWater();
		processLoad();
	}
	else
	{
		system("cls");
		cout << "Error  <MACHINE DOOR OPEN> Cycle not Started" << endl;
	}
}


void WashMachine::processPumpWater()
{
	m_pump.powerOn();
	m_pump.setPumpState(ADDING_WATER);
	m_pump.run(m_command,m_pump);
	m_pump.powerOff();
}


void WashMachine::processLoad()
{
	m_motor.powerOn();
	m_motor.runWash(m_command, m_motor);
	m_motor.powerOff();
	drain();
	rinse();
	drain();
	spin();
}

void WashMachine::drain()
{
	m_pump.powerOn();
	cout << "Proceeding to DRAIN Process" << endl;
	Sleep(2000);
	m_pump.setPumpState(DRAINING_WATER);
	m_pump.run(m_command, m_pump);
	m_pump.powerOff();
}

void WashMachine::rinse()
{
	switch (m_command.wash_cycle_selected)
	{
		cout << "Proceeding to RINSE Process" << endl;
		Sleep(2000);
	case 1:
		m_command.water_temp_selected = WARM;
		break;
	case 2:
		m_command.water_temp_selected = COLD;
		break;
	case 3:
		m_command.water_temp_selected = COLD;
	default:
		break;
	}
	processPumpWater();
	m_motor.powerOn();
	m_motor.runRinse(m_command, m_motor);
	m_motor.powerOff();
}
	


void WashMachine::spin()
{
	cout << "Proceeding to SPIN Process" << endl;
	Sleep(2000);
	m_motor.powerOn();
	m_motor.runSpin(m_command, m_motor);
	m_motor.powerOff();
	system("cls");
	switch (m_command.wash_cycle_selected)
	{
	case 1:
		cout << "PERMANENT PRESS CYCLE Complete" << endl;
		break;
	case 2:
		cout << "DELICATE CYCLE Complete" << endl;
		break;
	case 3:
		cout << "NORMAL CYCLE Complete" << endl;
	default:
		break;
	}
	cout << "You May Remove Your Garments Now" << endl;
	Sleep(2000);
}
