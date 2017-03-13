#include "Game.h"
#include "Enemy.h"
#include "FunctionsD.h"

Game::Game()
{
	choice = 0;
	play = true;

}

Game::~Game()
{

}


//Functions



void Game::MainMenu()
{
	cout << " Main Menu\n" << endl;
	cout << " 1:	Play " << endl;
	cout << " 2:	Instructions" << endl;
	cout << " 3:	Character Information " << endl;
	cout << " 4:	Credits" << endl;
	cout << " 5:	Quit" << endl;
	cout << endl << "Choice: ";

	string back;
	string quit = "";

	cin >> choice;

	switch (choice)
	{
	case 1:
		system("cls");
		cout << "On your adventure you come across a heavily armed city..." << endl;
		cout << "You have two options warrior" << endl;
		system("cls");
		int choiceOne_Path;
		cout << "The light of the sun glints off a piece of glass next to your head causing you too squint. A sudden pain rushes through your body causing you to jolt." << endl;
		cout << "You look around you, where are you? You are near a temple, after days of travelling. You see behind you a sword, some body armour and a note near it saying : The City of Jrazelov wants the Lone Monk dead, you have been chosen to fulfill this task." << endl;
		cout << "May this sword and armour help you in this conquest. You can find the Monk in a old cave near the city. Do not attempt to come to the city before you kill the man, or you will be the one who is punished. Endless glory awaits your return! " << endl;
		cout << "# What would you like to do?" << endl;
		cout << "\t >> Enter '1' to enter the city through the main gates " << endl;
		cout << "\t >> Enter '2' to enter the city by climbing its walls" << endl;
		
	retry:


		cout << "\nEnter your choice: ";
		cin >> choiceOne_Path;
		if (choiceOne_Path == 1)
		{
			cout << "\n!!!----------------------Chapter One: The City of Jrazelov----------------------!!!" << endl;
			cout << "\nThe front gates are heavily barricaded and protected by 10 armed guards" << endl;
			cout << "You are attacked by the guards" << endl;
			cout << "# You try to fight but you are overpowered and are killed..." << endl;


		}
		else if (choiceOne_Path == 2)
		{
			cout << "\n!!!----------------------Chapter One: The City of Jrazelov----------------------!!!" << endl;
			cout << "\nYou climb the walls of the city and make it over to the other side" << endl;
			cout << "There are heavily armed guards everywhere but they haven't noticed you." << endl;
			cout << "An infantry patrol approaches you" << endl;
			cout << "# You run into a nearby house and hide" << endl;
			cout << "# a townsman asks who you are" << endl;
			char name[50];
			cout << "You reply" << endl << endl;
			cin.getline(name, 50);
			cout << "You better move fast, " << name << "The guards are searching for you" << endl << endl;
			cout << " You need to fulfill your duty before you return to the city hero, you are not welcome here until then" << endl << endl;
			
			cout << "\t >> Enter '1' to enter the city through the main gates " << endl;
			cout << "\t >> Enter '2' to enter the city by climbing its walls" << endl;
			cout << "\t >> Enter '3' to go to a cave you have found on your way to the city and left it behind" << endl;

			goto retry;

		}
		else if (choiceOne_Path == 3)
		{
			system("cls");


			int choiceTwo_Path;
			cout << "As you look around the house there are three main exits, The front door, The window or the cellar." << endl;
			cout << "Where do you choose to go?" << endl;
			cout << "\t >> Enter '1' to go out the front door " << endl;
			cout << "\t >> Enter '2' to go out the window" << endl;
			cout << "\t >> Enter '3' to go into the cellar" << endl << endl;
			cout << "\nEnter your choice: "<< endl;
			cin >> choiceTwo_Path;

			if (choiceTwo_Path == 1)
			{
				cout << "You leave through the front door only to be apprehended by the guards" << endl;
				cout << "You are taken to a prison cell where you await your execution day..." << endl;
				system("pause");
				break;
				
			}

			else if (choiceTwo_Path == 2)
			{
				cout << "You narrowly escape the house as you leave through the window just as the guards burst through the front door..." << endl;
				cout << "Suddenly a guard shouts 'THERE HE IS' and you are chased through the city..." << endl;
				cout << "Eventually you are caught and imprisoned until your execution..." << endl;
				system("pause");
				break;
				
			}

			else if (choiceTwo_Path == 3)
			{
				cout << "You run down the cellar..." << endl;
				cout << "There is a small opening that smells putrid..." << endl;
				cout << "It is the city's sewer system" << endl;

			}

			int choiceThree_Path;
			cout << "You narrowly escaped the guards and are now under the city" << endl;
			cout << "As you make your way through the sewer you come across two different paths" << endl;
			cout << "Do you take the right or the left path? " << endl;
			cout << "Please enter 1 for the right and 2 for the left ." << endl;
			cin >> choiceThree_Path;
			if (choiceThree_Path == 1)
			{
				cout << "You have taken the right path " << endl;
				cout << "As you reach the end of the path it is a dead end..." << endl;
				cout << "You turn back" << endl;
				cout << "Please enter 2 for the left" << endl;
				cin >> choiceThree_Path;
			}

			if (choiceThree_Path == 2)
			{
				int Crocolisk_Battle;

				cout << "You've taken the left path" << endl;
				cout << "Where you encounter another dead end..." << endl;
				cout << "You turn back and take the middle path" << endl;
				cout << "\n\n\n\n You go through the middle path where you find a ladder at the end of the tunnel " << endl;
				cout << " As you progress to the ladder, you encounter many obstacles, but the worst, a huge crocolisk, ready to eat you." << endl;
				Enemy Crocolisk;
				Crocolisk.cinit(2, "Giant Crocolisk", "City", 10, 2, 60, 80);
				cout << "Do you wish to fight the crocolisk or flee?" << endl;
				cout << "Enter 1 to fight or 2 to flee" << endl;

				cin >> Crocolisk_Battle;

				if (Crocolisk_Battle == 1)
				{
					cout << "You have chosen to fight the crocolisk..." << endl;
					cout << "The crocolisk charges at you and rips a chunk off your arm..." << endl;
					cout << "As a bite is taken, it injects it's poison into you and you slowly begin to die..." << endl;
					system("pause");
					break;
				}

				if (Crocolisk_Battle == 2)
				{
					cout << "By fleeing you run up the ladder and discover you are near the walls of the city..." << endl;
					cout << "As you catch your breath, you remember that you have a quest to complete, and proceed to the cave." << endl <<  endl;
				}
			
			
			
			
			}

			



			cout << "Going to the cave....\n";

			cout << "You continue your journey and stumble upon a suspicous cave where you may find the end of your quest." << endl;
			cout << "However you must be careful as the risk is far too high" << endl;
			cout << "You have two options adventurer " << endl;


			int choiceOne_Entrance;
			cout << "\t >> Enter '1' to enter the cave and search for the Monk " << endl;
			cout << "\t >> Enter '2' if you would like to return to the city " << endl;



			cout << "\nEnter your choice: ";
			cin >> choiceOne_Entrance;
			if (choiceOne_Entrance == 1)
			{
				cout << "-----Entrance-----" << endl;
				cout << "you enter the dungeon and begin to explore" << endl;


				int choiceTwo_Path;


				cout << "As you look around the house there are three paths you can take within this dungeon, left, right or straight." << endl;
				cout << "Where do you choose to go?" << endl;
				cout << "\t >> Enter '1' to go left " << endl;
				cout << "\t >> Enter '2' to go right" << endl;
				cout << "\t >> Enter '3' to go straight" << endl;
				cout << "\nEnter your choice: ";
				cin >> choiceTwo_Path;

				if (choiceTwo_Path == 1)
				{
					cout << "You have chosen to take the path to the left" << endl;
					cout << "As you continue to walk you come to a empty room with a skeleton slumped within the corner" << endl;
					cout << "A DOOR SLAMS SHUT BEHIND YOU" << endl;

					int choiceRoom;

					cout << "You have two options" << endl;
					cout << "\t >> Enter '1' to search the room for a way out " << endl;
					cout << "\t >> Enter '2' to attempt to somehow break the door down" << endl;

					cout << "\nEnter your choice: ";
					cin >> choiceRoom;

					if (choiceRoom == 1)
					{
						cout << "You have chosen to search for a way out" << endl;
						cout << "" << endl;
					}

					else if (choiceRoom == 2)
					{
						cout << "You have chosen to break the door down" << endl;
						cout << "" << endl;
					}



				}

				else if (choiceTwo_Path == 2)
				{
					cout << "You have taken the path to the right" << endl;
					cout << "as you continue to walk ahead on this cold path you start to feel the ground shake" << endl;
					cout << "THE FLOOR COLLAPSES BENEATH YOU" << endl;
					cout << "YOU HAVE DIED" << endl;
				}

				else if (choiceTwo_Path == 3)
				{
					cout << "You continue straight through this dungeon searching for whatever items you can find along the floor within the darkness " << endl;
					cout << "You come across a torch and decide to light it " << endl;
					cout << "The halls light up and reveal three doors infront of you" << endl;
					cout << "Which one will you choose? " << endl;


					int choiceDoors;

					cout << "\t >> Enter '1' to go through the wooden door " << endl;
					cout << "\t >> Enter '2' to go through the steel door" << endl;
					cout << "\t >> Enter '3' to go through the caged door" << endl;
					cout << "\nEnter your choice: ";
					cin >> choiceDoors;

					if (choiceDoors == 1)
					{
						cout << "You have chosen the wooden door" << endl;
						cout << "You find yourself in a small room, but you feel something is not right..." << endl;
						cout << "In a corner, you see the Lonely Monk meditating, with a group of monkeys surrounding him, maybe protecting him..." << endl;
						cout << " Knowing that you have to fulfill your duty, you charge at him, wanting to end his tornment." << endl;
						Enemy monk;
						monk.cinit(3, "Lonely Monk", "Hideout", 30, 3, 200, 250);
						//fighting
						cout << "Now that you completed your quest, you return victorious to the city...." << endl;
						cout << "Returning to the city, everybody acknowledges your deed and a big celebration begins in your honor !" << endl;
						cout << "THE END" << endl;



						cout << "" << endl;
					}

					else if (choiceDoors == 2)
					{
						cout << "You have chosen the steel door" << endl;
						cout << "" << endl;
					}

					else if (choiceDoors == 3)
					{
						cout << "You have chosen the caged door" << endl;
						cout << "" << endl;
						cout << "" << endl;
					}


				}


			}


			else if (choiceOne_Entrance == 2)
			{
				cout << "You have chosen to return to the city" << endl;
				cout << "\t >> Enter '1' to enter the city through the main gates " << endl;
				cout << "\t >> Enter '2' to enter the city by climbing its walls" << endl;
				cout << "\t >> Enter '3' to go to a cave you have found on your way to the city and left it behind" << endl;
				goto retry;


			}
			else
			{
				cout << "You did not enter the correct number please enter 1 or 2" << endl;

			}
			cout << "\nPress any key to continue" << endl;
			_getch();
			break;

		}

		else
		{
			cout << "Please enter  1,2 or 3" << endl;

		}
		cout << "\n Press any key to continue" << endl;
		_getch();
		break;
	case 2:
		system("cls");
		cout << " <=======|==o" << " o==|=======>" << "\n" << endl;
		cout << " The purpose of this game is to help your character to overcome the challenges" << endl;
		cout << "he faces in the zones that he travels to, by defeating the enemies he will encounter.\n" << endl;
		cout << " During the game, the user will have to choose his options very carefully, as it will" << endl;
		cout << "affect the fate of the hero.\n" << endl;
		cout << " The instructions are simple : Play and survive the challenges in order to finish the story\n" << endl;
		cout << " <=======|==o" << " o==|=======>" << endl << endl;

		cout << "Press enter to go back to main menu..";
		getline(cin, back);
		cin.ignore();
		system("cls");

		break;
	case 3:
		system("cls");
		cout << "=== Character Stats === \n" << endl;
		cout << "Name :" << "To be added\n" << endl;
		cout << "Health : .... \n" << endl;
		cout << "Stamina : .... \n" << endl;
		cout << "Strenght : .... \n" << endl;
		cout << "Experience : .... \n" << endl;

		cout << "Press enter to go back to main menu..";
		getline(cin, back);
		cin.ignore();
		system("cls");

		break;
	case 4:
		system("cls");
		cout << "The game was created by : \n" << endl;
		cout << " Kobe Davis " << endl;
		cout << " Gabriel Dumitru " << endl;
		cout << " Petar Patev " << endl;
		cout << " Ajaz Usmaan" << endl;
		cout << " Asim Osama" << endl;
		cout << " Bashir Deen" << endl << endl;


		cout << "Press enter to go back to main menu..";
		getline(cin, back);
		cin.ignore();
		system("cls");

		break;

	case 5:
		system("cls");
		cout << "Are you sure you want to quit de game?" << endl;
		cout << "If yes, press y, if not, press n." << endl;
		cout << "Choice: ";
		cin >> quit;
		if (quit == "y")
		{
			play = false;
			Sleep(1000);
			break;
			system("cls");
		}
		else if (quit == "n")
		{
			system("cls");
			cout << "Going back to main menu.";
			Sleep(1000);
			system("cls");
			break;
		}




	default:
		cout << "Incorrect Input" << endl;
		break;
	}

}
