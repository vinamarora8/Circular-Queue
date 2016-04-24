#include "circular_queue.h"

template <class T>
circular_queue<T>::circular_queue(int l)
{
	list = new T[l];
	size = 0;
	maxsize = l;
	first = list;
	last = list+maxsize-1;
}

template <class T>
void circular_queue<T>::enqueue(T element)
{
	if(size<maxsize)
	{
		if(last == list+maxsize-1)
			last = list;
		else
			last++;
		*last = element;
		size++;
	}	
}

template <class T>
T circular_queue<T>::dequeue()
{
	if(size>0)
	{	
		T ret = *first;
		if(first == list+maxsize-1)
			first = list;
		else
			first++;
		size--;
		return ret;
	}
	return (T)0;
}

template <class T>
T circular_queue<T>::peek()
{
	return *first;
}

template <class T>
int circular_queue<T>::length()
{
	return size;
}
