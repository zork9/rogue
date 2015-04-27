#include "aisprite.h"
#include "position.h"
#include "observerlist.h"

AISprite::AISprite(SDL_Surface *s, int x, int y)
	: Sprite(s,x,y), _position(x,y,0), _targets(), _sprites()
{
}

AISprite::AISprite()
	: _position(0,0,0)
{}

AISprite::~AISprite()
{}

void AISprite::addTarget(Position &pos)
{
	_targets.attach(pos);
}

void AISprite::setObserverlist(Observerlist *l)
{}
void AISprite::setVertexlist(Vertexlist *)
{}

void AISprite::update(Observerlist *l)
{
}

void AISprite::collide()
{
	
}
