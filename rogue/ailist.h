#ifndef _AILIST_H_
#define _AILIST_H_

#include <list>
//#include "aisprite.h"
class AISprite;

class AIlist
{
	public:
		AIlist();
		~AIlist();


		virtual void attach(AISprite *);
		virtual void detach(AISprite *); 
		virtual void notify();

	private:
		std::list<AISprite*> _observers;
};

#endif
