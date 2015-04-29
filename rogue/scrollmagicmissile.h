#ifndef _USE_SCROLL_INTERFACE_H_
#define _USE_SCROLL_INTERFACE_H_

class Scroll;
#include "scrollinterfacemagicmissile.h"

class ScrollMagicMissile : public ScrollInterfaceMagicMissile
{
	public:
		ScrollMagicMissile();
		~ScrollMagicMissile();

		void useScroll(Scroll *);
};
#endif
