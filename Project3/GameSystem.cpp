#include "GameSystem.h"
#include <iostream>

using namespace std;

GameSystem::GameSystem()
{
}


GameSystem::~GameSystem()
{
}

void GameSystem::playGame()
{
	Player player1("Bobby");
	cout << endl; 
	cout << player1.getClass() << endl;
	cout << player1.getArmorType() << endl;

}