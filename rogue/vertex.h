#ifndef _VERTEX_H_
#define _VERTEX_H_

#include "vertexinterface.h"

class Vertex : public VertexInterface
{

	public:
		Vertex();
		Vertex(int, int, int);
		~Vertex();


		int getx();
		int gety();
		int getz();
		void setx(int);
		void sety(int);
		void setz(int);

	private:
		int x,y,z;


};
#endif
