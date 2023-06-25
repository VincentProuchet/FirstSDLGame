#ifndef CONTROLABLEOBJECT_H
#define CONTROLABLEOBJECT_H
#include <map>
#include <SDL2/SDL.h>

typedef void (*FnPtr)();

/**
    classe mére des objets pouvant être controlés
    pour le moment ces objets utilisent une surcharge
    de méthodes pour garantir la compatibilité avec la classe userimputcontrols

    @TODO
    refactoriser pour permettre l'utilisation d'une map
    associant les key de SDL aux méthodes de l'objet

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

        std::map <SDL_Scancode,FnPtr> actions;
};

#endif // CONTROLABLEOBJECT_H
