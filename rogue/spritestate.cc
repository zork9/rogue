#include "spritestate.h"
#include "spriteaistate.h"

SpriteState::SpriteState()
{
}

SpriteState::~SpriteState()
{}

void SpriteState::changeState(SpriteAIState*ai, SpriteState *s)
{
	ai->changeState(s);
}

void SpriteState::moving()
{
}

void SpriteState::nothing()
{
}

void SpriteState::attacking()
{
}

void SpriteState::running()
{
}


	
