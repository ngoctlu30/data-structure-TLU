#ifndef MATRAN_H
#define MATRAN_H
#include <iostream>
using namespace std;
template <class T>
struct Node
{
	T value;
	Node *next;
};
template<class T>
class matran
{
private:
	Node<T> *head;
	int kt;
public:
	matran()
	{
		head = 0;
	}
	void setKT(int a)
	{
		kt = a;
	}
	int getKT()
	{
		return kt;
	}
	void pushBack(T v)
	{
		Node<T> *n = new Node<T>;
		n -> value = v;
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
	void Nhap()
	{
		int n;
		cout<<"Nhap kich thuoc ma tran : ";cin>>n;
		setKT(n);
		int v;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				Node<T> *n = new Node<T>;
				int v;
				cout<<"Nhap gia tri vi tri ["<<i+1<<"]["<<j+1<<"] : ";cin>>v;
				pushBack(v);
			}
		}
	}
	matran &operator + (matran<T> &a)
	{
		Node<T> *p = a.head;
		matran<T> kq = new Node<T>;

		while(p != 0)
		{
			matran<T> kq = new Node<T>;
			n -> value =this -> value + p -> value;
			p = p-> next;
		}
		return kq;
	}
	void Print()
	{
		int a = getKT();

		Node<T> *p = head;
		int c = 0;
		while(p != 0)
		{
			cout<< p -> value<<" ";
			c++;
			if(c == a)
				cout<<endl;
			p = p -> next;
		}
		cout<<endl;
	}
};

#endif