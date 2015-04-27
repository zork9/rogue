#include "controller.h"

Controller::Controller(Model& model, View& view)
{
	this->model = model;
	this->view = view;
}

Controller::~Controller()
{
}

void Controller::updateView(SDL_Surface *screen)
{
	view.draw(screen,model);
}

void Controller::setModelSurface(SDL_Surface *s)
{
	model.setSurface(s);
}

void Controller::setX(int x)
{
	model.setX(x);
}

void Controller::setY(int y)
{
	model.setY(y);
}


