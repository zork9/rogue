#include "ailist.h"
#include "aisprite.h"

AIlist::AIlist()
{}

AIlist::~AIlist()
{}

void AIlist::attach(AISprite *s)
{
	_observers.push_back(s);
}

void AIlist::detach(AISprite *s)
{
	for (std::list<AISprite*>::iterator vi = _observers.begin();
		vi != _observers.end();
		vi++) {
		if (s == *vi)
			_observers.erase(vi);
	}
	
}

void AIlist::notify() {
	std::list<AISprite*>::iterator vi = _observers.begin();
	
	for ( ; vi != _observers.end(); vi++) {
	//////	(*vi)->update(this);
	}
}
