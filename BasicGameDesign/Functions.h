#pragma once
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#ifndef FUNCTIONS_H
#define FUNCTIONS_H

void witches()
{
	cout << "Information for choice 1 left" << endl;
	cout << "Do you drink the tea? Answer 'Y' or 'N':" << endl;
	cin >> answer;
	if (answer == "Y")
	{
		cout << "Witch bad ending" << endl;
		cout << "Game Over" << endl;
	}
	else if (answer == "Y")
	{
		cout << "Witch good" << endl;
	}
}

