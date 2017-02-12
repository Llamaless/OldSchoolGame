
//Importing libraries
#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <time.h>

using namespace std;

//Initialize variables and assign values to them
int MAX_DAMAGE = 10;
int MIN_DAMAGE= 5;
int DEFENCE = 1;
int CURRENT_HEALTH = 50;
int MAX_HEALTH = 50;

int MONSTER_MAX = 7;
int MONSTER_MIN = 1;
int MONSTER_DEF = 0;
int MONSTER_CURRENT_HEALTH = 40;
int MONSTER_MAX_HEALTH = 40;

int DAMAGE_DEALT;
int DAMAGE_TAKEN;

bool Training;
string WINNER;

void MONSTER_ATTACK()
{
    srand(time(NULL)); //Get different random number each time
    //Generate random damage between min and max damage
    DAMAGE_TAKEN = ((rand() % ((MONSTER_MAX + 1) - MONSTER_MIN )) + MONSTER_MIN) - DEFENCE ;
    if (DAMAGE_TAKEN < 0) // if the damage is a negative number then set the damage to 1
        {
            DAMAGE_TAKEN = 1;
        }
    CURRENT_HEALTH -= DAMAGE_TAKEN; //decrease players hp by the damage taken

        if (CURRENT_HEALTH <= 0) //if the player has 0 hp declare the monster as the winner
            {

                Training = false;
                WINNER = "MONSTER";

            }
}

int main()
{

    int OPTION;
    Training = true;
    while (Training) //run this while the player is in battle
    {
        //MENU with choices and to show monster hp and player hp
        cout << "--- BATTLE ----" << endl << endl;
        cout << "MONSTER HEALTH " << MONSTER_CURRENT_HEALTH << "/" << MONSTER_MAX_HEALTH << endl;
        cout << "PLAYER HEALTH " << CURRENT_HEALTH << "/" << MAX_HEALTH << endl << endl;
        cout << "0 : ATTACK" << endl;
        cout << "1 : SPELL" << endl << endl;

        cout << "YOUR OPTION IS :" ;

        cin >> OPTION;
        cout << endl;

        switch (OPTION)  //do the appropriate based on the option chosen
        {
        case 0: // if player chose attack
            srand(time(NULL)); //generate =different number each time
            //generate random damage based on the attack max min and the defence of the monster
            DAMAGE_DEALT = ((rand() % ((MAX_DAMAGE + 1) - MIN_DAMAGE )) + MIN_DAMAGE) - MONSTER_DEF ;
            if (DAMAGE_DEALT < 0) //if the damage is negative then set it to 1
            {

               DAMAGE_DEALT = 1;
            }
            MONSTER_CURRENT_HEALTH -= DAMAGE_DEALT;//decrease monsters hp by the damage generated

            if (MONSTER_CURRENT_HEALTH <= 0) // if monster hp is 0 then declare payer as the winner
            {

                Training = false;
                WINNER = "PLAYER";
            }
            else
            {
                MONSTER_ATTACK(); //Make monster attack
            }


            break;

        case 1:
            DAMAGE_DEALT = MAX_DAMAGE + (MAX_DAMAGE * 30 / 100) - MONSTER_DEF; //Get players max damage and add 30% to it
            if (DAMAGE_DEALT < 0) //if the damage is negative then set it to 1
            {

               DAMAGE_DEALT = 1;
            }
            MONSTER_CURRENT_HEALTH -= DAMAGE_DEALT;//decrease monsters hp by the damage generated

            if (MONSTER_CURRENT_HEALTH <= 0) // if monster hp is 0 then declare payer as the winner
            {

                Training = false;
                WINNER = "PLAYER";
            }
            else
            {
                MONSTER_ATTACK(); //Make monster attack
            }


            break;

        }





    }
    //Output winner to screen
    cout << WINNER << endl;
    cin >> OPTION;
    return 0;
}
