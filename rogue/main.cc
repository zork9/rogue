#include <SDL.h>
#include <SDL_image.h>
#include <string>

#include "modellist.h"
#include "sprite.h"
#include "view.h"
#include "controller.h"

int main(int argc, char *argv[])
{

	SDL_Init(SDL_INIT_EVERYTHING);
	SDL_Surface *screen = SDL_SetVideoMode(800,600,16,NULL);

	std::string filename = "./pics/sprite.bmp";
	SDL_Surface *spriteimage = IMG_Load(filename.c_str());
	Sprite sprite(spriteimage,0,0);
	View view;

	ModelList modellist;
	modellist.add(sprite);

	Controller controller(modellist, view);

	controller.updateView(screen);	


	SDL_Event e;
	while (SDL_WaitEvent(&e)) {
		if (e.type == SDL_QUIT) {

			return 0;

		}
		if (e.type == SDL_KEYDOWN) {
			if (e.key.keysym.sym == SDLK_q)
				return 0;
		}
	}	

	return 0;
}

