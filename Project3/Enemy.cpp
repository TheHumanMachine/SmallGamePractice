#include "Enemy.h"


Enemy::Enemy(std::string name, int health, int attack, int defense, int experience, int moneyLoot)
{
	_name = name;
	_attack = attack;
	_defense = defense;
	_experience = experience;
	_moneyLoot = moneyLoot;

}

