#ifndef _SCROLL_H_
#define _SCROLL_H_

#include "scrollinterface.h"
class UseScrollInterface;

class Scroll : public ScrollInterface
{
	public:
		Scroll();
		~Scroll();

		void accept(UseScrollInterface *);

};

#endif
