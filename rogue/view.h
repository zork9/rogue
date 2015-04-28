#ifndef _VIEW_H_
#define _VIEW_H_

#include <SDL.h>

class ModelList;

class View
{
	public:
		View();
		~View();

		void draw(SDL_Surface *screen, ModelList& model);

	private:

};

#endif 
