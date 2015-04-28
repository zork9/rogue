#ifndef _USE_SCROLL_INTERFACE_H_
#define _USE_SCROLL_INTERFACE_H_

class Scroll;

class UseScrollInterface
{
	public:
		UseScrollInterface();
		~UseScrollInterface();

		void useScroll(Scroll *);
};
#endif
