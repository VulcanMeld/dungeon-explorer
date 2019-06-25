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


#endif
