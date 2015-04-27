#ifndef _CHARSHEET_INTERFACE_H_
#define _CHARSHEET_INTERFACE_H_

#include "spriteaiengine.h"

class CharacterInterface
{

	public:
		CharacterInterface(int,int,int);
		CharacterInterface();
		~CharacterInterface();


		virtual int getStrength() = 0;
		virtual int getDexterity() = 0;
		virtual int getIntelligence() = 0;
		virtual void setStrength(int) = 0;
		virtual void setDexterity(int) = 0;
		virtual void setIntelligence(int) = 0;

		virtual void acceptAI(SpriteAIengine*);

	private:
		int _str,_dex,_int;


};
#endif
