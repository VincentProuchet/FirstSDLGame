#ifndef MOBILEGAMEOBJECT_H
#define MOBILEGAMEOBJECT_H
#include "vector"
#include "gameobject.h"
using namespace std;
/**
    classe de base pour les objets pouvant se déplacer dans l'espace

*/
class MobileGameObject : virtual GameObject
{
    public:
        /** Default constructor */
        MobileGameObject();
        /** Default destructor */
        virtual ~MobileGameObject();

        /** Access acceleration
         * \return The current value of acceleration
         */
        int Getacceleration() { return acceleration; }
        /** Set acceleration
         * \param val New value to set
         */
        void Setacceleration(int &val) { acceleration = val; }
        /** Access maxSpeed
         * \return The current value of maxSpeed
         */
        unsigned int GetmaxSpeed() { return maxSpeed; }
        /** Set maxSpeed
         * \param val New value to set
         */
        void SetmaxSpeed(unsigned int val) { maxSpeed = val; }

    protected:
        /**
            vitesse maximale de l'objet
            Ouais je sais ça n'as pas de sens dans la réalité
            mais là c'est juste un petit jeu
        */
        unsigned int maxSpeed = 0;
        /**
            accélération de l'objet
            Oui il faudrais utiliser un vecteur
            ou au moins trois point de l'espace pour en faire le calcul
         */
        int acceleration = 0 ;

    private:
};

#endif // MOBILEGAMEOBJECT_H
