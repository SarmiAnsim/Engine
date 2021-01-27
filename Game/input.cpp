#include "engine.h"

extern GameState_e g_GameState;

void InputMain()
{
	int value;
	std::cin >> value;
	g_GameState = static_cast<GameState_e>(value);
}