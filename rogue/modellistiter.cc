#include "modellistiter.h"
#include "modellist.h"

ModelListIter::ModelListIter(ModelList& list)
	:_current(0), _modellist(list)
{
}

ModelListIter::ModelListIter()
	:_current(0), _modellist()
{
}

ModelListIter::~ModelListIter()
{
}

Model ModelListIter::get()
{
	return getModelList().get();
}	

void ModelListIter::next()
{
	_current ++;
}

bool ModelListIter::isDone()
{
	return _current >= getModelList().count();
	
}

ModelList& ModelListIter::getModelList()
{
	return _modellist;
}
