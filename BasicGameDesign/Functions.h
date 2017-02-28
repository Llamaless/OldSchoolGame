#pragma once
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#ifndef FUNCTIONS_H
#define FUNCTIONS_H

void middle() :
{
	return 0;
	switch (choice)
        case 1:
			direct = direction();
			switch (direct)
		case 1:
			witch();
		case 2:
			wagon();
		case 3:
			pixie();
		case 2:
			direct = direction();
			switch (direct)
		case 1:
			well();
		case 2:
			tree();
		case 3:
			ent();
		case 3:
			direct = direction();
			switch (direct)
		case 1:
			troll();
		case 2:
			merchant();
		case 3:
			trap();
		case 4:
			direct = direction();
			switch (direct)
		case 1:
			midget();
		case 2:
			sword();
		case 3:
			rats();
}

int direction() :
{
	string route;
	int answer;
	cout << "Will you go left, right or forward" << endl;
	cin >> route;
	if (route = "left")
	{
		answer = 1;
		return(answer);
	}
	else if (route = "right")
	{
		answer = 1;
		return(answer);
	}
	else if (route = "forward")
	{
		answer = 1
			return(answer);
	}
	else()
	{
		cout << "answer must be either 'left', 'rigth' or 'forward'" << endl;
		middle(choice);
	}
}

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

void wagon() :
{
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

void pixie() :
{
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


