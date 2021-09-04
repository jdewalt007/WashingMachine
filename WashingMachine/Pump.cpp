#include <iostream>
#include <string>
#include "Pump.h"
#include "Timer.h"
using std::cout;
using std::endl;



Pump::Pump()
{
}


Pump::~Pump()
{
}

void Pump::powerOn()
{
	cout << "Washing machine Pump Powered On" << endl;
	Sleep(1000);
}

void Pump::setPumpState(PUMP_STATE p)
{
	p_state = p;
}

PUMP_STATE Pump::getPumpState()
{
	return p_state;
}

void Pump::powerOff()
{
	cout << "Washing machine Pump turned off" << endl;
	p_state = OFF;
	Sleep(3000);
	system("cls");
}

void Pump::run(Command& c, Pump& pump)
{

	if (pump.getPumpState() == ADDING_WATER)
	{
		
		std::string temp = "";
		switch (c.water_temp_selected)
		{
		case 1:
			temp = "HOT";
			break;
		case 2:
			temp = "COLD";
			break;
		case 3:
			temp = "WARM";
		default:
			break;
		}
		cout << "Pumping " << temp << " Water into Washer" << endl;
		Sleep(3000);

		std::string level, message;
		switch (c.water_level_selected)
		{
		case 1:
			level = "HIGH";
			message = "Filling to " + level + " level";
			Timer(0, 0, 12, message);
			break;
		case 2:
			level = "MEDIUM";
			message = "Filling to " + level + " level";
			Timer(0, 0, 8, message);
			break;
		case 3:
			level = "LOW";
			message = "Filling to " + level + " level";
			Timer(0, 0, 4, message);
		default:
			break;
		}

	}
	else if (pump.getPumpState() == DRAINING_WATER)
	{
		std::string level, message;
		switch (c.water_level_selected)
		{
		case 1:
			level = "HIGH";
			message = "DRAINING WASHER:: " + level + " Water Level";
			Timer(0, 0, 12, message);
			break;
		case 2:
			level = "MEDIUM";
			message = "DRAINING WASHER:: " +  level + " Water Level";
			Timer(0, 0, 8, message);
			break;
		case 3:
			level = "LOW";
			message = "DRAINING WASHER:: " + level + " Water Level";
			Timer(0, 0, 4, message);
		default:
			break;
		}

	}

}