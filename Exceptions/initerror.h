// declaration
#ifndef INITERROR_H
#define INITERROR_H

#include <exception>
#include <string>
#include <SDL2/SDL.h>

/**
 Error for initialisation process
 those error are suposed to be displayed in OS windows
 or/and logged to errors logs

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
        std::string msg; //!< Member variable "msg"
};

#endif // INITERROR_H
