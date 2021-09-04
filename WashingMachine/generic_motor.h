#pragma once



class GenericMotor
{
public:
	GenericMotor();
	virtual ~GenericMotor();

	void powerOn();
	void powerOff();

	bool run();

};