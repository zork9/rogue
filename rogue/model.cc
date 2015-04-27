#include "model.h"

Model::Model(SDL_Surface *s, int x, int y)
{
	this->x = x;
	this->y = y;
	
	this->surface = SDL_DisplayFormat(s);
	setColorKey(0);
}

Model::Model()
{}

Model::~Model()
{}

void Model::setSurface(SDL_Surface *s)
{
	this->surface = s;
}

void Model::setX(int x)
{
	this->x = x;
}

void Model::setY(int y)
{
	this->y = y;
}

void Model::setColorKey(int rgb)
{
	SDL_SetColorKey(this->surface, 1, rgb);
}

SDL_Surface *Model::getSurface()
{
	return surface;
}

int Model::getX()
{
	return x;
}

int Model::getY()
{
	return y;
}

