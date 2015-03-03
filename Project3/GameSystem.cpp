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
	Shop shop1("Daisy's Wears", "HIGH");
	cout << "Money :" << shop1.getMoney() << endl;
	cout << "Wealth is " << shop1.getWealth() << endl;
	cout << "The size of the shop is " << shop1.getShopSize() << endl;
	cout << "This shop specializes in " << shop1.getSpecialty() << endl;


}