#ifndef GUI_H
#define GUI_H

#include <SFML/Graphics.hpp>
#include <windows.h>
#include <string>
#include <iostream>

class gui
{
    public:
        gui();
        ~gui();

        void init();

        sf::Text getText();
        void primed();
        bool isInArea(int x, int y);

    protected:

    private:
};

#endif // GUI_H
