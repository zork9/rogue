#ifndef _SCROLL_IMP_H_
#define _SCROLL_IMP_H_

class ScrollInterfaceUse;

class ScrollImp
{
	virtual void accept(ScrollInterfaceUse *) = 0;

	protected:
		ScrollImp();
};

#endif
