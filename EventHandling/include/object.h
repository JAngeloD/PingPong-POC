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

        sf::Texture* getTexture();
        sf::Sprite* getSprite();

        //Important functions
        void move(float x, float y);
        void setPosition(float x, float y);

    protected:

    private:
};

#endif // OBJECT_H
