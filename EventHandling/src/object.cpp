#include "object.h"

#include <windows.h>
#include <string>
#include <iostream>



//States of the object

object::object() {}
object::~object() {}

void object::init() {

    if(!texture.loadFromFile("bin\\Debug\\Remilia.png")) {
        std::cout << "Could not load texture" << std::endl;
    }

    sprite.setTexture(texture);
}

sf::Texture* object::getTexture() {return &texture;}
sf::Sprite* object::getSprite() {return &sprite;}

void object::move(float x, float y) {
    sf::Vector2f pos(x, y);
    sprite.move(pos);
}

