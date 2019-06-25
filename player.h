//Dungeon Explorer
// An Interactive C++ Adventure

#include <iostream>
#include <string>
#include "item.h"


class Player
{
	string name;
	Item[] inventory;
	
public:
	~Player();
	string getName;
	void setName(string newName);
	Item[] getInventory();
	
	
}

void Player::~Player() 
{
	//destructor
}

string Player::getName()
{
	return name;
}

void Player::setName(string newName)
{
	name = newName;
	
}



Item[] Player::getInventory()
{
	return inventory;
}
