#include "observerlist.h"

Observerlist::Observerlist()
{}

Observerlist::~Observerlist()
{}

void Observerlist::attach(Sprite *s)
{
	_observers.push_back(s);
}

void Observerlist::detach(Sprite *s)
{
	for (std::list<Sprite*>::iterator vi = _observers.begin();
		vi != _observers.end();
		vi++) {
		if (s == *vi)
			_observers.erase(vi);
	}
	
}

void Observerlist::notify() {
	std::list<Sprite*>::iterator vi = _observers.begin();
	
	for ( ; vi != _observers.end(); vi++) {
		(*vi)->update(this);
	}
}
