
#ifndef LISH_H
#define LIST_H
using namespace std;

template<class T>
struct Node
{
	int value;
	Node<T> *next;
};
template<class T>
class List
{
private:
	Node <T> *head;
public:
	List()
	{
		head = 0;
	};

	void pushBack(T newValue)
	{
		Node<T> *n = new Node<T>;
		n -> value = newValue;
		n -> next = 0;
		if(head == 0)
			head = n;
		else
		{
			Node<T> *p = head;
			while (p -> next != 0)
				p = p -> next;
			p -> next = n;
		}
	}
	void size()
	{
		Node<T> *n = head;
		int count = 0;
		while(n != 0)
		{
			n = n -> next;
			count++;

		}
		cout<<count;
	}
	List (T t, int count)
	{
		head = 0;
		for(int i=0;i<count;i++)
		{
			Node<T> *n = head;
			pushBack(t);
		}
	}
	List(T t, int from, int to)
	{
		Node <T> *n = head;
		for(int i=0;i<size();i++)
		{
			n = n -> next;
		}
		for(int i = from; i<= to;i++)
		{
			n = n -> next;
			pushBack(n -> value);
		}
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
			for(int i=0;i<pos;i++)
			{
				p=p->next;

			}
			Node <T> *q = p -> next;
			p -> next = p-> next -> next;
			delete q;
		}
	}
	void printAll() const
	{
		Node<T> *p = head;
		while(p != 0)
		{
			cout<<p -> value<<" ";
			p = p-> next;
		}
	}

	// void insert(int pos, T value);
	// void Delete(int pos);
	// void Delete (int from, int to);
	// T max() const;
	// T min() const;
	// list reverse(T t);


};
#endif