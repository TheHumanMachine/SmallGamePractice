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

}


Shop::~Shop()
{
}

void Shop::shopList()
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
		shopLow = 1000;
		shopHigh = 10000;
	}
	if (_wealth == "MEDIUM"){
		shopLow = 500;
		shopHigh = 5000;
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