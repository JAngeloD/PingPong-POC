#ifndef STATE_H
#define STATE_H

#include <SFML/Graphics.hpp>

class state
{
    public:
        virtual ~state();

        virtual void render(sf::RenderWindow* window);
        virtual void handleEvents(sf::RenderWindow* window);
};

#endif // STATE_H
