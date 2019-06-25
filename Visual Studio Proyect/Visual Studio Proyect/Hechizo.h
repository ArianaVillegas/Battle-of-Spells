#ifndef PROYECTO_POO_II_HECHIZO_H
#define PROYECTO_POO_II_HECHIZO_H
#include <SFML/Graphics.hpp>

class Hechizo {

	int t_para_reuso;
	bool ataque;
	int explosion;
	int poder;
	int paralizis;
	int bloqueo;

	sf::Texture spellTexture;
	sf::Sprite sprite;
	
public:

	Hechizo(std::string FileToRead);

	void Hechizo_draw(sf::RenderWindow& window);
};


#endif //PROYECTO_POO_II_HECHIZO_H
