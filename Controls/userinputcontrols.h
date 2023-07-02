#ifndef USERINPUTCONTROLS_H
#define USERINPUTCONTROLS_H
#include <iostream>
#include "SDL2/SDL.h"
#include "controlableobject.h"
#include "../enginesdl.h"
/**

        Classe de de gestion des entrées utilisateur

        en l'état elle se repose sur la compatibilité des objets via la
        classe de base ControlableObject qui sert d'interface.
*/
class UserInputControls {
public:
	/** Default constructor */
	UserInputControls();
	UserInputControls(const UserInputControls&);
	operator=(const UserInputControls&);

	UserInputControls(ControlableObject* controlable_Object);

	/** Default destructor */
	virtual ~UserInputControls();
	/**
	        effectue toutes les comparaisont neccessaire pour
	        que l'utilisateur controle ses avatar.
	*/
	bool ProcessInputs();
	bool getQuit()
	{
		return this->quit;
	};

protected:

private:
	/**
	    pointeur de l'instance de l'objet controlé

	*/
	ControlableObject* player = nullptr;
	/**
	    pointeur de l'instance vers l'obejt SDL tenant du lien à
	    la librairie SDL
	*/
	SDL_Event events = SDL_Event() ;

	bool quit = false;

};

#endif // USERINPUTCONTROLS_H
