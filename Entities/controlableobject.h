#ifndef CONTROLABLEOBJECT_H
#define CONTROLABLEOBJECT_H
#include <functional>
#include <string>
#include <map>
#include <SDL2/SDL.h>

typedef void (*FnPtr)();

/** @todo refactoriser pour permettre l'utilisation des maps actions et Commands

    classe m�re des objets pouvant �tre control�s
    pour le moment ces objets utilisent une surcharge
    de m�thodes pour garantir la compatibilit� avec la classe userimputcontrols

*/
class ControlableObject
{
    public:
        /** Default constructor */
        ControlableObject();
        /** Default destructor */
        virtual ~ControlableObject();

        virtual void moveUp();
        virtual void moveDown();
        virtual void moveLeft();
        virtual void moveRight();
        virtual void shoot();

    protected:


    private:

        /** @todo implementer l'usage des commandes
            map des commandes nomm�es disponibles pour l'objet
            et leur association avec chaque fonction
        */
        std::map <std::string,std::function<void()>> commands;

        /** @todo impl�menter l'usage des actions et leur sauvegarde
            association des commandes disponible avec ScanCodeSDL
            notez que c'est SDL_Scancode qui sert de cl�

            ce niveau d'abstraction sert � pouvoir sauvegarder une configuation
            en mode texte
        */
        std::map <SDL_Scancode,std::string> actions;
};

#endif // CONTROLABLEOBJECT_H
