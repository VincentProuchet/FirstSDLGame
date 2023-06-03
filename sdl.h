// declaration
#ifndef SDL_H
#define SDL_H
#include <SDL2/SDL.h>
#include <initerror.h>

class SDL
{
    public:
        /** Default constructor */
        SDL( Uint32 flags = 0 );
        /** Default destructor */
        virtual ~SDL();
        void draw();

    protected:

    private:
        /** width for rendering windows */
        int window_width = 800;
        /** height for rendering windows */
        int window_height = 600;
        /** delay for rendering close */
        int pauseTimer = 1500;
        /** SDL pointers */
        SDL_Window * m_window; //!< Member variable "m_window"
        SDL_Renderer * m_renderer;//!< Member variable "m_renderer"
};

#endif // SDL_H
