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

    if(!texture->loadFromFile("D:\\Programming\\PingPong - POC\\Rendering\\bin\\Debug\\Remilia2.png")) {
        std::cout << "REEEE" << std::endl;
    }

    sprite->setTexture(*texture);
}

sf::Sprite* object::getSprite() {
    return sprite;
}

void object::move() {
    sf::Vector2f pos(0.01f, 0.01f);
    sprite->move(pos);
}

