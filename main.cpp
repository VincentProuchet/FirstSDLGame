#include <iostream>
#include <SDL2/SDL.h>
#include <initerror.h>
#include <sdl.h>



int main( int argc, char * argv[] )
{
    try
    {
        SDL sdl( SDL_INIT_VIDEO | SDL_INIT_TIMER );
        sdl.draw();
        SDL_Event e;
        bool quit = false;
        while(!quit){
            while(SDL_PollEvent(&e) ){
                if(e.type== SDL_QUIT){
                    quit = true;
                }
            }
        }
        return 0;
    }
    catch ( const InitError & err )
    {
        std::cerr << "Error while initializing SDL:  "
                  << err.what()
                  << std::endl;
    }

    return 1;
}
