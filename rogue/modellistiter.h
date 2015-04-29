#ifndef _MODEL_LIST_ITER_
#define _MODEL_LIST_ITER_

#include "model.h"
class ModelList;

class ModelListIter
{
	public:

		ModelListIter(ModelList&);
		ModelListIter();
		~ModelListIter();

		virtual Model get();
		virtual void next();
		virtual bool isDone();
	
	protected:
		ModelList& getModelList();
	
	private:
		ModelList& _modellist;	
		long _current;	

};

#endif
