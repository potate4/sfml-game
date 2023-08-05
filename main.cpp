#include "stdx.h"
#include "game.h"

int main(void) {
    // removed spaces <3
	Menu* menu = new Menu();
	menu->run_menu();
	
	game Game;
	while (Game.running() && menu->winrun) {

		Game.update();
		Game.render();
	}
	delete menu;
	menu = nullptr;

	return 0;
}




