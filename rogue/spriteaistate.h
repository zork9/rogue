#ifndef _SPRITE_AI_STATE_H_
#define _SPRITE_AI_STATE_H_

class SpriteState;

class SpriteAIState
{
	public:
		SpriteAIState();
		~SpriteAIState();

		virtual void moving(SpriteAIState*);
		virtual void nothing(SpriteAIState*);
		virtual void attacking(SpriteAIState*);
		virtual void running(SpriteAIState*); 

	protected:
		friend class SpriteState;
		void changeState(SpriteState*);

	private:
		SpriteState *_state;
};


#endif
