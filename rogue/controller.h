#ifndef _CONTROLLER_H_
#define _CONTROLLER_H_

#include <SDL.h>
#include "modellist.h"
#include "view.h"
#include "spriteaiengine.h"

class Controller
{
	public:
		Controller(ModelList& modellist, View& view);
		~Controller();

		void updateView(SDL_Surface *screen);

	private:
		ModelList modellist;
		View view;
		SpriteAIengine *_aiengine;
};

#endif 
