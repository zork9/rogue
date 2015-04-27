#include "vertexlist.h"

Vertexlist::Vertexlist()
	: _iter(_observers.begin())
{
}

Vertexlist::~Vertexlist()
{}

void Vertexlist::attach(Position& s)
{
	_observers.push_back(s);
}

void Vertexlist::detach(Position& s)
{
	for (std::list<Position>::iterator vi = _observers.begin();
		vi != _observers.end();
		vi++) {
		if (s == *vi)
			_observers.erase(vi);
	}
	
}

void Vertexlist::notify() {
	std::list<Position>::iterator vi = _observers.begin();
	
	for ( ; vi != _observers.end(); vi++) {
		///////(*vi)->update(this);
	}
}

std::list<Position>::iterator Vertexlist::getVertex()
{

	if (++_iter == _observers.end()) {
		_iter = _observers.begin();
		return _iter;	
	}

	return ++_iter;	

}
