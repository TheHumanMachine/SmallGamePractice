#include "Enemy.h"
#include <iostream>
#include <random>
#include <ctime>


Enemy::Enemy(std::string enemyType, int level)
{
	_enemyType = enemyType;
	_enemyLevel = level;
	setStats();

}

int Enemy::randomRoll(int num1, int num2)
{
	static std::default_random_engine randomEngine((unsigned int)time(NULL));
	std::uniform_int_distribution<int> roll(num1, num2);

	return roll(randomEngine);
}

int Enemy::attack()
{
	return randomRoll(0, _attack);
}


void Enemy::takeDamage(int damage)
{
	if (randomRoll(1, 5) != 2){
		damage -= _defense;
		if (damage > 0){

			_health -= damage;
		}
	}
	else{
		std::cout << "Your attack has been blocked" << std::endl;
		return;
	}

}


void Enemy::setStats()
{
	_health = (getStats() + 5) * 5; 
	_attack = getStats() + 5;
	_defense = getStats() + 5;
	_experience = getStats();
	_moneyLoot = getStats();

}


int Enemy::getStats()
{
	return randomRoll(1, _enemyLevel *2);
}

