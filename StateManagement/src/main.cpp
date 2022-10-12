#include "engine.h"

engine *Engine = nullptr;

const int FPS = 60;
const int FrameDelay = 1000/FPS;


int main() {

    Engine = new engine();
    Engine->render();
}
