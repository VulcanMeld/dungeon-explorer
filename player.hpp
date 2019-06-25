//Dungeon Explorer
// An Interactive C++ Adventure

#include <iostream>
#include <string>
#include "item.hpp"


class Player
{
	string name;
	Item[] inventory;
	
public:
	~Player();
	string getName() const;
	void setName(string newName);
	Item[] getInventory() const;
	
	
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
