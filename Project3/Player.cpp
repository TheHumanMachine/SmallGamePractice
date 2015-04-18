#include "Player.h"
#include <iostream>
#include <string>
#include <random>
#include <ctime>

using namespace std;


Player::Player(std::string name)
{
	_name = name;
	_experience = 0;
	_money = 0; 
	_pLevel = 0;
	setClassChoices();
	pickClassType();
	setClassAttributes();
}


int Player::randomRoll(int num1, int num2)
{
	static std::default_random_engine randomEngine((unsigned int)time(NULL));
	std::uniform_int_distribution<int> roll(num1, num2);

	return roll(randomEngine);
}


int Player::attack()
{
	return randomRoll(0, _attack);
}

void Player::takeDamage(int damage)
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

void Player::levelUp()
{
	while (_experience >= 50){
		_pLevel += 1;
		_health += 10;
		_attack += 5;
		_defense += 5;
		_experience -= 50;
	}

}

void Player::pickClassType()
{

	while (_class == "NONE"){
		std::string pickedClass;

		std::list<std::string>::iterator it;

		//Loops through _classChoice and prints them out
		for (it = _classChoices.begin(); it != _classChoices.end(); it++){

			//Prints current variable of _classChoice
			cout << *it << endl;
		}

		cout << "\nPick the class you want to play: " << endl;

		//Asks what class you want to play
		cin >> pickedClass;

		//Iterates through classChoice and sees if pickedClass is equal to it
		for (it = _classChoices.begin(); it != _classChoices.end(); it++){

			if (pickedClass == *it){
				setPlayerClassType(pickedClass);
				return;
			}
			
		}

		cout << "Sorry that was an invalid input\n\n" << endl;
	}
	
}

void Player::setPlayerClassType(std::string classType){
	_class = classType;
}

void Player::setClassChoices(){
	_classChoices.push_back("Archer");
	_classChoices.push_back("Mage");
	_classChoices.push_back("Berzerker");
	_classChoices.push_back("Socercer");
	_classChoices.push_back("Wizard");
}

void Player::setClassAttributes()
{
	if (_class == "Archer"){
		_health = 50;
		_attack = 23;
		_defense = 20;
		_armorType = "LEATHER";

	}else if (_class == "Mage"){
		_health = 40;
		_attack = 20;
		_defense = 15;
		_armorType = "CLOTH";

	}else if (_class == "Berzerker"){
		_health = 60;
		_attack = 15;
		_defense = 25;
		_armorType = "PLATE";

	}else if (_class == "Socercer"){
		_health = 40;
		_attack = 20;
		_defense = 15;
		_armorType = "CLOTH";

	}else if (_class == "Wizard"){
		_health = 45;
		_attack = 25;
		_defense = 15;
		_armorType = "CLOTH";

	}
	else{
		_armorType = "NONESET";
	}
}

//void Player::setWeaponTypes()
//{
//
//
//}