#include "Shop.h"
#include <iostream>

using namespace std;

Shop::Shop(std::string name, int money, int shopSize)
{
	_name = name;
	_money = money;
	_shopSize = shopSize;

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