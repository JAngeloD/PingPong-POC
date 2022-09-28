#include "object.h"

#include <windows.h>
#include <string>
#include <iostream>

sf::Texture *texture = nullptr;
sf::Sprite *sprite = nullptr;

object::object() {}
object::~object() {}

void object::init() {

    texture = new sf::Texture();
    sprite = new sf::Sprite();

    if(!texture->loadFromFile("bin/Debug/Remilia.png")) {
        std::cout << "Test" << std::endl;
    }

    sprite->setTexture(*texture);
}

sf::Texture* object::getTexture() {return texture;}
sf::Sprite* object::getSprite() {return sprite;}

/**
 *  Moves relative to it's position based on the parameters
 */
void object::move(float x, float y) {
    sf::Vector2f pos(x, y);
    sprite->move(pos);
}

/**
 *  Moves instantly to the position provided by the parameters
 */
void object::setPosition(float x, float y) {
    sf::Vector2f pos(x, y);
    sprite->setPosition(pos);
}

