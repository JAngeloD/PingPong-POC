#ifndef ENGINE_H
#define ENGINE_H

#include <SFML/Graphics.hpp>
#include <stack>
#include <iostream>
#include <stdlib.h>

#include "object.h"
#include "string.h"
#include "state.h"

#include "gamestate.h"
#include "menustate.h"

class engine
{
    public:
        engine();
        ~engine();

        void render();
        void draw();

        sf::RenderWindow* window;
        state* currentState;

        gamestate state1;
        menustate state2;

    protected:

    private:
};

#endif // ENGINE_H
