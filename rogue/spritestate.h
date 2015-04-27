#ifndef _SPRITE_STATE_H_
#define _SPRITE_STATE_H_

class SpriteAIState;

class SpriteState
{
	public:
		SpriteState();
		~SpriteState();

		virtual void moving();
		virtual void nothing();
		virtual void attacking();
		virtual void running(); 

	protected:
		virtual void changeState(SpriteAIState *, SpriteState*);

	private:
};



#endif
