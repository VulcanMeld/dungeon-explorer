//Item class


#include <string>

class Item
{
	
	string name;
	unsigned short int attackPower;
	
public:
	Item(string initialName, unsigned short int initialAttackPower);
	~Item();
	string getName();
	void setName(); //Nickname item
	unsigned short int getAttackPower();
	
	
	 
	
}

void Item::~Item() 
{
	//destructor
}

string Item::getName()
{
	return name;
}

void Item::setName(newName)
{
	name = newName;
	
}

unsigned short int Item::getAttackPower()
{
	return attackPower;
}


