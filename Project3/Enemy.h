#pragma once
#include <string>

class Enemy
{
public:
	Enemy(std::string name, int health, int attack, int defense, int experience, int money);






	//Getters
	std::string getName(){ return _name; }
	int getHealth(){ return _health; }
	int getAttack(){ return _attack; }
	int getDefense(){ return _defense; }
	int getExperience(){ return _experience; }
	int getMoney(){ return _moneyLoot; }

private:

	std::string _name;
	int _health;
	int _attack;
	int _defense;
	int _experience;
	int _moneyLoot;
};

