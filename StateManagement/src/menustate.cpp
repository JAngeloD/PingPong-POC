#include "menustate.h"

menustate::menustate() {
    test.init("bin/Debug/Devious.jpg");
}

menustate::~menustate() {}

void menustate::render(sf::RenderWindow* window) {
    std::cout << "nah" << std::endl;
    window->draw(*test.getSprite());
}

void menustate::handleEvents(sf::RenderWindow* window) {

}
