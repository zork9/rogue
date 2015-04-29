#ifndef _SCROLL_INTERFACE_H_
#define _SCROLL_INTERFACE_H_

class Scroll;
class UseScrollInterface;

class ScrollInterface
{
	public:
		ScrollInterface();
		~ScrollInterface();
		
		virtual void accept(UseScrollInterface *);
};
#endif
