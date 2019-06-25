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

Player::~Player() 
{
	//destructor
}

std::string Player::getName() const
{
	return name;
}

void Player::setName(std::string newName)
{
	name = newName;
	
}



Item *Player::getInventory() const
{
	return inventory;
}

#endif
