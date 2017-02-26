
// test 
#include "Enemy.h"
#include "Game.h"
#include "Functions.h"



int main() {

	srand(time(NULL));

	Game game;

	while (game.getPlay())
	{
		game.MainMenu();
	} //run main menu

	Enemy enemy; //creates object

	enemy.cinit(1, "1234", "forest"); //define object using a function


	return 0;

	
	
}
