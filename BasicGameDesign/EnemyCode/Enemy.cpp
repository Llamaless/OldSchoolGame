#include "Enemy.h" 
#include "Functions.h"
#include <iostream>


using namespace std;

Enemy::Enemy() //call constructor
{
	this->enemyNAME = "";
	this->enemyAREA = "";
	this->enemyLevel = 0;
	this->enemyDMG = 0;
	this->enemyDIF = 0;
	this->XPR = 0;
	this->enemyHP = 0;


}

Enemy::~Enemy() //call destructor
{


}

// Initializes the character
void Enemy::cinit(int enemyLevel, std::string enemyNAME, std::string enemyAREA)
{
	
	this->enemyNAME = "";
	this->enemyAREA = "";
	this->enemyLevel = 1;
	this->enemyDMG = 5;
	this->enemyDIF = 1;
	this->XPR = 30;
	this->enemyHP = 20;
	std::cout << this->enemyNAME;

}