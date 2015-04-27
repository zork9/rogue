#ifndef SPRITE_H_
#define SPRITE_H_

#include <SDL.h>
#include "model.h"

class Observerlist;

class Sprite : public Model
{
	public:
		Sprite(SDL_Surface *s, int x, int y);
		Sprite();
		~Sprite();

		virtual void update(Observerlist *);
		virtual void collide();

	private:
};

#endif 
