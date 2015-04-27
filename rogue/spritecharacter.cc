#include "spritecharacter.h"
#include "spriteaiengine.h"

SpriteCharacter::SpriteCharacter(int str, int dex, int inte)
{
	_character.setStrength(str);
	_character.setDexterity(dex);
	_character.setIntelligence(inte);
}

SpriteCharacter::SpriteCharacter()
{
}

SpriteCharacter::~SpriteCharacter()
{}

int SpriteCharacter::getStrength()
{
	return _character.getStrength();
}
int SpriteCharacter::getDexterity()
{
	return _character.getDexterity();
}
int SpriteCharacter::getIntelligence()
{
	return _character.getIntelligence();
}

void SpriteCharacter::setStrength(int str)
{
	_character.setStrength(str);
}
void SpriteCharacter::setDexterity(int dex)
{
	_character.setDexterity(dex);
}
void SpriteCharacter::setIntelligence(int inte)
{
	_character.setIntelligence(inte);
}

void SpriteCharacter::acceptAI(SpriteAIengine*ai)
{
	if (ai->strengthp(this)) {
		ai->strength(this);	
	}
	if (ai->dexterityp(this)) {
		ai->dexterity(this);	
	}
	if (ai->intelligencep(this)) {
		ai->intelligence(this);	
	}
}



