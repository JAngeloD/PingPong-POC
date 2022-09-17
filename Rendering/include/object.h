#ifndef OBJECT_H
#define OBJECT_H

#include <SFML/Graphics.hpp>

#include <iostream>
#include "string.h"

class object
{
    public:
        object();
        ~object();

        void init();

        void setTexture();
        void getTexture();

        sf::Sprite* getSprite();

        void move();

    protected:

    private:
};

#endif // OBJECT_H
