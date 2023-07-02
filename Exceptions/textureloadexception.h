#ifndef TEXTURELOADEXCEPTION_H
#define TEXTURELOADEXCEPTION_H

#include "runtimeexception.h"


class TextureLoadException : public RuntimeException
{
    public:
        /** Default constructor */
        TextureLoadException();
        /** message constructor */
        TextureLoadException( const std::string & );
        /** Default destructor */
        virtual ~TextureLoadException() throw();


    protected:

    private:
};

#endif // TEXTURELOADEXCEPTION_H
