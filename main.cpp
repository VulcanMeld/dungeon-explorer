#include <iostream>
#include <string>
#include "item.hpp"
#include "player.hpp"
#include "game.hpp"

Game newGame;

int main ()
{
	newGame.setGameActive(true);
	while(newGame.getGameActive()==true)  //gameLoop
	{
		newGame.showOpeningMessage();
		
	}
	
	return 0;
}
