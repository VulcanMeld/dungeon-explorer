#ifndef GAME
#define GAME
#include <iostream>
#include <string>
#include "item.hpp"
#include "player.hpp"


class Game
{
	bool gameActive;
	std::string openingMessage = "Welcome to Dungeon Explorer! May your journey be as majestic as the morning sky.";
	
public:
	bool getGameActive() const;
	bool setGameActive(bool boolean);
	void showOpeningMessage() const;
	
};

#endif

