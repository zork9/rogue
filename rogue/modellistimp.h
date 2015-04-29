#ifndef _MODEL_LIST_IMP_
#define _MODEL_LIST_IMP_

#include "model.h"
class ModelListIter;

class ModelListImp
{
	public:
		virtual void add(Model&) = 0;
		virtual void remove(Model&) = 0;

		virtual Model get() = 0;
		virtual void next() = 0;
		virtual bool isDone() = 0;
		virtual long count() = 0;
		
	protected:
		ModelListImp();

};

#endif
