// declaration
#ifndef COLORS_H
#define COLORS_H


class Colors
{
    public:
        /** Default constructor */
        Colors();
        Colors(unsigned int &r, unsigned int &g , unsigned int &b);
        Colors(unsigned int &r, unsigned int &g , unsigned int &b,unsigned int &a);
        /** Default destructor */
        virtual ~Colors();

        /** Access red
         * \return The current value of red
         */
        unsigned int Getred() { return red; }
        /** Set red
         * \param val New value to set
         */
        void Setred(unsigned int &val) { red = val; }
        /** Access green
         * \return The current value of green
         */
        unsigned int Getgreen() { return green; }
        /** Set green
         * \param val New value to set
         */
        void Setgreen(unsigned int &val) { green = val; }
        /** Access blue
         * \return The current value of blue
         */
        unsigned int Getblue() { return blue; }
        /** Set blue
         * \param val New value to set
         */
        void Setblue(unsigned int &val) { blue = val; }
        /** Access alpha
         * \return The current value of alpha
         */
        unsigned int Getalpha() { return alpha; }
        /** Set alpha
         * \param val New value to set
         */
        void Setalpha(unsigned int &val) { alpha = val; }
        /**
            Set color values
        */
        void SetValues(unsigned int &r, unsigned int &g , unsigned int &b);

    protected:

    private:
        unsigned int red = 0; //!< Member variable "red"
        unsigned int green = 0 ; //!< Member variable "green"
        unsigned int blue = 0; //!< Member variable "blue"
        unsigned int alpha = 255; //!< Member variable "alpha"
};

#endif // COLORS_H