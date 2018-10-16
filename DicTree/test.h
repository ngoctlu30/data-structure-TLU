#ifndef TEST_H
#define TEST_H
#include "node.h"
#include <string.h>
class DicTree
{
private:
	Node *r;
	Node * AddLetter(char l, Node *p)
	{
		Node *q = p -> con;
		if(q == 0)
		{
			Node *t1 = new Node;
			t1 -> ch = l;
			t1 -> con = 0;
			t1 -> next = 0;
			p -> con = t1;
			return t1;
		}
		else
		{
			while(q -> ch != l && q != 0)
			{
				q = q -> next;
			}
			if(q -> ch == l)
				return q;
			else
			{
				Node *t2 = new Node;
				t2 -> ch = l;
				t2 -> con = 0;
				t2 -> next = 0;
				q -> next =t2;
				return t2;
			}
		}
	};
	Node *SearchLetter(char l, Node *p) const
	{
		Node *q =p -> con;
		while(q != 0)
		{
			if(q -> ch == l)
				return q;
			q = q -> next;
		}
	};
public:
	DicTree()
	{
		r = new Node;
		r -> con = 0;
		r -> next = 0;
	};
	void Add(const char *w)
	{
		int len = strlen(w);
		Node *p = r;
		for(int i=0;i<len;i++)
		{
			p = AddLetter(w[i], p);
		}
		Node *pe = new Node;
		pe -> ch = '#';
		pe -> con = 0;
		pe -> next = 0;
		Node *q = p -> con;
		if(q == 0)
			p -> con = pe;
		else
		{
			while(q -> ch != '#' && q != 0)
			{
				q = q -> next;
			}
			if(q -> next == 0)
				q -> next = pe;
		}

	}
	bool Search(const char *w) const
	{
		int len = strlen(w);
		Node *p =r;
		for(int i=0;i<len;i++)
		{
			p = SearchLetter(w[i], p);
			if(p == 0)
				return false;
		}
		Node *q = p -> con;
		while(q!= 0)
		{
			if(q -> ch == '#')
				return true;
			q = q -> next;
		}
		return false;

	}
};
#endif