#pragma once
#include <string> 
#include <ctime>
#include <iomanip>
#include <iostream>

using namespace std; 
#ifndef ENEMY_H
#define ENEMY_H 



class Enemy {

public :

	Enemy(); //constructor

	virtual ~Enemy(); //destructor





	//Accessors
	inline const std::string& getAREA() const { return this->enemyAREA; };
	inline const std::string& getNAME() const { return this->enemyNAME; };
	inline const int& getLEVEL() const { return this->enemyLevel; };
	inline const int& getDMG() const { return this->enemyDMG; };
	inline const int& getDIF() const { return this->enemyDIF; };
	inline const int& getXPR() const { return this->XPR; };
	inline const double& getHP() const { return this->enemyHP; };

	//Functions

	void cinit(int enemyLevel, std::string enemyNAME, std::string enemyAREA);



	


private: //private attributes

	std::string enemyAREA;
	int enemyLevel;
	int enemyDMG;
	int enemyDIF;
	int XPR;
	int XPNext;
	double enemyHP;
	std::string enemyNAME;


};

#endif // ENEMY.H