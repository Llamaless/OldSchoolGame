#pragma once
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#ifndef FUNCTIONS_H
#define FUNCTIONS_H



int direction(int pick) 
{
	string route;
	int answer;
	cout << "Will you go left, right or forward" << endl;
	cin >> route;
	if (route == "left")
	{
		answer = 1;
		return(answer);
	}
	else if (route == "right")
	{
		answer = 1;
		return(answer);
	}
	else if (route == "forward")
	{
		answer = 1;
			return(answer);
	}
	else
	{
		cout << "answer must be either 'left', 'rigth' or 'forward'" << endl;
		exit(0);
	}
}

void well();
void tree();
void ent();
void troll();
void merchant();
void trap();
void midget();
void sword();
void rats();

void witch()
{
	string answer;
	cout << "Information for choice 1 left" << endl;
	cout << "Do you drink the tea? Answer 'Y' or 'N':" << endl;
	cin >> answer;
	if (answer == "Y")
	{
		cout << "Witch bad ending" << endl;
		cout << "Game Over" << endl;
		exit(0);
	}
	else if (answer == "Y")
	{
		cout << "Witch good" << endl;
	}
}

void wagon()
{
	string answer;
	cout << "Information for choice 1 right" << endl;
	cout << "Do you lift the wagon? Answer 'Y' or 'N':" << endl;
	cin >> answer;
	if (answer == "Y")
	{
		cout << "Wagon good ending" << endl;
	}
	else if (answer == "Y")
	{
		cout << "Wagon neutral" << endl;
	}
}

void pixie()
{
	string answer;
	cout << "Information for choice 1 forward" << endl;
	cout << "Do you fight? Answer 'Y' or 'N':" << endl;
	cin >> answer;
	if (answer == "Y")
	{
		string enemy = "pixie";
	}
	else if (answer == "N")
	{
		srand(time(NULL));
		int luck = rand() % 10;
		if (luck >= 7)
		{
			cout << "You live" << endl;
		}
		else if (luck < 7)
		{
			cout << "You die" << endl;
		}
	}
}


int middle(int pick)
{
	int direct;
	switch (pick)
	{
	case 1:
		direct = direction(pick);
		if (direct == 1)
		{
			witch();
		}
		else if (direct == 2)
		{
			wagon();
		}
		else if(direct == 3)
		{
			pixie();
		}
	case 2:
		direct = direction(pick);
		if (direct == 1)
		{
			well();
		}
		else if (direct == 2)
		{
			tree();
		}
		else if (direct == 3)
		{
			ent();
		}
	case 3:
		direct = direction(pick);
		if (direct == 1)
		{
			troll();
		}
		else if (direct == 2)
		{
			merchant();
		}
		else if (direct == 3)
		{
			trap();
		}
	case 4:
		direct = direction(pick);
		if (direct == 1)
		{
			midget();
		}
		else if (direct == 2)
		{
			sword();
		}
		else if (direct == 3)
		{
			rats();
		}
	}
	return 0;
}


