#include <iostream>
#include <SFML/Graphics.hpp>
#include "Manager.h"

///Sprite Page --- https://opengameart.org/content/warlocks-gauntlet

int main() {

	/*
    int nP;
    std::cout << "Select Amout of Players: ";
    std::cin >> nP;
	*/

    Manager Game(0);
    Game.RunGame();

    return 0;
}