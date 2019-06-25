#include "Hechizo.h"
#include "Collision.h"

Hechizo::Hechizo(std::string FileToRead) {

	Collision::CreateTextureAndBitmask(spellTexture, FileToRead);

}

void Hechizo::Hechizo_draw(sf::RenderWindow& window) {
	window.draw(sprite);
}