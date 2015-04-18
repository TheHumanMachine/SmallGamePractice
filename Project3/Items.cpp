#include "Items.h"
#include <string>
#include <random>
#include <ctime>


Items::Items(std::string specialty)
{
	_shopSpecialty = specialty;
	itemInit();
}

void Items::itemInit()
{
	setCategory();
	setItemType();
	setItemCombatType();
	setItemLevel();
	setAttributeTheme();
	setAttributes();
	setItemName();
	setBuyAndSellPrice();
}

void Items::itemPurpose()
{
	//Forgot the purpose (Ironic yes) of this function.
}


//void Items::setCategory()
//{
//	static std::default_random_engine randomEngine(time(NULL));
//	std::uniform_int_distribution<int> setCate(1, 8);
//
//	if (_itemType == "Weapon"){
//		switch (setCate(randomEngine)){
//		case 1:
//			_itemCategory = "sword";
//			return;
//		case 2:
//			_itemCategory = "axe";
//			return;
//		case 3:
//			_itemCategory = "mace";
//			return;
//		case 4:
//			_itemCategory = "dagger";
//			return;
//		case 5:
//			_itemCategory = "bow";
//			return;
//		case 6:
//			_itemCategory = "two hand sword";
//			return;
//		case 7:
//			_itemCategory = "two hand axe";
//			return;
//		case 8:
//			_itemCategory = "two hand mace";
//			return;
//
//		}
//	}
//
//	if (_itemType == "Armor"){
//		switch (setCate(randomEngine)){
//		case 1:
//			_itemCategory = "Pants";
//			return;
//		case 2:
//			_itemCategory = "Chest";
//			return;
//		case 3:
//			_itemCategory = "Gloves";
//			return;
//		case 4:
//			_itemCategory = "Shoulders";
//			return;
//		case 5:
//			_itemCategory = "Boots";
//			return;
//		default:
//			_itemCategory = "Boots";
//		}
//	}
//	if (_itemType == "Potion"){
//		_itemCategory = "Potion";
//		return;
//	}
//
//
//}
//
//
//void Items::setAttributes()
//{
//	static std::default_random_engine randomEngine(time(NULL));
//	std::uniform_int_distribution<int> setAttri(0, 15);
//
//	if (_itemType == "Weapon"){
//		int _plusDamage = setAttri(randomEngine); 
//		int _plusHealth = setAttri(randomEngine);
//		int _plusDefense = 0;
//		int _plusAttack = setAttri(randomEngine);
//	}
//	else if (_itemType == "Armor"){
//		int _plusDamage = 0;
//		int _plusHealth = setAttri(randomEngine);
//		int _plusDefense = setAttri(randomEngine);
//		int _plusAttack = setAttri(randomEngine);
//	}
//	else if (_itemType == "Potion"){
//		int _healthRestored = setAttri(randomEngine);
//		int _plusDamage = 0;
//		int _plusHealth = 0;
//		int _plusDefense = 0;
//		int _plusAttack = 0;
//	}
//
//}
//
//
//void Items::setItemType()
//{
//	//Sets this item to a weapon, armor or potion
//
//	/*srand((unsigned int)time(NULL));
//	int itemTypeRoll = rand() % 3 + 1;*/
//
//	static std::default_random_engine randomEngine(time(NULL));
//	std::uniform_int_distribution<int> itemTypeRoll(1, 3);
//
//	switch (itemTypeRoll(randomEngine)){
//	case 1:
//		_itemType = "Weapon";
//		return;
//	case 2:
//		_itemType = "Armor";
//		return;
//	case 3:
//		_itemType = "Potion";
//		return;
//	}
//
//}
//
//
//void Items::setItemName()
//{
//	if (_itemType == "Potion"){
//		_itemName = _itemCategory + " of " + "Healing";
//		return;
//	}
//	//Finish Name generation 
//	_itemName = _itemCategory + " of " + "the hawk";
//}
//
//
//void Items::setBuyAndSellPrice()
//{
//	static std::default_random_engine randomEngine(time(NULL));
//	std::uniform_int_distribution<int> price(1, 25);
//
//	_buyPrice = price(randomEngine);
//	_sellPrice = _buyPrice * 2;
//}

void Items::setCategory()
{
		//Sets this item to a weapon, armor or potion
	
		/*srand((unsigned int)time(NULL));
		int itemTypeRoll = rand() % 3 + 1;*/
	
	if (_shopSpecialty == "General"){
		static std::default_random_engine randomEngine(time(NULL));
		std::uniform_int_distribution<int> itemTypeRoll(1, 3);

		switch (itemTypeRoll(randomEngine)){
		case 1:
			_itemCategory = "Weapon";
			return;
		case 2:
			_itemCategory = "Armor";
			return;
		case 3:
			_itemCategory = "Potion";
			return;
		}
	}
	else{
		_itemCategory = _shopSpecialty;
	}
}


void Items::setItemType()
{

	int itemHigh, itemLow;
	
	
		if (_itemCategory == "Weapon"){

			itemHigh = 8;
			itemLow = 1;

			static std::default_random_engine randomEngine(time(NULL));
			std::uniform_int_distribution<int> setCate(itemLow, itemHigh);

			switch (setCate(randomEngine)){
			case 1:
				_itemType = "sword";
				return;
			case 2:
				_itemType = "axe";
				return;
			case 3:
				_itemType = "mace";
				return;
			case 4:
				_itemType = "dagger";
				return;
			case 5:
				_itemType = "bow";
				return;
			case 6:
				_itemType = "two hand sword";
				return;
			case 7:
				_itemType = "two hand axe";
				return;
			case 8:
				_itemType = "two hand mace";
				return;
	
			}
		}
	
		if (_itemCategory == "Armor"){
			itemHigh = 5;
			itemLow = 1;

			static std::default_random_engine randomEngine(time(NULL));
			std::uniform_int_distribution<int> setCate(itemLow, itemHigh);
			switch (setCate(randomEngine)){
			case 1:
				_itemType = "Pants";
				return;
			case 2:
				_itemType = "Chest";
				return;
			case 3:
				_itemType = "Gloves";
				return;
			case 4:
				_itemType = "Shoulders";
				return;
			case 5:
				_itemType = "Boots";
			}
		}
		if (_itemCategory == "Potion"){
			_itemType = "Potion";
			return;
		}
}

void Items::setItemCombatType() 
{
	if (_itemCategory == "Weapon"){
		if (_itemType != "bow"){
			_itemCombatType = "Melee";
		}
		else{
			_itemCombatType = "Ranged";
		}
	}
	else{
		_itemCombatType = "None";
	
	}

}
void Items::setItemLevel()
{
	static std::default_random_engine randomEngine(time(NULL));
	std::uniform_int_distribution<int> setlevel(1, 10);

	_itemLevel = setlevel(randomEngine);
}

void Items::setItemAttriPoints()
{
	_itemAttriPoints = int(_itemLevel * 0.5) + int(_itemLevel * 1.5);

}


void Items::setAttributeTheme()
{

}


void Items::setAttributes()
{

}


void Items::setItemName()
{
	_itemName = _itemType + " of " + "None";
}


void Items::setBuyAndSellPrice()
{
	_buyPrice = 5;
	_sellPrice = 3;
}
