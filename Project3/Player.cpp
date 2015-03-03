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
}

int Player::attack()
{
	static std::default_random_engine randomEngine(time(NULL));
	std::uniform_int_distribution<int> attackRoll(0, _attack);

	return attackRoll(randomEngine);
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

std::string Player::pickClassType()
{
	while (_class == "NONE"){
		std::string pickedClass;

		std::list<std::string>::iterator it;

		//Loops through _classChoice and prints them out
		for (it = _classChoice.begin(); it != _classChoice.end(); it++){

			//Prints current variable of _classChoice
			cout << *it << endl;
		}

		cout << "\nPick the class you want to play: " << endl;
		//Asks what class you want to play
		cin >> pickedClass;

		//Iterates through classChoice and sees if pickedClass is equal to it
		for (it = _classChoice.begin(); it != _classChoice.end(); it++){

			if (pickedClass == *it){
				setPlayerClassType(pickedClass);
			}
		}
		cout << "Sorry that was an invalid input\n\n" << endl;
	}
	
}

void Player::setPlayerClassType(std::string classType){
	_class = classType;
}

void Player::setClassChoices(){
	_classChoice.push_back("Archer");
	_classChoice.push_back("Mage");
	_classChoice.push_back("Berzerker");
	_classChoice.push_back("Socercer");
	_classChoice.push_back("Wizard");
}