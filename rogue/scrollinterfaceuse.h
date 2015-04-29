#ifndef _USE_SCROLL_INTERFACE_H_
#define _USE_SCROLL_INTERFACE_H_

class Scroll;

class ScrollInterfaceUse
{
	public:
		ScrollInterfaceUse();
		~ScrollInterfaceUse();

		void useScroll(Scroll *);
};
#endif
