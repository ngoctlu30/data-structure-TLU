#ifndef QUEUE_H
#define QUEUE_H
#include "Node.h"
template< class T>
class Queue
{
private:
	Node<T> *head;
public:
	Queue()
	{
		head = 0;
	};
	void pushBackQue(T value)
	{
		Node<T> *n = new Node<T>;
		n -> data = value;
		n -> next = 0;
		if(head == 0)
			head = n;
		else
		{
			Node<T> *p = head;
			while(p -> next != 0)
			{
				p = p -> next;
			}
			p -> next = n;
		}
	}
	T popQue()
	{
		T t = head -> data;
		Node<T> *p = head;
		head = head -> next;
		delete p;
		return t;
	}
	void print()
	{
		Node<T> *p = head;
		while(p != 0)
		{
			cout<<p -> data<<endl;
			p = p -> next;
		}
	}
};
#endif