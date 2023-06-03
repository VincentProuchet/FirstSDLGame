#include "initerror.h"

InitError::InitError():
    exception(),
    msg( SDL_GetError() )
{
    //ctor
}
InitError::InitError( const std::string & m ) :
    exception(),
    msg( m )
{
}

InitError::~InitError()throw()
{
    //dtor
}
const char * InitError::what() const throw()
{
    return msg.c_str();
}
