#ifndef _MODEL_LIST_
#define _MODEL_LIST_

#include "model.h"
#include "modellistimp.h"
#include "modellistiter.h"

struct modellistnode2 { void *next; };
typedef struct modellistnode2 ModelListNode2;

struct modellistnode { Model model; ModelListNode2 modellistnode; };
typedef struct modellistnode ModelListNode;

class ModelList : public ModelListImp
{
	public:
		ModelList();
		~ModelList();

		void init();

		void add(Model&);
		void remove(Model&);

		Model get();
		void next();
		bool isDone();
		long count();
		
		void setNext(ModelListNode& n);

	private:
		ModelListNode _modellist;
		ModelListIter _modeliter;

		long _count;

	public:
		ModelList operator=(ModelList&);
		bool operator==(ModelList&);

};

#endif
