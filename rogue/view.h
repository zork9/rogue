#ifndef _VIEW_H_
#define _VIEW_H_

#include <SDL.h>

class Model;

class View
{
	public:
		View();
		~View();

		void draw(SDL_Surface *screen, Model& model);

	private:

};

#endif 
