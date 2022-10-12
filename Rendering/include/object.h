#ifndef OBJECT_H
#define OBJECT_H

#include <SFML/Graphics.hpp>
#include <stdlib.h>

#include <iostream>
#include "string.h"

#include "object.h"

class object
{
    public:
        object();
        ~object();

        void init();

        void setTexture();

        sf::Texture* getTexture();
        sf::Sprite* getSprite();

        sf::Texture texture;
        sf::Sprite sprite;

        //Important functions
        void move(float x, float y);
        void setPosition(float x, float y);

    protected:

    private:
};

#endif // OBJECT_H
