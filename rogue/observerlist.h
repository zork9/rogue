#ifndef _OBSERVERLIST_H_
#define _OBSERVERLIST_H_

#include <list>
#include "sprite.h"

class Observerlist
{
	public:
		Observerlist();
		~Observerlist();


		virtual void attach(Sprite *);
		virtual void detach(Sprite *); 
		virtual void notify();

	private:
		std::list<Sprite*> _observers;
};

#endif
