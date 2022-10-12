#ifndef GAMESTATE_H
#define GAMESTATE_H

#include "state.h"
#include "object.h"

class gamestate : public state
{
    public:
        gamestate();
        virtual ~gamestate();

        void render(sf::RenderWindow* window) override;
        void handleEvents(sf::RenderWindow* window) override;

        object test;
};

#endif // GAMESTATE_H
