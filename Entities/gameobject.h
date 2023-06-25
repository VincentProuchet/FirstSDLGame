#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H

/**

 Game object sont des entitées de base pour les
 objets gérés par le programme
 ils contiennent les coordonnées de base de l'objet
 dans l'espace tridimenssionnel
 ainsi qu'une orientation par axe.



*/
class GameObject
{
    public:
        /** Default constructor */
        GameObject();
        /** Default destructor */
        virtual ~GameObject();

        /** Access pos_X
         * \return The current value of pos_X
         */
        int Getpos_X() { return pos_X; }
        /** Set pos_X
         * \param val New value to set
         */
        void Setpos_X(int val) { pos_X = val; }
        /** Access pos_Y
         * \return The current value of pos_Y
         */
        int Getpos_Y() { return pos_Y; }
        /** Set pos_Y
         * \param val New value to set
         */
        void Setpos_Y(int val) { pos_Y = val; }
        /** Access pos_Z
         * \return The current value of pos_Z
         */
        int Getpos_Z() { return pos_Z; }
        /** Set pos_Z
         * \param val New value to set
         */
        void Setpos_Z(int val) { pos_Z = val; }
        /** Access rot_X
         * \return The current value of rot_X
         */
        int Getrot_X() { return rot_X; }
        /** Set rot_X
         * \param val New value to set
         */
        void Setrot_X(int val) { rot_X = val; }
        /** Access rot_Y
         * \return The current value of rot_Y
         */
        int Getrot_Y() { return rot_Y; }
        /** Set rot_Y
         * \param val New value to set
         */
        void Setrot_Y(int val) { rot_Y = val; }
        /** Access rot_Z
         * \return The current value of rot_Z
         */
        int Getrot_Z() { return rot_Z; }
        /** Set rot_Z
         * \param val New value to set
         */
        void Setrot_Z(int val) { rot_Z = val; }

        bool GetVisible(){return this->visible;}

    protected:
        int pos_X = 0; //!< Member variable "pos_X"
        int pos_Y = 0; //!< Member variable "pos_Y"
        int pos_Z = 0; //!< Member variable "pos_Z"
        int rot_X = 0; //!< Member variable "rot_X"
        int rot_Y = 0; //!< Member variable "rot_Y"
        int rot_Z = 0; //!< Member variable "rot_Z"
        bool visible = true;


    private:
};

#endif // GAMEOBJECT_H
