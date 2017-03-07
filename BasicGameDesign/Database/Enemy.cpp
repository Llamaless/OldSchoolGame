#include "Enemy.h" 
#include "Functions.h"
#include <iostream>
#include <sqlite3.h>
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
void Enemy::cinit(int enemyLevel, std::string enemyNAME, std::string enemyAREA, int enemyDMG, int enemyDIF, int XPR, double enemyHP)
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

int Enemy::db_build()
{
	sqlite3 *db;
	int rc; // This line
	const char* sql; // This line
	rc = sqlite3_open("enemy.db", &db);

	/* Create SQL statement */
	sql = "CREATE TABLE Enemies("
		"ID INT PRIMARY        KEY      NOT NULL,"
		"NAME            TEXT     NOT NULL,"
		"DAMAGE          INT     NOT NULL,"
		"AREA            TEXT     NOT NULL,"
		"LEVEL           INT      NOT NULL);"
		"DIFFICULTY      INT     NOT NULL,"
		"XPR			 INT      NOT NULL);"
		"HEALTH          INT      NOT NULL);";

	/* Execute SQL statement */
	rc = sqlite3_exec(db, sql, NULL, NULL, NULL);
	sqlite3_close(db);
	return 0;
}

