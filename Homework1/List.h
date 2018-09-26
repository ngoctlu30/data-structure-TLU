#ifndef LIST_H
#define LIST_H
#include "Node.h"
#include "DanhBa.h"
#include <iostream>
#include <fstream>
template<class T>
class List
{
private:
	Node<T> *head;
public:
	List()
	{
		head = 0;
	};
	void pushBack(T value)
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
	void saveFile()
	{
		
		ofstream fout("fileData.txt", ios::app);
		fout.seekp(0, ios::end);
		//int l = fout.tellp();
		
		Node<T> *p = head;
		for(int i = 0 ; i< size() ; i++)
		{
			if (fout.tellp() == 0)
				fout<< p -> data;
			else
				fout<<endl<<p -> data;
			p = p -> next;
		}
	}
	void pushTop(T value)
	{
		Node<T> *n  = new Node<T>;
		n -> data = value;
		n -> next = head;
		head = n; 
	}
	List(List<T> t, int count)
	{	
		for(int i = 0 ; i< count; i++)
		{
			Node<T> *n = head;
			pushBack(t);
		}
	}
	int size() const
	{
		Node<T> *p = head;
		int count=0;
		while(p != 0)
		{
			p = p -> next;
			count++;
		}
		return count;

	}
	void Replace(int pos, T value)
	{
		Node<T> *p = head;
		if(pos == 1)
		{
			p -> data = value;
		}
		else
		{
			for(int i=0;i<pos-1;i++)
			{
				p = p -> next;
			}
			p -> data = value;
		}
	}
	void Delete(int pos)
	{
		if(pos == 1)
		{
			Node<T> *p = head;
			head = head -> next;
			delete p;
		}
		else
		{
			Node<T> * p = head;
			for(int i=1;i<pos-1;i++)
				p = p -> next;
			Node<T> *q  = p -> next;
			p -> next = p -> next -> next;
			delete q;
		}
	}
	void deleteByelement(T value)
	{	
		Node<T> *p = head;
		int k = 0;
		while(p != 0)
		{
			k++;
			if(value == p -> data)
			{
				Delete(k);
				k--;
			}
			p = p -> next;
		}
	}
	T Max() const
	{
		Node<T> *p = head;
		int max;
		max = head -> data;
		while(p != 0)
		{
			if(max < p -> data)
			{
				max = p -> data;
			}
			p = p -> next;
		}
		return max;
	}
	T Min() const
	{
		Node<T> * p = head;
		int min;
		min = head -> data;
		while(p != 0)
		{
			if(min > p -> data)
				min = p -> data;
			p = p -> next;
		}
		return min;
	}

	void Search(T value)
	{
		Node<T> *p = head;
		for(int i = 0;i< size();i++)
		{
			if(value == p -> data)
			{
				cout<<"Appear"<<endl;
			}
			p = p -> next;
		}

	}
	void sortIncrease()
	{
		Node<T> *p = head;
		for(int i = 0 ;i< size();i++)
		{
			Node<T> *v = p -> next;
			for(int j = i+1;j<size();j++)
			{
				if(p -> data > v -> data)
				{
					int t = p -> data;
					p -> data = v -> data;
					v -> data = t;
				}
				v = v -> next;
				
			}
			p = p -> next;
		}
	}
	void sortReduce()
	{
		Node<T> *p = head;
		for(int i = 0 ;i< size();i++)
		{
			Node<T> *v = p -> next;	
			for(int j = i+1;j<size();j++)
			{
				if(p -> data < v -> data)
				{
					T t = p -> data;
					p -> data = v -> data;
					v -> data = t;
				}
				v = v -> next;
			}
			p  = p -> next;
		}
	}
	
	void Insert(int pos, T value )
	{
		
		Node<T> *p = head;
		if( pos == 1)
		{
			pushTop(value);
		}
		
		else
		{
			Node<T> *v = new Node<T>;
			v -> next = NULL;
			v -> data = value;
			for(int i = 1 ;i < pos - 1; i++)
			{
				p = p -> next;
			}
			v -> next = p -> next;
			p -> next = v;
			
		}
	}
	void removeList()
	{
		Node<T> *p = head;
		for(int i = 0;i < size();i++)
		{
			delete head;
			head = p;
		}
		head = NULL;
	}
	T popTop()
	{
		T t = head -> data;
		Node<T> *p = head;
		head = head -> next;
		delete p;
		return t;	
	}
	int Swap(int pos1, int pos2)
	{
		Node<T> *p = head;
		for(int i = 1;i < pos1-1 ;i++)
		{
			p = p -> next;
		}
		int t1 = p -> data;
		for(int i = 1; i< pos2 ; i++)
			p = p -> next;
		int t2 = p -> data;
		Replace(pos1, t2);
		Replace(pos2, t1);
		//cout<<t1<<t2<<endl;
	}
	T getAnitem(int pos)
	{
		Node<T> *p = head;
		for(int i = 0 ; i < pos-1 ; i++)
		{
			p = p -> next;
		}
		T t = p -> data;
		p = p -> next;
		return t;	
	}
	bool isEmpty()
	{
		return head == NULL;
	}
	int timeAppear(T value)
	{
		Node<T> *p = head;
		int count = 0;
		while(p != 0 )
		{
			if(p -> data == value)
				count++;
			p = p -> next;

		}
		return count;
	}
	void Reserve();

	void printAll()
	{
		Node<T> *p = head;
		while(p != 0)
		{
			cout<<p -> data<<endl;
			p = p -> next;
		}
	}
};
void Menu()
{
		cout<<"\t1.  Add element at back. \n";
		cout<<"\t2.  Add element at top. \n";
		cout<<"\t3.  Size of linklist. \n";
		cout<<"\t4.  Replace at any location by value \n";
		cout<<"\t5.  Delete at any location \n";
		cout<<"\t6.  Delete by element \n";
		cout<<"\t7.  Max of linklist \n";
		cout<<"\t8.  Min of linklist \n";
		cout<<"\t9.  Looking for a value \n";
		cout<<"\t10. Sort increase linklist \n";
		cout<<"\t11. Sort reduce linklist \n";
		cout<<"\t12. Insert a value at any location \n";
		cout<<"\t13. Remove list \n";
		cout<<"\t14. Out put first element of linklist \n";
		cout<<"\t15. Swap value of two any location \n";
		cout<<"\t16. Get an item \n";
		cout<<"\t17. Check linklist is Empty \n";
		cout<<"\t18. Times appear of a value \n";
		cout<<"\t19. Print All \n";
		cout<<"==========================\n";
}
#endif