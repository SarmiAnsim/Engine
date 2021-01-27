
#include <iostream>
#include <vector>
#include <thread>

#include "main.h"
#include "grafic.h"
#include "engine.h"

//TODO make std::atomic<bool> or global mutex?
GameState_e g_GameState = GameState_e::PLAY;

int main()
{
	std::thread grafic(GraficMain);
	std::thread input(InputMain);
	std::thread engine(EngineMain);

	input.join();
	grafic.join();
	engine.join();
	return 0;
}