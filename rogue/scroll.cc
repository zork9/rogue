#include "scroll.h"
#include "scrollimp.h"
#include "scrollinterfacemagicmissile.h"

Scroll::Scroll()
{}

Scroll::~Scroll()
{}

void Scroll::accept(ScrollInterfaceMagicMissile *s)
{
	s->useScroll(this);
}

ScrollImp *Scroll::getScrollImp()
{
	return _imp;
}	
