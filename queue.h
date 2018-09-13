#ifndef QUEUE_H
#define QUEUE_H
#include <iostream>
using namespace std;
#include "node.h"
template<class T>
class Queue
{
private:
	Node <T> *top;
public:
	Queue()
	{
		top = 0;
	};
	void pushBack(T value)
	{
		Node<T> *n = new Node<T>;
		n -> data = value;
		n -> next = 0;
		if(top == 0)
			top = n;
		else
		{
			Node <T> *p = top;
			while(p -> next != 0)
			{
				p = p -> next;
			}
			p -> next = n;
		}
	}
	T popQueue()
	{
		T t = top -> data;
		Node<T> *p = top;
		top = top -> next;
		delete p;
		return t;
	}

};


#endif