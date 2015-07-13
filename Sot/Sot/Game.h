#pragma once
#include "SMFL/Window.hpp"
#include "SMFL/Graphics.hpp"

class Game
{
	public void start();

private:
	static bool IsExciting();
	static void GameLoop();

	enum GameState {Uninitialized, ShowingSplash, Paused, ShowingMenu. Playing, Exiting};

	static GameState _gameState;
	static sf::RenderWindow _mainWindow;




};