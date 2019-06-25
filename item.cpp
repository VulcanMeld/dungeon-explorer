#include "item.hpp"

Item::~Item() 
{
	//destructor
}

std::string Item::getName() const
{
	return name;
}

void Item::setName(std::string newName)
{
	name = newName;
	
}

unsigned short int Item::getAttackPower() const
{
	return attackPower;
}

