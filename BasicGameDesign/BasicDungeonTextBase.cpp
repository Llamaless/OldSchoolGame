// TextBasedRPG.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;


int main()
{
	cout << "You continue your journey and stumble upon a suspicous cave which may contain countless rewards." << endl;
	cout << "However you must be careful as the risk is far too high" << endl;
	cout << "You have two options adventurer " << endl;

	int choiceOne_Entrance;
	cout << "\t >> Enter '1' to enter the cave and explore this dungeon " << endl;
	cout << "\t >> Enter '2' if you would like to return to the city " << endl;

retry:

	cout << "\nEnter your choice: ";
	cin >> choiceOne_Entrance;
	if (choiceOne_Entrance == 1)
	{
		cout << "-----Entrance-----" << endl;
		cout << "you enter the dungeon and begin to explore" << endl;


		int choiceTwo_Path;


		cout << "As you look around the house there are three paths you can take within this dungeon, left, right or straight." << endl;
		cout << "Where do you choose to go?" << endl;
		cout << "\t >> Enter '1' to go left " << endl;
		cout << "\t >> Enter '2' to go right" << endl;
		cout << "\t >> Enter '3' to go straight" << endl;
		cout << "\nEnter your choice: ";
		cin >> choiceTwo_Path;

		if (choiceTwo_Path == 1)
		{
			cout << "You have chosen to take the path to the left" << endl;
			cout << "As you continue to walk you come to a empty room with a skeleton slumped within the corner" << endl;
			cout << "A DOOR SLAMS SHUT BEHIND YOU" << endl;

			int choiceRoom;

			cout << "You have two options" << endl;
			cout << "\t >> Enter '1' to search the room for a way out " << endl;
			cout << "\t >> Enter '2' to attempt to somehow break the door down" << endl;
			
			cout << "\nEnter your choice: ";
			cin >> choiceRoom;

			if (choiceRoom == 1)
			{
				cout << "You have chosen to search for a way out" << endl;
				cout << "" << endl;
			}

			else if (choiceRoom == 2)
			{
				cout << "You have chosen to break the door down" << endl;
				cout << "" << endl;
			}

		

		}

		else if (choiceTwo_Path == 2)
		{
			cout << "You have taken the path to the right" << endl;
			cout << "as you continue to walk ahead on this cold path you start to feel the ground shake" << endl;
			cout << "THE FLOOR COLLAPSES BENEATH YOU" << endl;
			cout << "YOU HAVE DIED" << endl;
		}

		else if (choiceTwo_Path == 3)
		{
			cout << "You continue straight through this dungeon searching for whatever items you can find along the floor within the darkness " << endl;
			cout << "You come across a torch and decide to light it " << endl;
			cout << "The halls light up and reveal three doors infront of you" << endl;
			cout << "Which one will you choose? " << endl;
			
			int choiceDoors;
			
			cout << "\t >> Enter '1' to go through the wooden door " << endl;
			cout << "\t >> Enter '2' to go through the steel door" << endl;
			cout << "\t >> Enter '3' to go through the caged door" << endl;
			cout << "\nEnter your choice: ";
			cin >> choiceDoors;

			if (choiceDoors == 1)
			{
				cout << "You have chosen the wooden door" << endl;
				cout << "" << endl;
			}

			else if (choiceDoors == 2)
			{
				cout << "You have chosen the steel door" << endl;
				cout << "" << endl;
			}

			else if (choiceDoors == 3)
			{
				cout << "You have chosen the caged door" << endl;
				cout << "" << endl;
				cout << "" << endl;
			}


		}


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
