#include "engine.h"
#include <SFML/Graphics.hpp>

#include "object.h"

engine::engine(){}
engine::~engine() {}

sf::RenderWindow* window = nullptr;
object *test = nullptr;


/**
 *  Initializes that
 */
bool engine::init() {
    window = new sf::RenderWindow(sf::VideoMode(800, 600), "SFML works!");
    loadCoreData();
    return true;
}

/**
 *  CLEAR -> DRAW -> DISPLAY
 *
 *  CLEAR: Mandato1ry. Otherwise previous frames will be present
 *  DRAW: Meat of The cycle. Desired shapes will be primed and will be displayed when the function for it is called
 *  DISPLAY: Takes what is drawn and displays it to the window.
 */
void engine::render() {

    while (window->isOpen())
    {
        sf::Event event;
        while (window->pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window->close();
        }

        window->clear();
        draw();
        test->move();
        window->display();
    }
}

bool engine::loadCoreData() {

    test = new object();
    test->init();

    return 0;
}

/**
 *  Draws in order of the sequence. Very important to consider things that should go in front
 *  example: backgrounds shound be the first thing to be called
 */
void engine::draw() {
    window->draw(*test->getSprite());
}

void engine::close() {

}
