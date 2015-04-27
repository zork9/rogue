#include "sprite.h"

#include "observerlist.h"

Sprite::Sprite(SDL_Surface *s, int x, int y)
	: Model(s,x,y)
{
}

Sprite::Sprite()
{}

Sprite::~Sprite()
{}

void Sprite::update(Observerlist *l)
{
}

void Sprite::collide()
{
	
}
