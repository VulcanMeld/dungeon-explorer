//Item class
#ifndef ITEM
#define ITEM

#include <string>

class Item
{
	
	std::string name;
	unsigned short int attackPower;
	
public:
	Item(std::string initialName, unsigned short int initialAttackPower);
	~Item();
	std::string getName() const;
	void setName(std::string newName); //Nickname item
	unsigned short int getAttackPower() const;
	
	
	 
	
};

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

#endif
