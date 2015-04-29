#ifndef _SCROLL_H_
#define _SCROLL_H_

#include "scrollinterface.h"
class ScrollInterfaceMagicMissile;
class ScrollImp;

class Scroll : public ScrollInterface
{
	public:
		Scroll();
		~Scroll();

		virtual void accept(ScrollInterfaceMagicMissile *);

	protected:
		ScrollImp *getScrollImp();

	private:
		ScrollImp *_imp;
};

#endif
