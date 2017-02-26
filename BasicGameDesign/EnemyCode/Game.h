#pragma once
#include <iostream>
#include <string>
#include <iomanip>
#include <ctime>
#include <windows.h>
#include "Enemy.h"
#include "Functions.h"

using namespace std;

#ifndef GAME_H
#define GAME_H


class Game
{
public:
	Game();
	virtual ~Game();

	//Operators

	//Accessors

	inline bool getPlay() const { return this->play; };


	//Functions
	

	void MainMenu();
	


private:

	int choice; 
	bool play;


};



#endif