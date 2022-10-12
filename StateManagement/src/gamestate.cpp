#include "gamestate.h"

gamestate::gamestate() {
    test.init("bin/Debug/Remilia.png");
}

gamestate::~gamestate() {}

void gamestate::render(sf::RenderWindow* window) {
    std::cout << "yeah" << std::endl;
    window->draw(*test.getSprite());
}

void gamestate::handleEvents(sf::RenderWindow* window) {
}
