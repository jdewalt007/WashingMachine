#pragma once
#include "Menu.h"
#include "Command.h"

class FrontPanel
{
public:
	FrontPanel();
	virtual ~FrontPanel();

	void getInputs(Command &);

private:
	Menu m_Menu;
};
