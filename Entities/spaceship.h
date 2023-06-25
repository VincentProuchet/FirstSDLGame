#ifndef SPACESHIP_H
#define SPACESHIP_H

#include <ControlableObject.h>
#include <MobileGameObject.h>
/**
    classe d'avatar pour le joueur
*/
class SpaceShip : virtual public ControlableObject, virtual public MobileGameObject
{
    public:
        /** Default constructor */
        SpaceShip();
        /** Default destructor */
        virtual ~SpaceShip();
        void moveUp();
        void moveDown();
        void moveLeft();
        void moveRight();
        void shoot();

    protected:

    private:

};

#endif // SPACESHIP_H
