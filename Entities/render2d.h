#ifndef RENDER2D_H
#define RENDER2D_H
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <string>

using namespace std;
/**
    classe pour la partie rendu des objets 2D

*/
class Render2D {
public:
	/** Default constructor */
	Render2D();
	/** constructeur de chargement de texture */
	Render2D(SDL_Renderer *,const char * );
	/** Default destructor */
	virtual ~Render2D();
	/**
	    charge la texture a l'emplacement donné
	    dans l'objet
	    \param renderer de la fenêtre d'affichage
	    \param nom du fichier texture à charger avec le chemin complet
	*/
	virtual void loadTexture(
	    SDL_Renderer * windows_renderer
	    ,const char * texturefile);
	virtual SDL_Texture * getTexture()
	{
		return this->texture;
	};
	virtual SDL_Rect * getTextureRect(){return &this->texture_rect;};

protected:
	/** texture pour le rendu */
	SDL_Texture * texture = nullptr;
	SDL_Rect texture_rect;

private:
	/** constructeur de copie private pour empécher la copie */
	Render2D(const Render2D &);
	/** definition d'assignation */
	Render2D operator=(const Render2D &);

	virtual void Initialise();

};

#endif // RENDER2D_H
