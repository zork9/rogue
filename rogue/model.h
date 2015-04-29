#ifndef MODEL_H_
#define MODEL_H_

#include <SDL.h>

class Model
{
	public:
		Model(SDL_Surface *s, int x, int y);
		Model();
		~Model();
		void setSurface(SDL_Surface *s);
		void setX(int x);
		void setY(int y);

		void setColorKey(int rgb);

		SDL_Surface *getSurface();
		int getX();
		int getY();

	private:
		int x,y;
		SDL_Surface *surface;

	public:	
		bool operator==(Model& m); 
};

#endif 
