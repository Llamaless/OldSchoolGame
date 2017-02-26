// TextBasedRPG.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;


int main()
{
	cout << "You continue your journey and stumble upon a suspicous cave which may contain countless rewards. However you must be careful as the risk is far too high " << endl;
	cout << "You have two options adventurer " << endl;

	int choiceOne_Entrance;
	cout << "\t >> Enter '1' to enter the cave and explore this dungeon " << endl;
	cout << "\t >> Enter '2' if you would like to return to the city " << endl;

retry:

	cout << "\nEnter your choice: ";
	cin >> choiceOne_Entrance;
	if (choiceOne_Entrance == 1)
	{
		cout << "\n!!!-----Entrance-----!!!" << endl;
		cout << "you enter the dungeon and begin to explore" << endl;
	}
	else if (choiceOne_Entrance == 2)
	{
		cout << "You have chosen to return to the city" << endl;
	}
	else
	{
		cout << "You did not enter the correct number please enter 1 or 2" << endl;
		goto retry;
	}
	cout << "\nPress any key to continue" << endl;
	_getch();
	return 0;
}
