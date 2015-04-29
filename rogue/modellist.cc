#include "modellist.h"

ModelList::ModelList(ModelListIter& iter)
	: _count(0), _modeliter(iter), _modellist()
{
}

ModelList::ModelList()
	: _count(0), _modeliter(), _modellist()
{
}

ModelList::~ModelList()
{}

void ModelList::add(Model& model)
{
	ModelListNode n;
	n.model = model;
	setNext(n);
	_modellist = n;

	_count ++;
}

void ModelList::setNext(ModelListNode& n)
{
	n.modellistnode.next = (void*)&_modellist;
}

void ModelList::remove(Model& model)
{}

Model ModelList::get()
{
	return ModelListIter(*this).get();
}

void ModelList::next()
{
	ModelListIter(*this).next();
}

bool ModelList::isDone()
{
	if (ModelListIter(*this).isDone())
		return true;
	else
		return false;
}

long ModelList::count()
{
	return _count;	
}

ModelList ModelList::operator=(ModelList& l)
{

	if (l == *this)
		return *this;

	_modellist = l._modellist;
	_modeliter = l._modeliter;
	_count = l._count;

}

bool ModelList::operator==(ModelList& l)
{

	if (_modellist == l._modellist
		&& _modeliter == l._modeliter
		&& _count == l._count)
		return true;
	else
		return false;
}

	
