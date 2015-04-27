#ifndef _CHAR_INTERFACE_H_
#define _CHAR_INTERFACE_H_

#include "characterinterface.h"
#include "spriteaiengine.h"

class Character : public CharacterInterface
{

	public:
		Character(int,int,int);
		Character();
		~Character();


		virtual int getStrength();
		virtual int getDexterity();
		virtual int getIntelligence();
		virtual void setStrength(int);
		virtual void setDexterity(int);
		virtual void setIntelligence(int);

		virtual void acceptAI(SpriteAIengine*);

	private:
		int _str,_dex,_int;


};
#endif
