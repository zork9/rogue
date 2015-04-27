#ifndef WATERDRAGON_H_
#define WATERDRAGON_H_

#include <SDL.h>
#include "aisprite.h"

class Observerlist;

class WaterDragon : public AISprite 
{
	public:
		WaterDragon(SDL_Surface *s, int x, int y);
		WaterDragon();
		~WaterDragon();

		virtual void update(Observerlist *);
		virtual void collide();

	private:

};

#endif 
