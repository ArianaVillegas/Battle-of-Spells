#ifndef PROYECTO_POO_II_BACKGROUND_H
#define PROYECTO_POO_II_BACKGROUND_H
#include <iostream>
#include <SFML/Graphics.hpp>
#include <math.h>
#include "Jugador.h"
#include "Collision.h"

class Background {

    sf::Texture background_texture;
    sf::Texture MapCollitions;
    sf::Sprite background_sprite;

    sf::Sprite green_left;
    sf::Sprite red_left;
    sf::Sprite green_middle;
    sf::Sprite red_middle;
    sf::Sprite blue_right_up;
    sf::Sprite blue_right_down;

	std::vector <sf::Sprite> Boxes;

public:

    Background() {
        //Setting Background
        background_texture.loadFromFile("Background.png");
        sf::Vector2u size = background_texture.getSize();
        background_sprite.setTexture(background_texture);

        //Setting Texture for Boxes
		Collision::CreateTextureAndBitmask(MapCollitions, "Rectangles.png");

        //Setting Coalition Boxes
        green_middle.setTexture(MapCollitions);
        green_middle.setTextureRect(sf::IntRect(0, 0, 445, 120));
		green_middle.setOrigin(sf::Vector2f(445 / 2, 120 / 2));
        green_middle.setPosition(750.f, 433.f);
        green_middle.setRotation(-63.f);
        green_middle.setColor(sf::Color::Black);

        red_left.setTexture(MapCollitions);
        red_left.setTextureRect(sf::IntRect(0, 0, 445, 120));
        red_left.setPosition(520.f, 820.f);
        red_left.setRotation(-134.f);
        red_left.setColor(sf::Color::Black);

        green_left.setTexture(MapCollitions);
        green_left.setTextureRect(sf::IntRect(0, 0, 445, 120));
        green_left.setPosition(465.f, 942.f);
        green_left.setRotation(-134.5f);
        green_left.setColor(sf::Color::Black);

        red_middle.setTexture(MapCollitions);
        red_middle.setTextureRect(sf::IntRect(0, 0, 445, 120));
        red_middle.setPosition(733.f, 870.f);
        red_middle.setRotation(-68.f);
        red_middle.setColor(sf::Color::Black);

        blue_right_up.setTexture(MapCollitions);
        blue_right_up.setTextureRect(sf::IntRect(0, 0, 445, 120));
        blue_right_up.setPosition(1366.f, 595.f);
        blue_right_up.setRotation(-130.f);
        blue_right_up.setColor(sf::Color::Black);

        blue_right_down.setTexture(MapCollitions);
        blue_right_down.setTextureRect(sf::IntRect(0, 0, 445, 120));
        blue_right_down.setPosition(1287.f, 696.f);
        blue_right_down.setRotation(-130.f);
        blue_right_down.setColor(sf::Color::Black);

		Boxes.push_back(green_left); Boxes.push_back(red_left); Boxes.push_back(green_middle); Boxes.push_back(red_middle); Boxes.push_back(blue_right_up); Boxes.push_back(blue_right_down);

    }
    void background_draw(sf::RenderWindow &window) {
        window.draw(background_sprite);
        window.draw(green_middle);
        window.draw(red_left);
        window.draw(green_left);
        window.draw(red_middle);
        window.draw(blue_right_up);
        window.draw(blue_right_down);
    }
	
	sf::Sprite get_boxes_by_id(int i) {
		switch (i) {
		case 0: return green_left;
		case 1: return red_left;
		case 2: return green_middle;
		case 3: return red_middle;
		case 4: return blue_right_up;
		case 5: return blue_right_down;
		}
	}

	std::vector <sf::Sprite> get_boxes() { return Boxes; }

};

#endif //PROYECTO_POO_II_BACKGROUND_H
