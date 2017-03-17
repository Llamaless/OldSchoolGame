
//header file for character.cpp

#pragma once
#include<string>
#include <iomanip>
#include <iostream>

using namespace std;
#ifndef CHARACTER_H
#define CHARACTER_H


class Character
{
public://publically accessible attributes
    Character();
    virtual ~Character();

    //Functions
    void initialize( string name);
    void PrintPlayerStats() const;

    //Accessors
    inline const std::string& getName() const {return this ->name;}
    inline const int& getExp() const {return this ->exp;}
    inline const int& getHp() const {return this ->hp;}
    inline const int& getHpadv() const {return this ->hpadv;}
    inline const int& getDamage() const {return this ->damage;}
    inline const int& getDamageadv() const {return this ->damageadv;}
    inline const int& getDefence() const {return this ->defence;}

    //Modifiers

private://private access
    srd::string name;
    int exp;
    int hp;
    int hpadv;
    int damage;
    int damageadv;
    int defence;
    
}
