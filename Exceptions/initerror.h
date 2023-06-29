// declaration
#ifndef INITERROR_H
#define INITERROR_H

#include <exception>
#include <string>
#include <SDL2/SDL.h>

/**
 Erreur pour le processus d'initialisation de l'application
 ces erreurs sont censées être affichable par l'OS
 et/ou mis dans un log

*/
class InitError : public std::exception
{
    public:
        /** Default constructor */
        InitError();
        /** message constructor */
        InitError( const std::string & );
        /** Default destructor */
        virtual ~InitError() throw();
        /** get message */
        virtual const char * what() const throw();

    protected:

    private:
        /** message */
        std::string msg;
};

#endif // INITERROR_H
