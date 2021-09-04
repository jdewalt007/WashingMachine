#pragma once
#include "Common.h"



class Command
{
public:

	Command();
	virtual ~Command();

	CYCLE_TYPE wash_cycle_selected = UNDEFINED;
	WATER_TEMP water_temp_selected = NO_TEMP;
	WATER_LEVEL water_level_selected = NO_LEVEL;


};

