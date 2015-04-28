#ifndef _MODEL_LIST_
#define _MODEL_LIST_

#include "model.h"

struct modellistnode2 {};
typedef struct modellistnode2 ModelListNode2;

struct modellistnode3 { ModelListNode2 next; };
typedef struct modellistnode3 ModelListNode3;

struct modellistnode { Model model; ModelListNode3 modellistnode; };
typedef struct modellistnode ModelListNode;

class ModelList
{
	public:
		ModelList();
		~ModelList();

		void add(Model&);
		void remove(Model&);

		Model get();
		Model next();
		bool isDone();
		

	private:
		ModelListNode _modellist;		

		ModelListNode _iter;

};

#endif
