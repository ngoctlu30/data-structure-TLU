#ifndef DICTREE_H
#define DICTREE_H
#include "node.h"
#include <string.h>

class Tree
{
private:
	Node *r;
public:
	Tree()
	{
		r = new Node;
		r -> con = 0;
		r -> next = 0;
	}
	void Add(const char *w)
	{
		int len = strlen(w);
		Node *p = r;
		for(int i=0;i<len;i++)
		{
			p =AddLetter(w[i], p);
		}
		Node *pe = new Node;
		pe -> ch = '#';
		pe -> con = 0;
		pe -> next = 0;
		Node *q = p -> con;
		if(p == 0)
			p -> con = pe;
		else
		{
			while(q -> ch != '#' && q -> next != 0)
				q = q -> next;
			if(q -> next == 0)
				q -> next = pe;
		}
	}
};
#endif