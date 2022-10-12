#ifndef MENUSTATE_H
#define MENUSTATE_H

#include "state.h"
#include "object.h"

class menustate : public state
{
    public:
        menustate();
        virtual ~menustate();

        void render(sf::RenderWindow* window) override;
        void handleEvents(sf::RenderWindow* window) override;

        object test;
};

#endif // MENUSTATE_H
