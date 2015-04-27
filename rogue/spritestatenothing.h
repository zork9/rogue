#ifndef _SPRITE_STATE_NOTHING_H_
#define _SPRITE_STATE_NOTHING_H_

#include "spritestate.h"

class SpriteStateNothing : public SpriteState
{
	public:
		SpriteStateNothing();
		~SpriteStateNothing();

		static SpriteStateNothing *Instance();

		virtual void moving(SpriteAIState*);
		virtual void attacking(SpriteAIState*);
		virtual void running(SpriteAIState*); 

};

#endif
