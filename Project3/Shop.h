#pragma once
#include <list>
#include <string>


class Shop
{

public:
	Shop(std::string name, std::string wealth);
	~Shop();


	//Getters
	std::string getName(){ return _name; }
	int getMoney(){ return _money; }
	int getShopSize(){ return _shopSize; }
	std::string getWealth(){ return _wealth; }
	void shopList();

	//Setters
	void setShopMoney();
	void setShopSize();

private:
	std::string _name;
	int _money;
	std::string _wealth;
	int _shopSize; 
	std::list<std::string> _shopInventory[];
};

