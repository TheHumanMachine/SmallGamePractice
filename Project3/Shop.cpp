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
	setInventory();

}


int randomRoll(int num1, int num2)
{
	srand((unsigned int)time(NULL));
	int x = rand() % num1 + num2;
	/*std::default_random_engine randomEngine((unsigned int)time(NULL));
	std::uniform_int_distribution<int> roll(num1, num2);*/

	return x;
}


void Shop::showShopList()
{
	for (int i = 0; i < _shopSize; i++){
		std::cout << i + 1 << ". "<< _shopInventory[i]->getName() << std::endl;
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
	srand(time(NULL));
	int x = rand() % shopHigh + shopLow;

	//_money = randomRoll(shopLow, shopHigh);
	_money = x;
	return;
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

	
	srand(time(NULL));
	int x = rand() % inventoryHigh + inventoryLow;
	//_shopSize = randomRoll(inventoryLow, inventoryHigh);
	_shopSize = x;
}


void Shop::setShopSpecialty()
{
	srand(time(NULL));
	int x = rand() % 10 + 1;
	//int pickSpecialty = randomRoll(0, 12);
	int pickSpecialty = x;


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


void Shop::setInventory()
{
	/*std::list<std::string>::iterator it;
	for (it = _shopInventory->begin(); it != _shopInventory->end(); it++){
		_shopInventory.push_back()
	}*/

	for (int i = 0; i < _shopSize; i++){
		_shopInventory.push_back(new Items);
	}


}
