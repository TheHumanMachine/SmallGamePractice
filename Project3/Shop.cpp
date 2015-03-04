#include "Shop.h"
#include <iostream>
#include <random>
#include <ctime>

using namespace std;

Shop::Shop(std::string name, std::string wealth)
{
	_name = name;
	_wealth = wealth;
	setShopMoney();
	setShopSize();
	setShopSpecialty();

}


void Shop::showShopList()
{
	std::list<std::string>::iterator it;

	for (it = _shopInventory->begin(); it != _shopInventory->end(); it++){
		cout << *it << endl; 

	}
}

void Shop::setShopMoney()
{
	int shopLow, shopHigh;

	if (_wealth == "HIGH"){
		shopLow = 3500;
		shopHigh = 10000;
	}
	if (_wealth == "MEDIUM"){
		shopLow = 1000;
		shopHigh = 3500;
	}
	if (_wealth == "LOW"){
		shopLow = 100;
		shopHigh = 1000;
	}


	static std::default_random_engine randomEngine(time(NULL));
	std::uniform_int_distribution<int> setMoney(shopLow, shopHigh);

	_money = setMoney(randomEngine);
}

void Shop::setShopSize()
{
	/*
	Instead of manually setting the inventory size of the shop, it's down automatically depending
	on the wealth of the shop, should be changed to meet specialties. Some shops that are "High" 
	might be smaller then the lower wealth shops. So additional parameters should be established to
	meet these criterias, I will add at another time.
	*/

	int inventoryLow, inventoryHigh;

	if (_wealth == "HIGH"){
		inventoryLow = 15;
		inventoryHigh = 35;
	}
	if (_wealth == "MEDIUM"){
		inventoryLow = 10;
		inventoryHigh = 25;
	}
	if (_wealth == "LOW"){
		inventoryLow = 5;
		inventoryHigh = 15;
	}

	static std::default_random_engine randomEngine(time(NULL));
	std::uniform_int_distribution<int> setInventorySize(inventoryLow, inventoryHigh);

	_shopSize = setInventorySize(randomEngine);
}

void Shop::setShopSpecialty()
{
	static std::default_random_engine randomEngine(time(NULL));
	std::uniform_int_distribution<int> chooseSpecialty(0, 12);
	int pickSpecialty = chooseSpecialty(randomEngine);


	/*If statement is left in so in the future, if chances are changed between different
	wealth levels it can be down without messing with the others. Room for more specialties 
	down the road. I want specialties to be rare-ish so that they are worth buying from instead
	of at any random shop. 
	*/

	if (_wealth == "HIGH"){

		switch (pickSpecialty){
		case 8:
			_shopSpecialty = "ARMOR";
			break;

		case 7:
			_shopSpecialty = "WEAPONS";
			break;
		case 6:
			_shopSpecialty = "POTIONS";
			break;
		case 5:
			_shopSpecialty = "MAGIC";
			break;
		default:
			_shopSpecialty = "GENERAL";

		}
	}
	else if (_wealth == "MEDIUM"){

		switch (pickSpecialty){
		case 8:
			_shopSpecialty = "ARMOR";
			break;

		case 7:
			_shopSpecialty = "WEAPONS";
			break;
		case 6:
			_shopSpecialty = "POTIONS";
			break;
		case 5:
			_shopSpecialty = "MAGIC";
			break;
		default:
			_shopSpecialty = "GENERAL";

		}
	}
	else if (_wealth == "Low"){

		switch (pickSpecialty){
		case 8:
			_shopSpecialty = "ARMOR";
			break;

		case 7:
			_shopSpecialty = "WEAPONS";
			break;
		case 6:
			_shopSpecialty = "POTIONS";
			break;
		case 5:
			_shopSpecialty = "MAGIC";
			break;
		default:
			_shopSpecialty = "GENERAL";

		}
	}
}


