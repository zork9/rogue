#ifndef _MAGICMISSILE_SCROLL_INTERFACE_H_
#define _MAGICMISSILE_SCROLL_INTERFACE_H_

class Scroll;

class ScrollInterfaceMagicMissile
{
	public:
		ScrollInterfaceMagicMissile();

		virtual void useScroll(Scroll *) = 0;
};
#endif
