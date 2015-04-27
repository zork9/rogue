#ifndef _CONTROLLER_H_
#define _CONTROLLER_H_

#include <SDL.h>
#include "model.h"
#include "view.h"
#include "spriteaiengine.h"

class Controller
{
	public:
		Controller(Model& model, View& view);
		~Controller();

		void updateView(SDL_Surface *screen);

		void setModelSurface(SDL_Surface *surface);
		void setX(int x);
		void setY(int y);

	private:
		Model model;
		View view;
		SpriteAIengine *_aiengine;
};

#endif 
