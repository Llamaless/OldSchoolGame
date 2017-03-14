#include "Game.h"
#include <iostream>
#include <conio.h>




using namespace std;

Game::Game() //init constructor
{
	choice = 0;
	play = true;

}

Game::~Game() //init destructor
{

}


//Functions



void Game::MainMenu() //init function
{
	cout << "A Tale of a Hero" << endl << endl;

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

	case 2:
		system("cls");
		cout << " <=======|==o" << " o==|=======>" << "\n" << endl;
		cout << " The purpose of this game is to help your character to overcome the challenges" << endl;
		cout << "he faces in the zones that he travels to, by defeating the enemies he will encounter.\n" << endl;
		cout << " During the game, the user will have to choose his options very carefully, as it will" << endl;
		cout << "affect the fate of the hero.\n" << endl;
		cout << " The instructions are simple : Play and survive the challenges in order to finish the story.\n" << endl;
		cout << " <=======|==o" << " o==|=======>" << endl << endl;

		cout << "Press enter to go back to main menu..";
		getline(cin, back);
		cin.ignore();
		system("cls");

		break;
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
		cout << "\t >> Enter '3' to enter the forest through the dusty path" << endl;

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


			cout << "\t >> Enter '3' to go to a cave you have found on your way to the city and left it behind" << endl;

			goto retry;

		}
		else if (choiceOne_Path == 3)
		{
			system("cls");


			int choiceTwo_Path;
			cout << "\n!!!----------------------Chapter One: The Briarheart Forest----------------------!!!" << endl;
			cout << "As you head towards the forest you notice 3 paths, Which path will you take?." << endl;
			cout << "Where do you choose to go?" << endl;
			cout << "\t >> Enter '1' to go West" << endl;
			cout << "\t >> Enter '2' to go East" << endl;
			cout << "\nEnter your choice: " << endl;
			cin >> choiceTwo_Path;

			if (choiceTwo_Path == 1)
			{
				cout << "Taking the west path you come accross a cabin" << endl;
				cout << "Knocking on the door a beautiful woman answers, with a smile she invites you in." << endl;
				cout << "You sit down in a chair, you begin to talk and she offers you a cup of tea." << endl;
				cout << "\ >> Enter '1' to drink the tea" << endl;
				cout << "\ >> Enter '2' to leave the tea" << endl;
				int route1;
				cin >> route1;
				if (route1 == 1)
				{
					cout << "Shortly after ingesting the tea your throat start to burn." << endl;
					cout << "Grasping your throat, vomitting and wreching you realise you have been poisoned..." << endl;
					break;
					system("cls");
					goto retry;
				}
				else if (route1 == 2)
				{
					cout << "Finishing your conversation you move to go on your way." << endl;
					cout << "The woman, waves you on your journey an unsual grimace on her face" << endl;
					int route2;
					cout << "Now there is a path to the North and one too the East." << endl;
					cout << "Where do you choose to go?" << endl;
					cout << "\t >> Enter '1' to go North" << endl;
					cout << "\t >> Enter '2' to go East" << endl;
					cout << "\nEnter your choice: " << endl;
					cin >> route2;
					if (route2 == 1)
					{
						cout << "Taking the North path, you come across a well" << endl;
						cout << "Thirsty you pull the bucket out expecting some water." << endl;
						cout << "To your suprise though, the bucket comes out full of gold." << endl;
						cout << "Glee lights your face as you drop a coin down and hit a distinct metallic clink at the bottom." << endl;
						cout << "\ >> Enter '1' to climb the rope down the well to get the gold" << endl;
						cout << "\ >> Enter '2' to take what is in the bucket and get out of dodge" << endl;
						int route;
						cin >> route;
						if (route == 2)
						{
							cout << "Thinking about it you decide the gold in the bucket is more than enough." << endl;
							cout << "You cut the bucket loose and continue on your journey." << endl;
							int route3;
							cout << "Now there is a path to the North and one too the West." << endl;
							cout << "Where do you choose to go?" << endl;
							cout << "\t >> Enter '1' to go North" << endl;
							cout << "\t >> Enter '2' to go West" << endl;
							cout << "\nEnter your choice: " << endl;
							cin >> route3;
							if (route3 == 2)
							{
								cout << "Taking the West path, you encounter a grove of massive oak trees." << endl;
								cout << "Thinking to yourself 'I could do with nap' you settle down to sleep. " << endl;
								cout << "Suddenly you feel the ground shaking." << endl;
								cout << "Looking up you see  huge tree looming over you, with a very annoyed face." << endl;
								cout << "Picking you up, it tears you in half with roar, splattering your entrails everywhere..." << endl;
								cout << "If you haven't worked it out yet, the narator hates you." << endl;
								break;
								system("cls");
								goto retry;
							}
							else if (route3 == 1)
							{
								cout << "Taking the North path, you find a bowl of soup sitting on a tree stump." << endl;
								cout << "Hungry you pick it up and begin to eat. The taste is exquisite. " << endl;
								cout << "However, by accident you push the spoon to far and begin to choke." << endl;
								cout << "no matter how hard you try, you can't get it out and you slowly suffucate." << endl;
								cout << "With your final gasps of air you drop the bowl of soup all over you..." << endl;
								cout << "You just choked on a spoon. A FUCKING SPOON. THAT'S HOW TIRED I AM OF WRITING/CODING THIS SHIT!!!" << endl;
								break;
								system("cls");
								goto retry;
							}

							else if (route == 1)
							{
								cout << "The gold in the well would make you a rich man." << endl;
								cout << "Who needs to finish a quest when they're rich." << endl;
								cout << "This rolls aound in your head as you begin to climb the rope down the well." << endl;
								cout << "'SNAP'.. about a third of the way down the rope gives way." << endl;
								cout << "You hear a distinctive crunch as you legs hit the ground. You are going to starve to death down there...." << endl;
								break;
								system("cls");
								goto retry;
							}

						}
						if (route2 == 2)
						{
							cout << "Taking the East path, you see a berry bush." << endl;
							cout << "Hungry you try to pluck  berry to eat. " << endl;
							cout << "Unfourtunatley that bush was the hive for a group of very angry wasps." << endl;
							cout << "Enraged they swarm around you stinging every exposed part of your body." << endl;
							cout << "As your throat collapses, maybe you'll learn some restraint in the next life..." << endl;
							break;
							system("cls");
							goto retry;
						}


						if (choiceTwo_Path == 2)
						{
							cout << "Taking the East path, you bump into a pair of dwarves" << endl;
							cout << "They appear to be arguing, It seems pretty heated." << endl;
							cout << "You wonder whether or not you can help them." << endl;
							cout << "\ >> Enter '1' to just leave them alone" << endl;
							cout << "\ >> Enter '2' to talk to the dwarves" << endl;
							int route;
							cin >> route;
							if (route == 2)
							{
								cout << "Walking over you start to try to get there attetion, imploring them to calm down." << endl;
								cout << "However one of the dwarves doesn't take to kindly to your message." << endl;
								cout << "Turning around he buries his broad directly in your face before turning back to continue arguing..." << endl;
								break;
								system("cls");
								goto retry;
							}
							else if (route == 1)
							{
								cout << "You walk off towards the paths too  afraid to engage with them." << endl;
								cout << "However, as you walk off you break a stick directing both the attentions towards you." << endl;
								cout << "Infuriated both dwarves charge at you, weapons raised before hacking to pieces." << endl;
								cout << "Afterwards they both seemed to have calmed down and go about their day...." << endl;
								break;
								system("cls");
								goto retry;
							}


						}
						/*else if (choiceTwo_Path == 2)
						{
							cout << "You narrowly escape the house as you leave through the window just as the guards burst through the front door..." << endl;
							cout << "Suddenly a guard shouts 'THERE HE IS' and you are chased through the city..." << endl;
							cout << "Eventually you are caught and imprisoned until your execution..." << endl;
							system("pause");
							break;

						}*/

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
								cout << "As you catch your breath, you remember that you have a quest to complete, and proceed to the cave." << endl << endl;
							}




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
								cout << "You have chosen to search for a way out, and on your way you find a mysterious object on the ground." << endl;
								cout << "As you touch it, you feel the Monk's presence in your head, maddening your mind and making you his servant." << endl;

								cout << "" << endl;
								break;

							}

							else if (choiceRoom == 2)
							{
								cout << "You have chosen to break the door down, but a poisonous gas comes from the room, causing you to asphyxiate and die" << endl;
								cout << "" << endl;
								break;
							}



						}

						else if (choiceTwo_Path == 2)
						{
							cout << "You have taken the path to the right" << endl;
							cout << "as you continue to walk ahead on this cold path you start to feel the ground shake" << endl;
							cout << "THE FLOOR COLLAPSES BENEATH YOU" << endl;
							cout << "YOU HAVE DIED" << endl;
							break;
						}

						else if (choiceTwo_Path == 3)
						{
							cout << "You continue straight through this dungeon searching for whatever items you can find along the floor within the darkness " << endl;
							cout << "You come across a torch and decide to light it " << endl;
							cout << "The halls light up and reveal a door infront of you" << endl;
							cout << "Will you proceed? " << endl;


							int choiceDoor;

							cout << "\t >> Enter '1' to go through the wooden door " << endl;
							cout << "\nEnter your choice: ";
							cin >> choiceDoor;

							if (choiceDoor == 1)
							{
								cout << "You have chosen the wooden door" << endl;
								cout << "You find yourself in a small room, but you feel something is not right..." << endl;
								cout << "In a corner, you see the Lonely Monk meditating, with a group of monkeys surrounding him, maybe protecting him..." << endl;
								cout << " Knowing that you have to fulfill your duty, you charge at him, wanting to end his tornment." << endl;
								Enemy monk;
								monk.cinit(3, "Lonely Monk", "Hideout", 30, 3, 200, 250);
								cout << "Now that you completed your quest, you return victorious to the city...." << endl;
								cout << "Returning to the city, everybody acknowledges your deed and a big celebration begins in your honor !" << endl;
								cout << "THE END" << endl;



								cout << "" << endl;
							}
							else
							{
								break;
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
					cout << "Please enter  1 or 2" << endl;

				}
				cout << "\n Press any key to continue" << endl;
				_getch();
				break;


	default:
		break;
			}

		}
	}
}
