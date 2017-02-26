#include "Game.h"

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
		cout << " <=======|==o" << " o==|=======>" <<"\n"<< endl;
		cout << " The purpose of this game is to help your character to overcome the challenges" << endl;
		cout << "he faces in the zones that he travels to, by defeating the enemies he will encounter.\n" << endl;
		cout << " During the game, the user will have to choose his options very carefully, as it will" << endl;
		cout << "affect the fate of the hero.\n" << endl;
		cout<<" The instructions are simple : Play and survive the challenges in order to finish the story.\n"<<endl;
		cout << " <=======|==o" << " o==|=======>" << endl << endl;
		
		cout << "Press enter to go back to main menu..";
		getline(cin, back);
		cin.ignore();
		system("cls");

		break;
	case 1:
		system("cls");
		cout << "Insert Adventure Please" << endl << endl;
		cout<<"Press enter....";
		getline(cin,back);
		cin.ignore();
		system("cls");
		break;


	default:
		break;
	}

}


// For going back 
// cout<<"Press enter....";
//getline(cin,back);
//cin.ignore();