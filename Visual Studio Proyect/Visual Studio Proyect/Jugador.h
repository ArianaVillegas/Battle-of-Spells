#ifndef PROYECTO_POO_II_JUGADOR_H
#define PROYECTO_POO_II_JUGADOR_H
#include <iostream>
#include <list>
#include <algorithm>
#include <functional>
#include <SFML/Graphics.hpp>
#include "Hechizo.h"
#include "Background.h"
#include "Collision.h"
#include <thread>
#include <mutex>

class Jugador {

    int id;
    int pts_vida;
    std::list <Hechizo> hechizos;
    Hechizo* h_actual;
    sf::Texture textureMoving;
    sf::Texture textureIdle;
    sf::Sprite sprite;
    int speed = 5;
    int x;
    int y;
    sf::IntRect rectSprite;
    bool is_Idle = false;

	bool BColition = false;
	bool CantMove = false;
	int Block_Collision = 0;

public:

    Jugador(std::string FileLocationMove, std::string FileLocationIdle, sf::RenderWindow &window, int id): id{id} {

		for (int i = 0; i < 4; i++)
			CantMove.push_back(false);

        rectSprite.left = 64; rectSprite.top = 0; rectSprite.width = 64; rectSprite.height = 64;

        if (!Collision::CreateTextureAndBitmask(textureMoving, FileLocationMove)) { std::cout << "Load Failed" << std::endl; }
        textureMoving.setSmooth(true);
        if (!Collision::CreateTextureAndBitmask(textureIdle, FileLocationIdle)) { std::cout << "Load Failed" << std::endl; }
        textureIdle.setSmooth(true);

        sf::Sprite sprite1(textureIdle, rectSprite);
        sprite = sprite1;
        is_Idle = true;

        sprite.setTexture(textureIdle);
        sf::FloatRect spriteSize=sprite.getGlobalBounds();
        sprite.setOrigin(spriteSize.width/2.,spriteSize.height/2.);

        if ( id == 1 ) {x = 144; y = 280; sprite.setRotation(90.f);}
        else if ( id == 2 ) {x = 1365; y = 849; sprite.setRotation(270.f);}
        else {x = 637; y = 856; sprite.setRotation(90.f);}

        window.draw(sprite);

    }

    ~Jugador() {}

	void CCBackground(Jugador J, Background B, bool& BColition, int& BC);

	void Move(std::vector <bool>& Move, sf::RenderWindow& window, sf::Clock& clock, bool& Collition, Background b);

    sf::Sprite get_sprite() { return sprite; }
    //void add_hechizo(Hechizo h) { hechizos.add(h); }
    //void siguiente_hechizo() { hechizos.remove_head(); }
    //void usar_hechizo() {}

};

#endif //PROYECTO_POO_II_JUGADOR_H
