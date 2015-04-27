#ifndef _CHAR_SPRITE_H_
#define _CHAR_SPRITE_H_
#include "character.h"
#include "spriteaiengine.h"

class SpriteCharacter : CharacterInterface
{

	public:
		explicit SpriteCharacter(int, int, int);
		SpriteCharacter();
		~SpriteCharacter();


		virtual int getStrength();
		virtual int getDexterity();
		virtual int getIntelligence();
		virtual void setStrength(int);
		virtual void setDexterity(int);
		virtual void setIntelligence(int);

		virtual void acceptAI(SpriteAIengine*);

	private:
		Character _character;	


};
#endif
