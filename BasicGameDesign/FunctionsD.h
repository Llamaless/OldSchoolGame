#pragma once
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#ifndef FUNCTIONS_H
#define FUNCTIONS_H



void direction1()
{
	string target;
	string route;
	string answer;
	cout << "Will you go left, right or forward" << endl;
	cin >> route;
	if (route == "left")
		{
			cout << "Information for choice 1 left" << endl;
			cout << "Do you drink the tea? Answer 'Y' or 'N':" << endl;
			cin >> answer;
			if (answer == "Y")
			{
				cout << "Witch bad ending" << endl;
				cout << "Game Over" << endl;
				exit(0);
			}
			else if (answer == "N")
			{
				cout << "Witch good" << endl;
			}
		}
		else if (route == "right")
		{
			cout << "Information for choice 1 right" << endl;
			cout << "Do you lift the wagon? Answer 'Y' or 'N':" << endl;
			cin >> answer;
			if (answer == "Y")
			{
				cout << "Wagon good ending" << endl;
			}
			else if (answer == "N")
			{
				cout << "Wagon neutral" << endl;
			}
		}
		else if (route == "forward")
		{
			cout << "Information for choice 1 forward" << endl;
			cout << "Do you fight? Answer 'Y' or 'N':" << endl;
			cin >> answer;
			if (answer == "Y")
			{
				target = "pixie";
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
	}


void direction2()
{
	string target;
	string route;
	string answer;
	cout << "Will you go left, right or forward" << endl;
	cin >> route;
	if (route == "left")
		{
			cout << "Information for choice 2 left" << endl;
			cout << "Do you draw from the well? Answer 'Y' or 'N':" << endl;
			cin >> answer;
			if (answer == "Y")
			{
				cout << "Well bad ending" << endl;
				cout << "Game Over" << endl;
				exit(0);
			}
			else if (answer == "N")
			{
				cout << "Well good" << endl;
			}
		}
		else if (route == "forward")
		{
			cout << "Information for choice 2 forward" << endl;
			cout << "Do you cut the tree? Answer 'Y' or 'N':" << endl;
			cin >> answer;
			if (answer == "Y")
			{
				cout << "Tree good ending" << endl;
			}
			else if (answer == "N")
			{
				cout << "Tree neutral" << endl;
			}
		}
		else if (route == "right")
		{
			cout << "Information for choice 2 right" << endl;
			cout << "Do you fight? Answer 'Y' or 'N':" << endl;
			cin >> answer;
			if (answer == "Y")
			{
				target = "ent";
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
	}



void direction3()
{
	int gold = 0;
	string target;
	string route;
	string answer;
	cout << "Will you go left, right or forward" << endl;
	cin >> route;
		if (route == "right")
		{
			cout << "Information for choice 3 right" << endl;
			cout << "Do you continue straight across the clearing? Answer 'Y' or 'N':" << endl;
			cin >> answer;
			if (answer == "Y")
			{
				cout << "Trap good ending" << endl;
			}
			else if (answer == "N")
			{
				cout << "Trap bad" << endl;
				cout << "Game Over" << endl;
				
			}
		}
		else if (route == "forward")
		{
			cout << "Information for choice 3 forward" << endl;
			cout << "Do you trade with the merchant? Answer 'Y' or 'N':" << endl;
			cin >> answer;
			if (answer == "Y")
			{
				cout << "Merchant goods text" << endl;
				if (gold < 20);
				{
					cout << "apologise and leave" << endl;
				}
				if(gold > 20)
				{
					string mAnswer;
					cout << "Do you trade with the merchant? Answer 'Y' or 'N':" << endl;
					cin >> mAnswer;
					if (mAnswer == "Y")
					{
						cout << "item gained etc" << endl;
					}
					else if (mAnswer == "N")
					{
						cout << "no item gained" << endl;
					}
				}
			}
			else if (answer == "N")
			{
				cout << "Merchant neutral" << endl;
			}
		}
		else if (route == "left")
		{
			cout << "Information for choice 3 left" << endl;
			cout << "Do you fight? Answer 'Y' or 'N':" << endl;
			cin >> answer;
			if (answer == "Y")
			{
				target = "troll";
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
	}



void direction4()
{
	string target;
	string route;
	string answer;
	cout << "Will you go left, right or forward" << endl;
	cin >> route;
		if (route == "left")
		{
			cout << "Information for choice 4 left" << endl;
			cout << "Do you fight? Answer 'Y' or 'N':" << endl;
			cin >> answer;
			if (answer == "Y")
			{
				target = "leprachaun";
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
		else if (route == "forward")
		{
			cout << "Information for choice 4 forward" << endl;
			cout << "Do you attempt to pull the sword from the stone? Answer 'Y' or 'N':" << endl;
			cin >> answer;
			if (answer == "Y")
			{
				srand(time(NULL));
				int luck = rand() % 10;
				if (luck >= 9)
				{
					cout << "Sword good ending" << endl;
				}
				else if (luck < 7)
				{
					cout << "No sword for you" << endl;
				}
			}
			else if (answer == "N")
			{
				cout << "Tree neutral" << endl;
			}
		}
		else if (route == "right")
		{
			cout << "Information for choice 2 right" << endl;
			cout << "Do you fight? Answer 'Y' or 'N':" << endl;
			cin >> answer;
			if (answer == "Y")
			{
				target = "rats";
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
	}




