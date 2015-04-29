#include "scroll.h"
#include "scrollimp.h"
#include "scrollinterfaceuse.h"

Scroll::Scroll()
{}

Scroll::~Scroll()
{}

void Scroll::accept(ScrollInterfaceUse *scrolli)
{
	scrolli->useScroll(this);
}

ScrollImp *Scroll::getScrollImp()
{
	return _imp;
}	
