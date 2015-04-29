#include "modellistiter.h"
#include "modellist.h"

ModelListIter::ModelListIter(ModelList list)
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

ModelListIter& ModelListIter::operator=(ModelListIter& l)
{
	if (l == *this)
		return *this;

	_modellist = l._modellist;		
	_current = l._current;
	return *this;
}

bool ModelListIter::operator==(ModelListIter& l)
{
	if (l == *this)
		return true;

	if (_modellist == l._modellist && _current == l._current)
		return true;
	else
		return false;
}	


