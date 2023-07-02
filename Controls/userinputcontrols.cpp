#include "userinputcontrols.h"

UserInputControls::UserInputControls()
{

}

UserInputControls::UserInputControls(ControlableObject* p)
{
	this->player = p;

}

bool UserInputControls::ProcessInputs()
{

	while(SDL_PollEvent(&this->events) ) {
		// quit can be an SDL event
		switch (this->events.quit.type) {
		case SDL_QUIT:
			this->quit = true;
			std::cout   << "quitting program"
			            << std::endl;
			break;

		default:
			break;
		}
		/**
		    utiliser des if est tentant
		    car l'on pourrait croire que des appuis simultanées
		    seraient non compris par l'utilisation d'un switch
		    c'est là que le while pollEvent entre en scéne
		*/
		// seulement si le pointeur de l'objet controlé n'est pas null
		if (this->player != nullptr) {
			// this is how you get keys in switch
			// and its sooo 90's style
			switch (this->events.key.keysym.sym) {
			case SDLK_SPACE :
				this->player->shoot();
				break;
			case SDLK_z:
				this->player->moveUp();
				break;
			case SDLK_q:
				this->player->moveLeft();
				break;
			case SDLK_s:
				this->player->moveDown();
				break;
			case SDLK_d:
				this->player->moveRight();
				break;
			default:
				break;
			}
		}
	}
	return this->quit;
}


UserInputControls::~UserInputControls()
{
	this->player= nullptr;

}
