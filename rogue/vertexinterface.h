#ifndef _VERTEX_INTERFACE_H_
#define _VERTEX_INTERFACE_H_

#include "spriteaiengine.h"

class VertexInterface
{

	public:
		VertexInterface(int, int, int);
		VertexInterface();
		~VertexInterface();


		virtual int getx() = 0;
		virtual int gety() = 0;
		virtual int getz() = 0;
		virtual void setx(int) = 0;
		virtual void sety(int) = 0;
		virtual void setz(int) = 0;

	private:
		int x,y,z;


};
#endif
