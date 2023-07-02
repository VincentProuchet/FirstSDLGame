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
		sdl.draw();
		SpaceShip player = SpaceShip();
		player.loadTexture(sdl.getRenderer(),"./textures/vaisseau.png");
		UserInputControls controls = UserInputControls(&player);
		sdl.render2D(player);
		sdl.present();

		// main loop
		while(!quit) {
			quit = controls.ProcessInputs();
			sdl.draw();
			sdl.render2D(player);
			sdl.present();

		}
		SDL_Delay(sdl.getDelay());
		controls.~UserInputControls();
		player.~SpaceShip();
		sdl.~EngineSDL();

		return 0;
	}
	catch ( const RuntimeException & err ) {
		std::cerr << " runtime exception "
		          << err.Getmessage()
		          << std::endl;
		SDL_Delay(5000);


	}

	return 1;
}
