#include "initerror.h"
#include <SDL2/SDL.h>

InitError::InitError():
	RuntimeException( SDL_GetError() )
{}
InitError::InitError( const std::string & m ) :
	RuntimeException(m)
{}

InitError::~InitError()throw()
{}

