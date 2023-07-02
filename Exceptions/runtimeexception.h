#ifndef RUNTIMEEXCEPTION_H
#define RUNTIMEEXCEPTION_H

#include <exception>
#include <string>

class RuntimeException : public std::exception
{
    public:
        /** Default constructor */
        RuntimeException();
        RuntimeException( const std::string & message );
        /** Default destructor */
        virtual ~RuntimeException();

        /** Access message
         * \return message
         */
        const char * Getmessage()const throw()
        {
            return this->message.c_str();
        };
        /** Set message
         * \param nouveau message
         */
        void Setmessage(std::string val) { message = val; }

    protected:
        /** message */
        std::string message;
};

#endif // RUNTIMEEXCEPTION_H
