#pragma once
#include <string>


class Items
{
public:
	Items(std::string specialty);
	void itemInit();
	void itemPurpose();


	//Getters
	int getDamageBonus(){ return _plusDamage; }
	int getHealthBonus(){ return _plusHealth; }
	int getDefenseBonus(){ return _plusDefense; }
	int getAttackBonus(){ return _plusAttack; }

	std::string getName(){ return _itemName; }
	std::string getType(){ return _itemType; }
	std::string getCategory(){ return _itemCategory; }
	std::string getCombatType(){ return _itemCombatType; }

	int getSellPrice(){ return _sellPrice; }
	int getBuyPrice(){ return _buyPrice; }


	//Setters
	void setCategory();
	void setItemType();
	void setItemCombatType();
	void setItemLevel();
	void setItemAttriPoints();
	void setAttributeTheme();
	void setAttributes();
	void setItemName();
	void setBuyAndSellPrice();

private:
	//Should be set after attributes are set for names like " of healing",
	//" of attack"
	std::string _itemName;
	/// _itemType  refers to things as pants, chestpeice, swords,
	//healing potions, etc.
	std::string _itemType;
	//_itemCategory refers things like weapons, armor, potions
	std::string _itemCategory;
	std::string _attributeTheme;
	std::string _shopSpecialty;
	std::string _itemCombatType;

	int _itemLevel;
	int _itemAttriPoints;
	int _sellPrice;
	int _buyPrice;


	//For Armor and Weapons
	int _plusDamage; //Weapons
	int _plusHealth; //Both
	int _plusDefense;//Armor
	int _plusAttack; //Both


	//For potions
	int _healthRestored;
	int _manaRestored;
	int _addDamage;

	std::string _itemPurpose;
	

};

