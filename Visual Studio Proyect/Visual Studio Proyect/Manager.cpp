#include "Manager.h"

Manager::Manager(int nJugadores) {
	numJugadores = nJugadores;

    window = new sf::RenderWindow(sf::VideoMode(1499, 1061), "My window");
    window->setTitle("Battle of Spells");
    window->setVerticalSyncEnabled (true);
    window->setKeyRepeatEnabled(false);

    Jugadores.emplace_back("Player 1/player-move.png", "Player 1/player-wobble.png", *window, 1);
    Jugadores.emplace_back("Player 2/player2-move.png", "Player 2/player2-wobble.png", *window, 2);
    //Jugadores.emplace_back("Player 3/player3-move.png", "Player 3/player3-wobble.png", window, 3);

    //Initialize Move
    for (int i = 0; i < 4; i++)
        MoveP1.emplace_back(false);

    for (int i = 0; i < 4; i++)
        MoveP2.emplace_back(false);

    for (int i = 0; i < 4; i++)
        MoveP3.emplace_back(false);

}

void Manager::RunGame() {

    while (window->isOpen()) {

		Spell_Collision_P1 = false;
		Spell_Collision_P2 = false;
		Spell_Collision_P3 = false;

        sf::Event event;
        while (window->pollEvent(event)) {

            if (event.type == sf::Event::Closed)
                window->close();

            if (event.type == sf::Event::KeyPressed) {
                switch (event.key.code) {
                    case sf::Keyboard::Up : MoveP1[0] = true; break;
                    case sf::Keyboard::Down : MoveP1[1] = true; break;
                    case sf::Keyboard::Left : MoveP1[2] = true; break;
                    case sf::Keyboard::Right : MoveP1[3] = true; break;
                    default : break;
                }
                switch (event.key.code) {
                    case sf::Keyboard::W : MoveP2[0] = true; break;
                    case sf::Keyboard::S : MoveP2[1] = true; break;
                    case sf::Keyboard::A : MoveP2[2] = true; break;
                    case sf::Keyboard::D : MoveP2[3] = true; break;
                    default : break;
                }
                switch (event.key.code) {
                    case sf::Keyboard::I : MoveP3[0] = true; break;
                    case sf::Keyboard::K : MoveP3[1] = true; break;
                    case sf::Keyboard::J : MoveP3[2] = true; break;
                    case sf::Keyboard::L : MoveP3[3] = true; break;
                    default : break;
                }
            }
			
			if (event.type == sf::Event::KeyReleased) {
				switch (event.key.code) {
					case sf::Keyboard::Up: MoveP1[0] = false; break;
					case sf::Keyboard::Down: MoveP1[1] = false; break;
					case sf::Keyboard::Left: MoveP1[2] = false; break;
					case sf::Keyboard::Right: MoveP1[3] = false; break;
					default: break;
				}
				switch (event.key.code) {
					case sf::Keyboard::W: MoveP2[0] = false; break;
					case sf::Keyboard::S: MoveP2[1] = false; break;
					case sf::Keyboard::A: MoveP2[2] = false; break;
					case sf::Keyboard::D: MoveP2[3] = false; break;
				default: break;
				}
				switch (event.key.code) {
					case sf::Keyboard::I: MoveP3[0] = false; break;
					case sf::Keyboard::K: MoveP3[1] = false; break;
					case sf::Keyboard::J: MoveP3[2] = false; break;
					case sf::Keyboard::L: MoveP3[3] = false; break;
					default: break;
				}
			}
			
        }

        window->clear();
        background.background_draw(*window);

		Jugadores[0].Move(MoveP1, *window, clock_P1, Spell_Collision_P1, background);
		Jugadores[1].Move(MoveP2, *window, clock_P2, Spell_Collision_P2, background);
		//Jugadores[2].Move(MoveP3, *window, clock_P3, Spell_Collision_P3, background);

		window->display();

    }
}

void Manager::CheckCollitionHechizo(std::vector<Jugador> J, Background B, std::vector<bool> MoveP1, std::vector<bool> MoveP2, std::vector<bool> MoveP3) {

}
