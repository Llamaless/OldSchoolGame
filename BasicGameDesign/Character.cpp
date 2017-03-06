#include "Character.h"


Character::Character()
{
    this->name = "";
    this->exp = 0;
    this->hp = 0;
    this->hpadv = 0;
    this->damage = 0;
    this->damageadv = 0;
    this->defence = 0;
}

Character::~Character()
{

}

//Fuction
void Character::initialize(int level, string name)
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
    cout<<"-Character stats-"<<endl;
    cout<<"-Name: "<< this->name<<endl;
    cout<<"-Exp: "<< this->exp<<endl;
    cout<<"-:Health "<< this->hp<<"/"<<this->hpadv<<endl;
    cout<<"-Damage: "<< this->damage<<"/"<<this->damageadv<<endl
    cout<<"-Defence: "<< this->defence<<endl
            
}
