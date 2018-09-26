#ifndef PT_H
#define PT_H
#include <iostream>
using namespace std;
#include "math.h"
template<class T>
struct Node
{
	T bac;
	T heso;
	Node<T> *next;
	
};
template <class T>
class Dathuc
{
private:
	Node<T> *head;
public:
	Dathuc()
	{
		head = 0;
	};
	Dathuc(int a)
	{
		Node<T> *n = new Node<T>;
		n -> bac = a;
		n -> heso =1;
		n -> next = 0;
		head = n;
		for(int i  = a-1; i >= 0; i--)
		{
			Node<T> *v = new Node<T>;
			v -> bac = i;
			v -> heso = 1;
			v -> next = 0;
			n -> next =v;
			n =v;
		}
	};
	int size()
	{
		Node<T> *p = head;
		int c = 0;
		while( p != 0)
		{
			c++;
			p = p -> next;
		}
		return c;
	}
	void setHeso(int hs, int v)
	{
		Node<T> *p = head;
		for(int i= size()-1; i > hs; i--)
		{
			p  = p -> next;
		}
		p -> heso = v;
	}
	void test()
	{
		Node<T> *p = head;
		while( p != 0)
		{
			cout<<p -> bac<<endl;
			p = p -> next;
		}
	}
	int cal(int v)
	{
		int sum = 0;
		Node<T> *p = head;
		for(int i = 0 ; i <= size(); i++)
		{
			sum = sum  + pow(v,i);
			//cout<<i;
		}
		return sum;
	}
	void printAll()
	{
		 Node <T> *p = head;
		 while( p != 0)
		 {	
		 	if(p -> bac == size() - 1)
		 	{
		 		if(p ->heso == 1)
		 		{
		 			cout<<"x^"<<p -> bac;
		 		}
		 		if(p -> heso != 1)
		 		{
			 		if(p -> heso > 0)
			 		{

			 			cout<<p->heso<<"x^"<<p -> bac;
			 		}
			 		else if(p -> heso < 0)
			 		{
			 			cout<<p -> heso<<"x^"<<p -> bac;
			 		}
			 		else if(p -> heso == 0 )
			 		{
			 			cout<<"";
			 		}
			 	}
		 		
		 	}
		 	else if(p -> bac >= 2 && p -> bac < size() - 1)
		 	{
		 		if(p -> heso == 1)
		 		{
		 			cout<<" + "<<"x^"<<p -> bac;
		 		}
		 		if(p -> heso != 1)
		 		{
		 			if(p -> heso > 0)
		 			{
		 				cout<<" + "<<p->heso<<"x^"<<p -> bac;
		 			}
		 			else if(p -> heso < 0)
		 			{
		 				cout<<p -> heso <<"x^"<<p -> bac;
		 			}
		 			else if(p -> heso == 0)
		 			{
		 				cout<<"";
		 			}
		 		}			 	
		 	}
		 	else if(p -> bac == 1)
			{
			 	if(p -> heso == 1)
			 	{
			 		if(p -> heso > 0)
			 		{
		 				cout<<" + "<<"x";
		 			}
		 			else if(p -> heso != 1)
		 			{
			 			if(p -> heso > 0)
			 			{
			 				cout<<" + "<<p->heso<<"x";
			 			}
			 			else if(p -> heso < 0)
			 			{
			 				cout<<p -> heso <<"x";
			 			}
			 			else if(p -> heso == 0)
			 			{
			 				cout<<"";
			 			}
		 			}	
		 		}	
			}
			else
			{
				if(p -> heso == 1)
				{
					cout<<" + "<<p->heso;
				}
				else if (p -> heso != 1)
				{
					if(p -> heso > 0)
					{
						cout<<" + "<<p -> heso;
					}
					else if(p -> heso < 0)
					{
						cout<<p -> heso;
					}
					else
						cout<<"";
				}

			}
		p = p -> next;
		 	
		}
		 cout<<endl;
	}
};
#endif