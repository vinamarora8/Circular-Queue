#ifndef CIRCULARQUEUE_H
#define CIRCULARQUEUE_H

template <class T>
class circular_queue
{
private:
	int *list, *first, *last;
	int maxsize, size;
public:
	circular_queue(int);
	void enqueue(T);
	T dequeue();
	T peek();
	int length();
};

#endif
