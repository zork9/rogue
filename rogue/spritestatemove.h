#ifndef _SPRITE_STATE_MOVE_H_
#define _SPRITE_STATE_MOVE_H_

class SpriteAIState;

#include "spritestate.h"

class SpriteStateMove : public SpriteState
{
	public:
		SpriteStateMove();
		~SpriteStateMove();

		static SpriteStateMove* Instance();

		virtual void nothing(SpriteAIState*);
		virtual void attacking(SpriteAIState*);
		virtual void running(SpriteAIState*); 

};
#endif
