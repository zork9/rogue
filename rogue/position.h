#ifndef _VERTEX_POSITION_H_
#define _VERTEX_POSITION_H_
#include "vertex.h"

#include "spriteaiengine.h"

class Position : VertexInterface
{

	public:
		explicit Position(int, int, int);
		~Position();


		virtual int getx();
		virtual int gety();
		virtual int getz();
		virtual void setx(int);
		virtual void sety(int);
		virtual void setz(int);

		virtual void acceptAI(SpriteAIengine*);

	private:
		Vertex _vertex;	

	public:
		bool operator==(Position);
};
#endif
