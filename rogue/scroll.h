#ifndef _SCROLL_H_
#define _SCROLL_H_

#include "scrollinterface.h"
class ScrollInterfaceUse;
class ScrollImp;

class Scroll : public ScrollInterface
{
	public:
		Scroll();
		~Scroll();

		virtual void accept(ScrollInterfaceUse *);

	protected:
		ScrollImp *getScrollImp();

	private:
		ScrollImp *_imp;
};

#endif
