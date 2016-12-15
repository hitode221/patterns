#pragma once
#include <string>
#include <iostream>

class Iterator;

class Container
{
public:
	Container(size_t n_, int * ptr_) : n(n_), ptr(ptr_) {};
	Iterator * createIterator(size_t index = 0);
	friend class Iterator;
private:
	size_t n;
	int * ptr;
};

class Iterator
{
public:
	explicit Iterator(Container * container_, size_t index_ = 0) : container(container_), index(index_){}
	bool isEnd() const
	{
		return index >= container->n;
	}
	int current() const
	{
		return container->ptr[index];
	}
	void next(){
		++index;
	}
private:
	Container * container;
	size_t index;
};

inline Iterator* Container::createIterator(size_t index)
{
	return new Iterator(this, index);
}
