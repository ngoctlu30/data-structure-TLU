#ifndef STACK_H
#define STACK_H
#include <iostream>
using namespace std;
#include "node.h"
template<class T>
class Stack
{
private:
	Node<T> *top;

public:
	Stack()
	{
		top = 0;
	};
	void pushBack(T value)
	{
		Node<T> *n = new Node<T> ;
		n -> data = value;
		n -> next = top;
		top = n;
	};
	T Pop()
	{
		T t = top -> data;
		Node<T> *p = top;
		top = top -> next;
		delete p;
		return t;
	};
	bool isEmpty() const
	{
		return top == 0;
	}
};
#endif