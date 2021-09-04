#include "main_motor.h"
#include <windows.h>
#include "Timer.h"



main_motor::main_motor()
{
}


main_motor::~main_motor()
{
}

void main_motor::powerOn()
{
	cout << "Washer Motor Power On" << endl;
	Sleep(1000);
}

void main_motor::powerOff()
{
	cout << "Motor Turned Off" << endl;
	m_state = STOPPED;
	Sleep(3000);
	system("cls");
}

void main_motor::runWash(Command& c, main_motor& motor)
{
	std::string cycle, message;
	switch (c.wash_cycle_selected)
	{
		case 1:
			motor.setMotorState(FAST);
			cout << "Washer Motor Running FAST" << endl;
			cycle = "WASH::PERMANENT PRESS";
			message = cycle + " Cycle Started";
			Sleep(2000);
			Timer(0, 0, 8, message);
			break;
		case 2:
			motor.setMotorState(SLOW);
			cout << "Washer Motor Running SLOW" << endl;
			cycle = "WASH::DELICATE";
			message = cycle + " Cycle Started";
			Sleep(2000);
			Timer(0, 0, 6, message);
			break;
		case 3:
			motor.setMotorState(FAST);
			cout << "Washer Motor Running FAST" << endl;
			cycle = "WASH::NORMAL";
			message = cycle + " Cycle Started";
			Sleep(2000);
			Timer(0, 0, 10, message);
		default:
			break;
	}
	cout << "WASH::CYCLE COMPLETE" << endl;
	Sleep(2000);
}

void main_motor::runRinse(Command& c, main_motor& motor)
{
	std::string cycle, message;
	switch (c.wash_cycle_selected)
	{
		case 1:
			motor.setMotorState(MEDIUM);
			cout << "Washer Motor Running MEDIUM" << endl;
			cycle = "RINSE::PERMANENT PRESS";
			message = cycle + " Cycle Started";
			Sleep(2000);
			Timer(0, 0, 8, message);
			break;
		case 2:
			motor.setMotorState(MEDIUM);
			cout << "Washer Motor Running MEDIUM" << endl;
			cycle = "RINSE::DELICATE";
			message = cycle + " Cycle Started";
			Sleep(2000);
			Timer(0, 0, 6, message);
			break;
		case 3:
			motor.setMotorState(MEDIUM);
			cout << "Washer Motor Running MEDIUM" << endl;
			cycle = "RINSE::NORMAL";
			message = cycle + " Cycle Started";
			Sleep(2000);
			Timer(0, 0, 12, message);
		default:
			break;
		
	}
	cout << "RINSE::CYCLE COMPLETE" << endl;
	Sleep(2000);
}

void main_motor::runSpin(Command& c, main_motor& motor)
{
	std::string cycle, message;
	switch (c.wash_cycle_selected)
	{
	case 1:
		motor.setMotorState(SLOW);
		cout << "Washer Motor Running SLOW" << endl;
		cycle = "SPIN::PERMANENT PRESS";
		message = cycle + " Cycle Started";
		Sleep(2000);
		Timer(0, 0, 7, message);
		break;
	case 2:
		motor.setMotorState(SLOW);
		cout << "Washer Motor Running SLOW" << endl;
		cycle = "SPIN::DELICATE";
		message = cycle + " Cycle Started";
		Sleep(2000);
		Timer(0, 0, 5, message);
		break;
	case 3:
		motor.setMotorState(FAST);
		cout << "Washer Motor Running FAST" << endl;
		cycle = "SPIN::NORMAL";
		message = cycle + " Cycle Started";
		Sleep(2000);
		Timer(0, 0, 10, message);
	default:
		break;
	}
	cout << "SPIN::CYCLE COMPLETE" << endl;
	Sleep(2000);
}

void main_motor::setMotorState(MOTOR_STATE speed)
{
	m_state = speed;
}
