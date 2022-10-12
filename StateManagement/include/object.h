#ifndef OBJECT_H
#define OBJECT_H

#include <SFML/Graphics.hpp>

#include <iostream>
#include <string>

class object
{
    public:
        object();
        ~object();

        void init(std::string path);
        void setTexture();

        sf::Texture texture;
        sf::Sprite sprite;

        sf::Texture* getTexture();
        sf::Sprite* getSprite();

        //Important functions
        void move(float x, float y);
        void setPosition(float x, float y);

    protected:

    private:
};

#endif // OBJECT_H
