#ifndef QUEUE_H
#define QUEUE_H
#include "QueueNode.h"
template<class T>
class Queue
{
private:
	QueueNode<T> *head;
public:
	Queue()
	{
		head = 0;
	}
	void EnQueue(T v)
	{
		QueueNode<T> *n = new QueueNode<T>;
		n -> value = v;
		n -> next = 0;
		if(head == 0)
			head = n;
		else
		{
			QueueNode<T> *p = head;
			while(p -> next != 0)
				p = p -> next;
			p -> next = n;
		}
	};
	T DeQueue()
	{
		T t = head -> value;
		QueueNode<T> *p = head;
		head = head -> next;
		delete p;
		return t;
	};
	bool IsEmpty()
	{
		return head == NULL;
	};
};
#endif