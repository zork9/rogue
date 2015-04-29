#ifndef _SCROLL_H_
#define _SCROLL_H_

#include "scrollinterfaceuse.h"
class ScrollInterfaceUse;

class ScrollUse : public ScrollInterfaceUse
{
	public:
		ScrollUse();
		~ScrollUse();

		virtual void accept(ScrollInterfaceUse *);

};

#endif
