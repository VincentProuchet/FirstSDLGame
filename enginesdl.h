// declaration
#ifndef ENGINESDL_H
#define ENGINESDL_H
#include <SDL2/sdl.h>
#include <initerror.h>
/**

Classe de rendu
Liée à la l'utilisation de la librairie SDL

*/
class EngineSDL
{
    public:
        /** Default constructor */
        EngineSDL( Uint32 flags = 0 );

        EngineSDL(const EngineSDL&);
        operator=(const EngineSDL&);
        /** Default destructor */
        virtual ~EngineSDL();
        void draw();
        /** draw colored bar on screen */
        void drawColorBar();
        Uint32 getFlags(){return this->flags;}

    protected:

    private:

        EngineSDL* instance = nullptr;

        /** width for rendering windows */
        int window_width = 800;
        /** height for rendering windows */
        int window_height = 600;
        /** delay for rendering close */
        int pauseTimer = 1500;

        // SDL pointers
        /** SLD main window */
        SDL_Window * m_window = nullptr;
        /** SDL rendering image*/
        SDL_Renderer * m_renderer = nullptr;

        Uint32 flags = 0;
};

#endif // SDL_H
