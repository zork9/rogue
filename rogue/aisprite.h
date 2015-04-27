#ifndef AISPRITE_H_
#define AISPRITE_H_

#include <SDL.h>
#include "sprite.h"
#include "spriteaiengine.h"
#include "vertexlist.h"
#include "observerlist.h"
#include "vertexinterface.h"
#include "position.h"
#include "spriteaistate.h"

class AISprite : public Sprite, public SpriteAIState 
{
	public:
		explicit AISprite(SDL_Surface *s, int x, int y);
		AISprite();
		~AISprite();


		virtual void setObserverlist(Observerlist *);
		virtual void setVertexlist(Vertexlist *);

		virtual void update(Observerlist *);
		virtual void collide();

		virtual void addTarget(Position &);			

	private:
		Vertexlist _targets;
		Observerlist _sprites;
		Position _position;
};

#endif 
