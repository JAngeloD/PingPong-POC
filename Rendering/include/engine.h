#ifndef ENGINE_H
#define ENGINE_H


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

        //bool running() {return isRunning;}

    protected:

    private:
};

#endif // ENGINE_H
