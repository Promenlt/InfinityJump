#pragma once

#define SCREEN_W			800
#define SCREEN_H			480
#define SCREEN_CENTER_W		(800/2)
#define SCREEN_CENTER_H		(480/2)
#define LIMIT_FPS			30

// define variable
#define MAX_LENGTH			255

// Macro
#define PI					3.14159265f
#define HALFPI				(PI/2.0f)
#define SAFE_DEL(x)			{if(x){delete x; x = NULL;}}
#define SAFE_DEL_ARRAY(x)	{if(x){delete[] x; x = NULL;}}
#define X2GAME(x)			((1.0f*x - SCREEN_CENTER_W)/SCREEN_CENTER_W)
#define Y2GAME(y)			(-1.0f*(1.0f*y - SCREEN_CENTER_H)/SCREEN_CENTER_H)

// File
#define RM_TXT_FILE			"../Resources/Managers/RM.txt"
#define SM_TXT_FILE			"../Resources/Managers/SM.txt"

// BUTTONS
#define BIT_MOVE_FORWARD	(1<<0)
#define BIT_MOVE_BACKWARD	(1<<1)
#define BIT_MOVE_LEFT		(1<<2)
#define BIT_MOVE_RIGHT		(1<<3)
#define BIT_ROTATE_UP		(1<<4)
#define BIT_ROTATE_DOWN		(1<<5)
#define BIT_ROTATE_LEFT		(1<<6)
#define BIT_ROTATE_RIGHT	(1<<7)