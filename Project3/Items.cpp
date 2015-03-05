#include "Items.h"
#include <string>
#include <random>
#include <ctime>


Items::Items()
{
	itemInit();
}

void Items::itemInit()
{
	setItemType();
	setAttributes();
	setCategory();
	setItemName();
}

void Items::itemPurpose()
{
	//Forgot the purpose (Ironic yes) of this function.
}


void Items::setCategory()
{
	static std::default_random_engine randomEngine(time(NULL));
	std::uniform_int_distribution<int> setCate(1, 8);

	if (_itemType == "Weapon"){
		switch (setCate(randomEngine)){
		case 1:
			_itemCategory = "sword";
			return;
		case 2:
			_itemCategory = "axe";
			return;
		case 3:
			_itemCategory = "mace";
			return;
		case 4:
			_itemCategory = "dagger";
			return;
		case 5:
			_itemCategory = "bow";
			return;
		case 6:
			_itemCategory = "two hand sword";
			return;
		case 7:
			_itemCategory = "two hand axe";
			return;
		case 8:
			_itemCategory = "two hand mace";
			return;

		}
	}

	if (_itemType == "Armor"){
		switch (setCate(randomEngine)){
		case 1:
			_itemCategory = "Pants";
			return;
		case 2:
			_itemCategory = "Chest";
			return;
		case 3:
			_itemCategory = "Gloves";
			return;
		case 4:
			_itemCategory = "Shoulders";
			return;
		case 5:
			_itemCategory = "Boots";
			return;
		default:
			_itemCategory = "Boots";
		}
	}
	if (_itemType == "Potion"){
		_itemCategory = "Potion";
		return;
	}


}


void Items::setAttributes()
{
	static std::default_random_engine randomEngine(time(NULL));
	std::uniform_int_distribution<int> setAttri(0, 15);


	if (_itemType == "Weapon"){
		int _plusDamage = setAttri(randomEngine); 
		int _plusHealth = setAttri(randomEngine);
		int _plusDefense = 0;
		int _plusAttack = setAttri(randomEngine);
	}
	else if (_itemType == "Armor"){
		int _plusDamage = 0;
		int _plusHealth = setAttri(randomEngine);
		int _plusDefense = setAttri(randomEngine);
		int _plusAttack = setAttri(randomEngine);
	}
	else if (_itemType == "Potion"){
		int _healthRestored = setAttri(randomEngine);
		int _plusDamage = 0;
		int _plusHealth = 0;
		int _plusDefense = 0;
		int _plusAttack = 0;
	}

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


void Items::setItemName()
{
	//Finish Name generation 
	_itemName = _itemCategory + " of ";
}