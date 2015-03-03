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
	Shop shop1("Bob's goods", "HIGH");
	cout << shop1.getName() << endl;
	cout << shop1.getMoney() << endl;
	cout << shop1.getWealth() << endl;
	cout << shop1.getShopSize() << endl;

}