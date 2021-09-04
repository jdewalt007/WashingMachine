#pragma once
#include "Common.h"

class Door
{
public:
	Door();
	virtual ~Door();
	DOOR_STATE getState() const;
	void setState(DOOR_STATE);
private:
	DOOR_STATE m_state = OPEN;
};



