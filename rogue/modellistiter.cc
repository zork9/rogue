#include "modellistiter.h"

ModelListIter::ModelListIter()
	:_current(0), _imp()
{
}

ModelListIter::~ModelListIter()
{
}

Model ModelListIter::get()
{
	return _imp->get();
}	

void ModelListIter::next()
{
	_current ++;
}

bool ModelListIter::isDone()
{
	return _current >= _imp->count();
	
}

ModelListImp *ModelListIter::getModelListImp()
{
	return _imp;
}
