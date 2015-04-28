#include "controller.h"

Controller::Controller(ModelList& modellist, View& view)
{
	this->modellist = modellist;
	this->view = view;
}

Controller::~Controller()
{
}

void Controller::updateView(SDL_Surface *screen)
{
	view.draw(screen,modellist);
}


