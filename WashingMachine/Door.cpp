#include "Door.h"



Door::Door()
{
}


Door::~Door()
{
}

DOOR_STATE Door::getState() const
{
	return m_state;
}

void Door::setState(DOOR_STATE setme)
{
	m_state = setme;
}