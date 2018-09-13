#ifndef LIST_H
#define LIST_H
#include "node.h"
// using namespace std;

template <class T>

class List
{
private:
	Node <T> *head;
public:
	List()
	{
		head = 0;
	};
	void Add(T value)
	{
		Node<T> *n = new Node<T>;
		n -> data = value;
		n -> next = 0;
		if(head == 0)
			head = n;
		else
		{
			Node<T> *p = head;
			while (p -> next != 0)
				p = p->next;
			p -> next = n;
		}
	}
	void printAll() const
	{
		Node<T> *p = head;
		while(p != 0)
		{
			cout<<p -> data<<" ";
			p = p-> next;
		}
	}
	void change(int pos, T value)
	{
		//Node<T> *p = array[100];
		//array[pos -1] = value; 
 	}

	int Count() const
	{
		
	}
	void insert(int pos, T value)
	{
		

	}
	void Delete(int pos)
	{
		if(pos ==1)
			Node <T>*q = head;
			head = head -> next;
			delete q;
		else
		{
			Node <T> *p = head;
			for(int i=0;i<pos-1;i++)
			{
				p=p->next;

			}
			Node <T> *q = p -> next;
			p -> next = p-> next -> next;
			delete q;
		}
	}
	void Delete(int begin, int end)
	{

	}
};
#endif	