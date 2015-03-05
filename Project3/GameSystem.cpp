#include "GameSystem.h"
#include <iostream>
#include <vector>

using namespace std;

GameSystem::GameSystem()
{
}


GameSystem::~GameSystem()
{
}

void GameSystem::playGame()
{
	Shop shop1("Bob's Shop", "LOW");
	cout << "Amout of gold is: "<< shop1.getMoney() << endl;
	cout << "Shop size is: " << shop1.getShopSize() << endl;
	cout << "Specialty is: "<< shop1.getSpecialty() << endl;
	cout << "Wealth is: "<< shop1.getWealth() << endl;
	cout << "*** Shop List ***" << endl;
	shop1.showShopList();
	cout << "The end" << endl;
}