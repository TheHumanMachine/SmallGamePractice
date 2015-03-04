#pragma once
#include <list>
#include <string>


class Shop
{

public:
	Shop(std::string name, std::string wealth);

	//Getters
	std::string getName(){ return _name; }
	int getMoney(){ return _money; }
	int getShopSize(){ return _shopSize; }
	std::string getWealth(){ return _wealth; }
	std::string getSpecialty(){ return _shopSpecialty; }
	void showShopList();

	//Setters
	void addMoney(int money){ _money += money; }
	void removeMoney(int money){ _money -= money; }
	void setShopMoney();
	void setShopSize();
	void setShopSpecialty();

private:

	std::string _name;
	int _money;
	std::string _wealth;
	int _shopSize;
	std::string _shopSpecialty;

	std::list<std::string> _shopInventory[20];

};

