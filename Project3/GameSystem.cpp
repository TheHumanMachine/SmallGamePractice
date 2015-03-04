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
	Items item1;
	Items item2;
	cout << item1.getType() << endl;
	cout << item1.getCategory() << endl;
	cout << item1.getName() << endl;
	cout << "\n" << endl;
	cout << item2.getType() << endl;
	cout << item2.getCategory() << endl;
	cout << item2.getName() << endl;

}