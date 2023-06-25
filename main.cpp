#include <iostream>
#include <SDL2/SDL.h>
#include <initerror.h>
#include <enginesdl.h>
#include <userinputcontrols.h>
#include <spaceship.h>




int main( int argc, char * argv[] )
{

    bool quit = false;
    try {
        EngineSDL sdl( SDL_INIT_VIDEO | SDL_INIT_TIMER );
        sdl.drawColorBar();
        ControlableObject* player = new SpaceShip();
        UserInputControls controls = UserInputControls(player);

        // main loop
        while(!quit) {
            quit = controls.ProcessInputs();
        }
        controls.~UserInputControls();
        delete player;
        sdl.~EngineSDL();

        return 0;
    }
    catch ( const InitError & err ) {
        std::cerr << "Error while initializing SDL:  "
                  << err.what()
                  << std::endl;
    }

    return 1;
}
