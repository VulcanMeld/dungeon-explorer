#include "game.hpp"

bool Game::getGameActive() const
{
	return gameActive;
}

bool Game::setGameActive(bool boolean)
{
	gameActive = boolean;
}

void Game::showOpeningMessage() const
{
	std::cout<<openingMessage<<std::endl;
}


