#pragma once
#include <list>
#include <string>


class Shop
{

public:
	Shop(std::string name, int money, int shopSize);
	~Shop();


	//Getters
	std::string getName(){ return _name; }
	int getMoney(){ return _money; }
	int shopSize(){ return _shopSize; }
	void shopList();

private:
	std::string _name;
	int _money;
	int _shopSize; 
	std::list<std::string> _shopInventory[];
};

