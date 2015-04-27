#include "vertex.h"

Vertex::Vertex(int xx, int yy, int zz)
{
	x = xx;
	y = yy;
	z = zz;
}

Vertex::Vertex()
{
}

Vertex::~Vertex()
{}

int Vertex::getx()
{
	return x;
}
int Vertex::gety()
{
	return y;
}
int Vertex::getz()
{
	return z;
}

void Vertex::setx(int xx)
{
	x = xx;
}
void Vertex::sety(int yy)
{
	y = yy;
}
void Vertex::setz(int zz)
{
	z = zz;
}

