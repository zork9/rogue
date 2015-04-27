#include "character.h"

Character::Character(int str, int dex, int inte)
{
	_str = str;
	_dex = dex;
	_int = inte;
}

Character::Character()
{
}

Character::~Character()
{}

int Character::getStrength()
{
	return _str;
}
int Character::getDexterity()
{
	return _dex;
}
int Character::getIntelligence()
{
	return _int;
}

void Character::setStrength(int s)
{
	_str = s;
}
void Character::setDexterity(int d)
{
	_dex = d;
}
void Character::setIntelligence(int i)
{
	_int = i;
}

void Character::acceptAI(SpriteAIengine*ai)
{
}
