#ifndef _VERTEXLIST_H_
#define _VERTEXLIST_H_

#include <list>
#include "position.h"

class Vertexlist
{
	public:
		Vertexlist();
		~Vertexlist();


		virtual void attach(Position &);
		virtual void detach(Position &); 
		virtual void notify();

		virtual std::list<Position>::iterator getVertex();

	private:
		std::list<Position> _observers;
		std::list<Position>::iterator _iter;

};

#endif
