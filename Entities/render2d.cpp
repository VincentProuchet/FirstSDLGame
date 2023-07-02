#include "render2d.h"
#include <SDL2/SDL_image.h>
#include <textureloadexception.h>

Render2D::Render2D()
{
	//ctor
}
Render2D::Render2D(SDL_Renderer * renderer,  const char * file)
{
	this->Initialise();
	try {
		this->texture = IMG_LoadTexture(renderer, file);
	}
	catch(const exception &e) {
	}
}
Render2D::~Render2D()
{
	SDL_DestroyTexture(this->texture);
	this->texture = nullptr;
}

void Render2D::loadTexture(SDL_Renderer * renderer, const char * file)
{
	this->Initialise();
	this->texture = IMG_LoadTexture(renderer, file);
	if(!this->texture){
		std::string texte = "error while loading file ";
		std::string mess  = texte + file;
		throw TextureLoadException(mess);

	}
}

void Render2D::Initialise()
{
	this->texture_rect.x = 0;
	this->texture_rect.y = 0;
	this->texture_rect.w = 50;
	this->texture_rect.h = 50;
}
