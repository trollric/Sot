#include <stdafx.h>
#include <Game.h>

void Game::Start(void)
{
	if (_gameState != Uninitialized)
		return;

	_mainWindow.Create(sf::VideoMode(1980, 1080, 32), "SONG OF THE TRAVELLER");
	_gameState = Game::Playing;


	while (!IsExciting())
	{
		GameLoop;
	}

	_mainWindow.Close();

}

bool Game::IsExciting(){

	if (_gameState == Game::Exiting)
		return true;
	else
		return false;
}
void Game::GameLoop()
{
	sf::Event currentEvent;
	while (_mainWindow.GetEvent(currentEvent))
	{
		switch (_gameState)
		{
		case Game::Playing:
		{
			_mainWindow.Clear(sf::Color(255, 0.0));
			_mainWindow.Display();

			if (currentEvent.Type == sf::Event::Closed)
			{
				_gameState = Game::Exiting;
			}
			break;
		}
		}
	}
}

Game::GameState Game::_gameState = Uninitialized;
sf::RenderWindow Game::_mainWindow;


			