#ifndef ENGINE_H
#define ENGINE_H

#include <SFML/Graphics.hpp>
#include "object.h"
#include <iostream>
#include "string.h"

class engine
{
    public:
        engine();
        ~engine();

        bool init();
        bool loadCoreData();

        void render();
        void draw();
        void close(); //Clears subsystems, textures and windows

        bool isInValidAreaX(object* obj);
        bool isInValidAreaY(object* obj);
        void randomChangeVector(float& x, float& y);


        //bool running() {return isRunning;}

    protected:

    private:
};

#endif // ENGINE_H
