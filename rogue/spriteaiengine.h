#ifndef _SPRITE_AI_ENGINE_H_
#define _SPRITE_AI_ENGINE_H_

class VertexInterface;
class CharacterInterface;
#include "observerlist.h"
#include "ailist.h"

namespace {

class SpriteAIengine
{
	public:
		SpriteAIengine();
		~SpriteAIengine();


		virtual bool movep(VertexInterface*);
		virtual void move(VertexInterface*);

		virtual bool strengthp(CharacterInterface*);
		virtual void strength(CharacterInterface*);

		virtual bool dexterityp(CharacterInterface*);
		virtual void dexterity(CharacterInterface*);

		virtual bool intelligencep(CharacterInterface*);
		virtual void intelligence(CharacterInterface*);

	private:
		static AIlist _ailist;	
};

AIlist SpriteAIengine::_ailist;
}
#endif
