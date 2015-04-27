#include "spriteaistate.h"
#include "spritestate.h"
#include "spritestatenothing.h"

SpriteAIState::SpriteAIState()
{
	_state = SpriteStateNothing::Instance(); 
}

SpriteAIState::~SpriteAIState()
{}

void SpriteAIState::changeState(SpriteState *s)
{
	_state = s;
}

void SpriteAIState::moving(SpriteAIState*s)
{}
void SpriteAIState::nothing(SpriteAIState*s)
{}
void SpriteAIState::attacking(SpriteAIState*s)
{}
void SpriteAIState::running(SpriteAIState*s)
{}

