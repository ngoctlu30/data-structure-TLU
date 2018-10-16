 #ifndef DICTREE_H
#define DICTREE_H
#include "node.h"
#include <string.h>
class Tree
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
			while(q -> ch != l && q -> next != 0)
			{
				q = q -> next;
			}
			if(q -> ch == l)
				return q;
			else
			{
				Node *t2 = new Node;
				t2 -> ch= l;
				t2 -> con = 0;
				t2 -> next = 0;
				p -> next = t2;
				return t2;
			}
		}
	};
	Node * SearchKiTu(char kt, Node *p) const
    {
        Node *q = p->con;
        while (q!= 0)
        {
            if (q->ch == kt)
                return q;
            q = q->next;
        }
        return 0;
    };
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
			p = AddLetter(w[i], p);
		}
		Node *pe = new Node;
		pe -> ch = '#';
		pe -> con = 0;
		pe -> next = 0;
		Node *q = p -> con;
		if( q == 0)
			p -> con  = pe;
		else
		{
			while(q -> ch != '#' && q -> next != 0 )
				q = q -> next;
			if(q -> next == 0)
				q -> next = pe;
		}
	}
	bool Search(const char *tu) const
    {
        int len = strlen(tu);
        Node * p = r;
        for(int i = 0; i<len; i++)
        {
            p = SearchKiTu(tu[i], p);
            if (p == 0)
                return false;
        }
        Node *q = p->con;
        while (q!=0)
        {
            if (q->ch == '#')
                return true;
            q = q->next;             
        }
        return false;
    };
};

#endif
