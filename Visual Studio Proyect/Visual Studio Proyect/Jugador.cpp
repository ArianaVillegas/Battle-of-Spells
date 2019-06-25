#include "Jugador.h"


void CDVersion2(sf::Sprite Object1, sf::Sprite Object2, bool& Collision, int i, int& BC) {
	if (Collision::PixelPerfectTest(Object1, Object2)) { Collision = true; BC = i; }
}

void Jugador::CCBackground(Jugador J, Background B, bool& BColition, int &BC) {
	
	std::vector<std::thread> threads;
	
	for (int i = 0; i < 6; i++) {
		threads.emplace_back(CDVersion2, J.get_sprite(), B.get_boxes_by_id(i), std::ref(BColition), i, std::ref(BC));
	}

	for (int i = 0; i < threads.size(); i++) {
		threads[i].join();
	}
	
}

void Jugador::Move(std::vector <bool>& Move, sf::RenderWindow& window, sf::Clock& clock, bool& Collition, Background b) {

	//--Animation
	if ((clock.getElapsedTime().asSeconds() > 0.1f) && (Move[0] || Move[1] || Move[2] || Move[3])) {
		if (is_Idle) { sprite.setTexture(textureMoving); is_Idle = false; }
		if (rectSprite.left == 448) {
			rectSprite.left = 0;
		}
		else {
			rectSprite.left += 64;
		}
		clock.restart();
	}
	else if (clock.getElapsedTime().asSeconds() > 0.1f) {
		if (!is_Idle) { sprite.setTexture(textureIdle); is_Idle = true; }
		if (rectSprite.left == 448) {
			rectSprite.left = 0;
		}
		else {
			rectSprite.left += 64;
		}
		clock.restart();
	}
	sprite.setTextureRect(rectSprite);

	//--Moving
	CCBackground(*this, b, BColition, Block_Collision);

	if (BColition) {
		BColition = false;

		int BlockX;
		int BlockY;
		sf::Vector2f PlayerPosition = sprite.getPosition();
		switch (Block_Collision) {
			case 0: BlockX = 400; BlockY = 615; break;
			case 1: BlockX = 350; BlockY = 740; break;
			case 2: BlockX = 750; BlockY = 420; break;
			case 3: BlockX = 870; BlockY = 680; break;
			case 4: BlockX = 1260; BlockY = 380; break;
			case 5: BlockX = 1180; BlockY = 475; break;
		};


		if (BlockX >= PlayerPosition.x) {
			x -= 2*speed;
		}
		else if (BlockX <= PlayerPosition.x) {
			x += 2*speed;
		}
		else if (BlockY >= PlayerPosition.y) {
			y -= 2*speed;
		}
		else if (BlockY <= PlayerPosition.y) {
			y += 2*speed;
		}

	}
	else {
		if (Move[2]) { x -= speed; sprite.setRotation(270.0f); } //--Left
		if (Move[3]) { x += speed; sprite.setRotation(90.0f); } //--Right
		if (Move[0]) { y -= speed; sprite.setRotation(360.0f); } //--Up
		if (Move[1]) { y += speed; sprite.setRotation(180.0f); } //--Down
		
	}
	
	if (Move[1] && Move[2]) sprite.setRotation(225.0f); //--Down--Left
	if (Move[1] && Move[3]) sprite.setRotation(135.0f); //--Down--Right
	if (Move[0] && Move[2]) sprite.setRotation(315.0f); //--Up--Left
	if (Move[0] && Move[3]) sprite.setRotation(45.0f); //--Up--Right
	
	if (x < 0) x = 0;
	if (x > (int)window.getSize().x)  x = window.getSize().x;
	if (y < 120) y = 120;
	if (y > 980) y = 980;

	sprite.setPosition(x, y);
	window.draw(sprite);
	sf::sleep(sf::milliseconds(1));
}