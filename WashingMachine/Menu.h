#pragma once

class Command;

class Menu
{

public:

	Menu();
	virtual ~Menu();

	virtual void run(Command& c);
};
