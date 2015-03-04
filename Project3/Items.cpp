#include "Items.h"
#include <string>
#include <random>
#include <ctime>


Items::Items(std::string purpose)
{
	_itemPurpose = purpose;
}


void Items::itemPurpose()
{


}


void Items::setItemType()
{

	//Sets this item to a weapon, armor or potion
	static std::default_random_engine randomEngine(time(NULL));
	std::uniform_int_distribution<int> itemTypeRoll(1, 3);

	switch (itemTypeRoll(randomEngine)){
	case 1:
		_itemType = "Weapon";
		return;
	case 2:
		_itemType = "Armor";
		return;
	case 3:
		_itemType = "Potion";
		return;
	}


}
