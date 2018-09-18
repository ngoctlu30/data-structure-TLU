#ifndef STACK_H
#define STACK_H
#include "node.h"
template< class T>
class Stack
{
private:
	Node<T> *head;
public:
	Stack()
	{
		head = 0;
	};
	void pushTopStack(T value)
	{
		Node<T> *n = new Node<T>;
		n -> data = value;
		n -> next = head;
		head = n;
	}
	T popStack()
	{
		T t = head -> data;
		Node<T> * p =head;
		head = head -> next;
		delete p;
		return t;
	}
	void print()
	{
		Node<T> *p = head;
		while( p != 0)
		{
			cout<<p -> data<<endl;
			p = p -> next;
		}
	}
};
#endif