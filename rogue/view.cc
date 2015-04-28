#include "view.h"
#include "modellist.h"

View::View()
{
}

View::~View()
{}

void View::draw(SDL_Surface *screen, ModelList& modellist)
{

	while (!modellist.isDone()) {

		Model model(modellist.get());	

		SDL_Rect dest;
		dest.x = model.getX();
		dest.y = model.getY();	

		SDL_BlitSurface(modellist.get().getSurface(), NULL, screen, &dest);

		modellist.next();

	}

	SDL_Flip(screen);


}

