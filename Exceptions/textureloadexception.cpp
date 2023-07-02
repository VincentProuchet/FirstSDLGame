#include "textureloadexception.h"

TextureLoadException::TextureLoadException():
    RuntimeException()
{
}
TextureLoadException::TextureLoadException( const std::string & m ) :
	RuntimeException(m)
{
}
TextureLoadException::~TextureLoadException()throw()
{

}
