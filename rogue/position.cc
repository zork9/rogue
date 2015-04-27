#include "position.h"
#include "spriteaiengine.h"

Position::Position(int xx, int yy, int zz)
{
	_vertex.setx(xx);
	_vertex.sety(yy);
	_vertex.setz(zz);
}

Position::~Position()
{}

int Position::getx()
{
	return _vertex.getx();
}
int Position::gety()
{
	return _vertex.gety();
}
int Position::getz()
{
	return _vertex.getz();
}

void Position::setx(int xx)
{
	_vertex.setx(xx);
}
void Position::sety(int yy)
{
	_vertex.sety(yy);
}
void Position::setz(int zz)
{
	_vertex.setz(zz);
}

void Position::acceptAI(SpriteAIengine*ai)
{

	if (ai->movep(this)) {
		ai->move(this);
	}	
	
}

bool Position::operator==(Position p)
{
	if (this->getx() == p.getx() && this->gety() == p.gety() && this->getz() == p.getz())
		return true;
	else
		return false;
}
