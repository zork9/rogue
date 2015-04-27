#include "spritestatenothing.h"

#include "spritestatemove.h"

//Nothing State

SpriteStateNothing::SpriteStateNothing()
{}

SpriteStateNothing::~SpriteStateNothing()
{}

SpriteStateNothing *SpriteStateNothing::Instance()
{
	return new SpriteStateNothing();
}

void SpriteStateNothing::moving(SpriteAIState*s)
{
	changeState(s, SpriteStateMove::Instance());	
}
void SpriteStateNothing::attacking(SpriteAIState*s)
{}
void SpriteStateNothing::running(SpriteAIState*s)
{}


