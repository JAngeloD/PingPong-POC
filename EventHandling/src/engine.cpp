#include "engine.h"

#include <SFML/Graphics.hpp>
#include <stdlib.h>

#include "object.h"
#include "gui.h"

engine::engine(){}
engine::~engine() {}

sf::RenderWindow* window = nullptr;
object *test = nullptr;

gui textboj;

float x = 0.0f;
float y = 0.0f;

bool left = false;
bool right = false;
bool up = false;
bool down = false;

/**
 *  Initializes that
 */
bool engine::init() {
    window = new sf::RenderWindow(sf::VideoMode(800, 600), "SFML works!");
    window->setVerticalSyncEnabled(true);
    window->setKeyRepeatEnabled(false);
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

        //Section where event is handled
        while (window->pollEvent(event))
        {
            if (event.type == sf::Event::Closed) {window ->close();}
            if (event.type == sf::Event::KeyPressed) {
                if (event.key.code == sf::Keyboard::W) {up = true;}
                else if (event.key.code == sf::Keyboard::A) {left = true;}
                else if (event.key.code == sf::Keyboard::S) {down = true;}
                else if (event.key.code == sf::Keyboard::D) {right = true;}
            }
            if (event.type == sf::Event::KeyReleased) {
                if (event.key.code == sf::Keyboard::W) {up = false;}
                else if (event.key.code == sf::Keyboard::A) {left = false;}
                else if (event.key.code == sf::Keyboard::S) {down = false;}
                else if (event.key.code == sf::Keyboard::D) {right = false;}
            }
            if (event.type == sf::Event::MouseButtonPressed) {
                if(textboj.isInArea(event.mouseButton.x, event.mouseButton.y)) {
                    textboj.primed();
                }
            }
        }

        window->clear();

        if(left) {test->move(-2.0f, 0.0f);}
        if(right) {test->move(2.0f, 0.0f);}
        if(up) {test->move(0.0f, -2.0f);}
        if(down) {test->move(0.0f, 2.0f);}
        draw();
        window->display();
    }
}


bool engine::loadCoreData() {

    test = new object();
    test->init();

    textboj.init();
    return 0;
}

/**
 *  Draws in order of the sequence. Very important to consider things that should go in front
 *  example: backgrounds shound be the first thing to be called
 */
void engine::draw() {
    window->draw(*test->getSprite());
    window->draw(textboj.getText());
}

void engine::close() {

}
