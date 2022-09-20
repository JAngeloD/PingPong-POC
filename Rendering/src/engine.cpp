#include "engine.h"

#include <SFML/Graphics.hpp>
#include <stdlib.h>

#include "object.h"

engine::engine(){}
engine::~engine() {}

sf::RenderWindow* window = nullptr;
object *test = nullptr;
float x = 1.2f;
float y = 1.2f;


/**
 *  Initializes that
 */
bool engine::init() {
    window = new sf::RenderWindow(sf::VideoMode(800, 600), "SFML works!");
    window->setVerticalSyncEnabled(true);
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

        if(isInValidAreaX(test) && isInValidAreaY(test)) {
            test->move(x, y);
        }
        else {
            randomChangeVector(x, y);
        }

        window->display();
    }
}

bool engine::isInValidAreaX(object* obj) {

    if(obj->getSprite()->getPosition().x < window->getSize().x - obj->getTexture()->getSize().x &&
       obj->getSprite()->getPosition().x > -1){
        return true;
    }
    return false;
}
bool engine::isInValidAreaY(object* obj) {
    if(obj->getSprite()->getPosition().y < window->getSize().y - obj->getTexture()->getSize().y &&
       obj->getSprite()->getPosition().y > -1) {
        return true;
    }
    return false;
}

void engine::randomChangeVector(float& x, float& y) {
    if(!isInValidAreaX(test)) {
        x *= -1.0f;
    }
    if(!isInValidAreaY(test)) {
        y *= -1.0f;
    }
    test->move(x, y);
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
