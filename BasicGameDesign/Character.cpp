#include "Character.h"
#include "Functions.h"
#include <iostream>
#include <sqlite3.h>

using namespace std;

Character::Character()//Call constructor
{
    this->name = "";
    this->exp = 0;
    this->hp = 0;
    this->hpadv = 0;
    this->damage = 0;
    this->damageadv = 0;
    this->defence = 0;
}

Character::~Character()//Call destructor
{

}

//Function to initialize the character
void Character::initialize(int level, std::string name)
{
    this->name = name;
    this->exp = 0;
    this->hp = 50;
    this->hpadv = 100;
    this->damage = 10;
    this->damageadv =100;
    this->defence = 1; 
}

string Character::PrintPlayerStats() const
{
    std::cout<<"-Character stats-"<<std::endl;
    std::cout<<"-Name: "<< this->name<<std::endl;
    std::cout<<"-Exp: "<< this->exp<<std::endl;
    std::cout<<"-:Health "<< this->hp<<"/"<<this->hpadv<<std::endl;
    std::cout<<"-Damage: "<< this->damage<<"/"<<this->damageadv<<std::endl;
    std::cout<<"-Defence: "<< this->defence<<std::endl;
    std::cout<<std::endl;
            
}

int Character::db_build()
{
    sqlite3 *db;
    int rc;
    const char* sql:
    rc = sqlite_open("character.db", &db);

    /*Create SQL Table*/
    sql= "CREATE TABLE Character("
        "ID INT PRIMARY         KEY     NOT NULL,"
        "NAME            TEXT     NOT NULL,"
        "EXP             INT        NOT NULL,"
        "HEALTH          INT   NOT NULL,"
        "DAMAGE          INT   NOT NULL,"
        "DEFENCE         INT  NOT NULL,";

    /*Execute SQL Table*/
    rc = sqlite3_exec(db, sql, NULL, NULL, NULL)
    sqlite3_close(db);
    return 0;
}
        

