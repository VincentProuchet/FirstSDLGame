#include "runtimeexception.h"

RuntimeException::RuntimeException(): exception()
{

}
RuntimeException::RuntimeException( const std::string & m )
: exception()
{
    this->Setmessage(m);
}

RuntimeException::~RuntimeException()
{

}
