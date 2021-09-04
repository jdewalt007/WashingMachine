#pragma once


typedef enum
{
	OPEN = 0,
	CLOSED = 1

} DOOR_STATE;

typedef enum
{
	PERM_PRESS = 1,
	DELICATE = 2,
	NORMAL = 3,
	UNDEFINED = -1

} CYCLE_TYPE;

typedef enum
{
	FAST = 1,
	MEDIUM = 2,
	SLOW = 3,
	HIGH_TORQUE = 4,
	STOPPED = -1

} MOTOR_STATE;


typedef enum
{
	HOT = 1,
	COLD = 2,
	WARM = 3,
	NO_TEMP = -1

} WATER_TEMP;

typedef enum
{
	ADDING_WATER = 1,
	DRAINING_WATER = 2,
	OFF = -1

} PUMP_STATE;

typedef enum
{
	HIGH = 1,
	MID = 2,
	LOW = 3,
	NO_LEVEL = -1

} WATER_LEVEL;