// declaration
#ifndef ENGINESDL_H
#define ENGINESDL_H
#include <vector>
#include <SDL2/sdl.h>
#include <initerror.h>
#include <render2D.h>
/**

Classe de rendu
Liée à la l'utilisation de la librairie SDL

*/
class EngineSDL {
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
	void present();
	Uint32 getFlags()
	{
		return this->flags;
	}
	int getDelay()
	{
		return this->pauseTimer;
	}
	SDL_Renderer * getRenderer()
	{
		return this->m_renderer;
	};

	/**
	   Effectue le rendu de la texture de l'objet
	   (si elle n'est pas nulle)
	   sur la surface de rendu
	   \param Object à ajouter sur la surface de la fenêtre

	*/
	virtual void render2D(Render2D &object);

protected:

private:

	EngineSDL* instance = nullptr;
	/** largeur de la fenêtre */
	int window_width = 800;
	/** hauteur de la fenêtre */
	int window_height = 600;
	/** delay for rendering close */
	int pauseTimer = 1500;
	/**
	    définit le nombre de surfaces de rendu
	    en triple buffering on en utilise trois
	    pour les échanger
	    une en cours de rendu
	    une présentée à l'utilisateur
	    une en attente pour servir de nouvele surface de rendu

	*/
	int renderBufferSize = 3;
	/**
	    compatage des rendus
	    utilisé pour choisir quelle
	    surface de rendue est utilisé
	    pour le prochain rendu (par un Modulo avec le renderBufferSize)

	 */
	int renderCount = 0;

	// SDL pointers
	/** SLD main window */
	SDL_Window * m_window = nullptr;
	/** SDL rendering image*/
	SDL_Renderer * m_renderer = nullptr;
	/** surfaces de rendus pour le buffering */
	//std::vector<SDL_Renderer *>renderers ;

	Uint32 flags = 0;
};

#endif // SDL_H
