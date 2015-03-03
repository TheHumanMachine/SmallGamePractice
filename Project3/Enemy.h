#pragma once
#include <string>
#include <random>

class Enemy
{
public:
	Enemy(std::string enemyType, int level);
	int attack();

	//Setters
	void setStats();

	//Getters
	int getStats();
	std::string getName(){ return _name; }
	int getHealth(){ return _health; }
	int getAttack(){ return _attack; }
	int getDefense(){ return _defense; }
	int getExperience(){ return _experience; }
	int getMoney(){ return _moneyLoot; }

private:

	std::string _name;
	std::string _enemyType;
	int _enemyLevel;
	int _health;
	int _attack;
	int _defense;
	int _experience;
	int _moneyLoot;
};

