#ifndef _SCROLL_INTERFACE_H_
#define _SCROLL_INTERFACE_H_

class Scroll;
class ScrollInterfaceMagicMissile;

class ScrollInterface
{
	public:
		ScrollInterface();
		~ScrollInterface();
		
		virtual void accept(ScrollInterfaceMagicMissile *) = 0;
};
#endif
