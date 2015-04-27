#include "view.h"
#include "model.h"

View::View()
{
}

View::~View()
{}

void View::draw(SDL_Surface *screen, Model& model)
{
	SDL_Rect dest;
	dest.x = model.getX();
	dest.y = model.getY();	

	SDL_BlitSurface(model.getSurface(), NULL, screen, &dest);
	SDL_Flip(screen);
}

