//

#pragma once
#include <iostream>
#include <string>
#include <cstdlib>


class Character
{
public:
    Character();
    virtual ~Character();

    //Functions
    void initialize( string name);
    string PrintPlayerStats() const;

    //Accessors
    inline const string& getName() const {return this ->name;}
    inline const int& getExp() const {return this ->exp;}
    inline const int& getHp() const {return this ->hp;}
    inline const int& getHpadv() const {return this ->hpadv;}
    inline const int& getDamage() const {return this ->damage;}
    inline const int& getDamageadv() const {return this ->damageadv;}
    inline const int& getDefence() const {return this ->defence;}

    //Modifiers

private:
    string name;
    int exp;
    int hp;
    int hpadv;
    int damage;
    int damageadv;
    int defence;
    
}
