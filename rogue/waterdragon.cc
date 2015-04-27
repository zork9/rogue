#include "waterdragon.h"

#include "observerlist.h"

WaterDragon::WaterDragon(SDL_Surface *s, int x, int y)
	: AISprite(s,x,y)
{
	Position *p = new Position(100,100,0);
	addTarget(*p);

	moving(this);
}

WaterDragon::WaterDragon()
{}

WaterDragon::~WaterDragon()
{}

void WaterDragon::update(Observerlist *l)
{
		
}

void WaterDragon::collide()
{
	
}
