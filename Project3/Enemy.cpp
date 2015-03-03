#include "Enemy.h"
#include <random>
#include <ctime>


Enemy::Enemy(std::string enemyType, int level)
{
	_enemyType = enemyType;
	_enemyLevel = level;
	setStats();

}

int Enemy::attack()
{
	static std::default_random_engine randomEngine((unsigned int)time(NULL));
	std::uniform_int_distribution<int> attackRoll(0, _attack);

	return attackRoll(randomEngine);
}

void Enemy::takeDamage(int damage)
{
	damage -= _defense;
	if (damage > 0){

		_health -= damage;

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
	static std::default_random_engine randomEngine((unsigned int)time(NULL));
	std::uniform_int_distribution<int> setAtttributes(1, _enemyLevel * 2);

	return setAtttributes(randomEngine);
}

