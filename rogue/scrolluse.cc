#include "scroll.h"
#include "usescrollinterface.h"

Scroll::Scroll()
{}

Scroll::~Scroll()
{}

void Scroll::accept(UseScrollInterface *scrolli)
{
	scrolli->useScroll(this);
}	
