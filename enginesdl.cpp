#include "enginesdl.h"
#include <colors.h>

EngineSDL::EngineSDL( Uint32 f )
{
    this->flags = f;
    if ( SDL_Init( this->flags ) != 0 )
        throw InitError();

    if ( SDL_CreateWindowAndRenderer( this->window_width, this->window_height,
                                     SDL_WINDOW_SHOWN,
                                      &m_window, &m_renderer ) != 0 )
        throw InitError();
}

EngineSDL::~EngineSDL()
{
    SDL_DestroyWindow( this->m_window );
    SDL_DestroyRenderer( this->m_renderer );
    SDL_Quit();
}


void EngineSDL::draw(){

}
void EngineSDL::drawColorBar()
{
    // Clear the window with a black background
    SDL_SetRenderDrawColor( this->m_renderer, 0, 0, 0, 255 );
    SDL_RenderClear( this->m_renderer );

    // Show the window
    SDL_RenderPresent( this->m_renderer );

    int rgb[] = {
                203, 203, 203, // Gray
                254, 254,  31, // Yellow
                  0, 255, 255, // Cyan
                  0, 254,  30, // Green
                255,  16, 253, // Magenta
                253,   3,   2, // Red
                 18,  14, 252, // Blue
                  0,   0,   0,  // Black
                };
    Colors * crgb[] = {
                  new Colors(0,   0,   0),  // Black
                  new Colors(203, 203, 203), // Gray
                  new Colors(254, 254,  31), // Yellow
                  new Colors(0, 255, 255), // Cyan
                  new Colors(0, 254,  30), // Green
                  new Colors(255,  16, 253), // Magenta
                  new Colors(253,   3,   2), // Red
                  new Colors(18,  14, 252), // Blue
                };
    int rgb_size = (sizeof(rgb)/sizeof(*rgb)/3);
    // its divided by 3 because there is 3 components per color
    SDL_Rect colorBar;
    colorBar.x = 0;
    colorBar.y = 0;

    colorBar.w = this->window_width/ rgb_size;
    colorBar.h = this->window_height;

    // Render all color bar then wait for .5 seconds
    // note the second increment in the for signature
    for ( int i = 0; i != sizeof rgb / sizeof *rgb; i += 3, colorBar.x += colorBar.w )
    {
        SDL_SetRenderDrawColor( m_renderer, rgb[i], rgb[i + 1], rgb[i + 2], 255 );
        SDL_RenderFillRect( m_renderer, &colorBar );
        SDL_RenderPresent( m_renderer );
    }
    colorBar.x = 0;
    colorBar.h = this->window_height/2;
    for (int i=0;i != sizeof crgb / sizeof *crgb;i++,colorBar.x += colorBar.w)
    {
        SDL_SetRenderDrawColor( m_renderer, crgb[i]->Getred(), crgb[i]->Getgreen(), crgb[i]->Getblue(), crgb[i]->Getalpha() );
        SDL_RenderFillRect( m_renderer, &colorBar );
        SDL_RenderPresent( m_renderer );
        crgb[i]->~Colors();
    }
}



