#include "modellist.h"

ModelList::ModelList()
	: _count(0), _modeliter(), _modellist()
{
}

ModelList::~ModelList()
{}

void ModelList::init()
{
	_modeliter = ModelListIter(*this);
}

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
	return _modeliter.get();
}

void ModelList::next()
{
	_modeliter.next();
}

bool ModelList::isDone()
{
	if (_modeliter.isDone())
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

	this->_modellist = l.modellist;
	this->_modeliter = l.modeliter;
	this->_count = l._count;

}

bool ModelList::operator==(ModelList& l)
{

	if (this->_modellist == l.modellist
		&& this->_modeliter == l.modeliter
		&& this->_count == l._count)
		return true;
	else
		return false;
}

	
