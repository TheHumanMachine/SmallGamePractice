#pragma once
#include <string>


class Items
{
public:
	Items(std::string purpose);
	void itemPurpose();
	void setItemType();

private:
	//Should be set after attributes are set for names like " of healing",
	//" of attack"
	std::string _itemName;
	//_itemType refers things like weapons, armor, potions
	std::string _itemType;
	//_itemCategory refers to things as pants, chestpeice, swords,
	//healing potions, etc.
	std::string _itemCategory;


	//For Armor and Weapons
	int plusDamage; //Weapons
	int plusHealth; //Both
	int plusDefense;//Armor
	int plusAttack; //Both


	//For potions
	int healthRestored;
	int manaRestored;
	int addDamage;

	std::string _itemPurpose;
	

};

