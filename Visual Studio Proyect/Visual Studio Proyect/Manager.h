#ifndef PROYECTO_POO_II_MANAGER_H
#define PROYECTO_POO_II_MANAGER_H
#include <iostream>
#include <SFML/Graphics.hpp>
#include <math.h>
#include "Jugador.h"
#include "Background.h"
#include "Collision.h"
#include "Hechizo.h"

class Manager {
	int numJugadores;

    sf::Clock clock_P1;
    sf::Clock clock_P2;
    sf::Clock clock_P3;
    sf::RenderWindow* window;

    std::vector <bool> MoveP1;
    std::vector <bool> MoveP2;  //--Order is Up, Down, Left, Right
    std::vector <bool> MoveP3;

    std::vector <Jugador> Jugadores;
    std::vector <Hechizo> Hechizos;

    Background background;
	
	bool Background_Collision_P1 = true;
	bool Background_Collision_P2 = true;
	bool Background_Collision_P3 = true;
	bool Background_Collision_P4 = true;

	bool Spell_Collision_P1 = false;
	bool Spell_Collision_P2 = false;
	bool Spell_Collision_P3 = false;

public:

    Manager(int nJugadores);
    void RunGame();
    void CheckCollitionHechizo(std::vector<Jugador> J, Background B, std::vector<bool> MoveP1, std::vector<bool> MoveP2, std::vector<bool> MoveP3);

};


#endif //PROYECTO_POO_II_MANAGER_H
