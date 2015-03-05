#pragma once
#include "Player.h"
#include "Enemy.h"
#include "Shop.h"
#include "Items.h"

//REMEMBER TO REMOVE ITEMS.H FROM THIS FILE, IT WILL BE USED IN CLASSES THAT NEED IT
//SO NO REASON TO HAVE IT HERE.

class GameSystem
{
public:
	GameSystem();
	~GameSystem();
	void playGame();
};

