#ifndef _MODEL_LIST_ITER_
#define _MODEL_LIST_ITER_

#include "model.h"
#include "modellistimp.h"

class ModelListIter
{
	public:

		ModelListIter();
		~ModelListIter();

		virtual Model get();
		virtual void next();
		virtual bool isDone();
	
	protected:
		ModelListImp *getModelListImp();
	
	private:
		ModelListImp *_imp;	
		long _current;	

};

#endif
