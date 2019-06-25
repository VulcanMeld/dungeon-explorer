#include "player.hpp"

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

