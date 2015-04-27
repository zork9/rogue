#include "spritestatemove.h"

#include "spritestatenothing.h"

//Moving State



SpriteStateMove::SpriteStateMove()
{}

SpriteStateMove *SpriteStateMove::Instance()
{
	return new SpriteStateMove();
}

SpriteStateMove::~SpriteStateMove()
{}

void SpriteStateMove::nothing(SpriteAIState*s)
{
	changeState(s, SpriteStateNothing::Instance());	
}
void SpriteStateMove::attacking(SpriteAIState*s)
{}
void SpriteStateMove::running(SpriteAIState*s)
{}


