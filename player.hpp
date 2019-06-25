//Dungeon Explorer
// An Interactive C++ Adventure
#ifndef PLAYER
#define PLAYER
#include <iostream>
#include <string>
#include "item.hpp"


class Player
{
	std::string name;
	Item *inventory; //inventory array
	
public:
	~Player();
	std::string getName() const;
	void setName(std::string newName);
	Item *getInventory() const;
	
	
};


#endif
