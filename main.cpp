#include <iostream>
#include <SDL2/SDL.h>
#include <initerror.h>
#include <sdl.h>



int main( int argc, char * argv[] )
{
    bool quit = false;
    try {
        SDL sdl( SDL_INIT_VIDEO | SDL_INIT_TIMER );
        sdl.draw();
        SDL_Event e;

        // main loop
        while(!quit) {
            while(SDL_PollEvent(&e) ) {
                    // quit can be an SDL event
                switch (e.quit.type) {
                case SDL_QUIT:
                    quit = true;
                    std::cout   << "quitting program"
                                << std::endl;
                    break;

                default:
                    break;
                }
                // this is ghow you get keys in switch
                switch (e.key.keysym.sym) {
                case SDLK_SPACE:
                    sdl.draw();
                    break;
                default:
                    break;
                }

            }

        }
        return 0;
    }
    catch ( const InitError & err ) {
        std::cerr << "Error while initializing SDL:  "
                  << err.what()
                  << std::endl;
    }

    return 1;
}
