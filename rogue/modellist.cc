#include "modellist.h"

ModelList::ModelList()
{
	//_modellist.modellistnode.next = (ModelListNode)0;
	_iter = _modellist;
}

ModelList::~ModelList()
{}

void ModelList::add(Model& model)
{
	_modellist.modellistnode.next = _modellist;
	_modellist.model = model;
}

void ModelList::remove(Model& model)
{}

Model ModelList::get()
{
	return _iter.model;
}

Model ModelList::next()
{
	_iter = _modellist.next();
}

bool ModelList::isDone()
{
	if (_iter.next == 0)
		return true;
	else
		return false;
