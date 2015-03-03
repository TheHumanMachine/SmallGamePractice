#pragma once
#include <iostream>
#include <list>
#include <string>


class Player
{
public:
	Player(std::string name);

	int attack();
	void levelUp();

	//Getters
	std::string getName(){ return _name; }
	int getHealth(){ return _health; }
	int getAttack(){ return _attack; }
	int getDefense(){ return _defense; }
	int getExperience(){ return _experience; }
	int getMoney(){ return _money; }
	std::string getClass() { return _class; }

	//Setters
	void addHealthPoints(int health){ _health += health; }
	void addAttackPoints(int attack){ _attack += attack; }
	void addDefenseRating(int defense){ _defense += defense; }
	void addExpPoints(int experience){ _experience += experience; }
	void addMoney(int money){ _money += money; }
	std::string pickClassType();
	void setPlayerClassType(std::string classType);
	void setClassChoices();
	void setClassAttrbs(); 



private:
	std::string _name;
	int _health;
	int _attack;
	int _defense;
	int _experience;
	int _money;
	int _pLevel;
	std::string _armorType;
	std::string _class = "NONE";
	std::list<std::string> _classChoice;

};

