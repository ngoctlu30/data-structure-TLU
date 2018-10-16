#include "Queue.h"
#include "TreeNode.h"
#ifndef TREE_H
#define TREE_H

template<class T>
class Tree
{
private:
	TreeNode<T> *root;
	void Inratutruoc(TreeNode<T> *root) const
	{
		if(root != 0)
		{
			Inratutruoc(root -> l);
			cout<<root -> value<<" ";
			Inratutruoc(root -> r);
		}
	}
	void Inratusau(TreeNode<T> *root) const
	{
		if(root != 0)
		{
			Inratusau(root -> r);
			cout<<root -> value<<" ";
			Inratusau(root -> l);
		}
	}
	void Inratucha(TreeNode<T> *root) const
	{
		if(root != 0)
		{
			cout<<root -> value<<" ";
			Inratucha(root -> l);
			Inratucha(root -> r);
		}
	}
public:
	Tree()
	{
		root = 0;
	}
	void AddRoot(T v)
	{
		TreeNode<T> *n = new TreeNode<T>;
		n -> value = v;
		n -> l = 0;
		n -> r = 0;
		if(root == 0)
			root = n;
		else
		{
			TreeNode<T> *p = root;
			Queue<TreeNode<T> *> q;
			q.EnQueue(p);
			while(!q.IsEmpty())
			{
				TreeNode<T> *t = q.DeQueue();
				if(t -> l == 0)
				{
					t -> l = n;
					break;
				}
				else if(t -> r == 0)
				{
					t -> r = n;
					break;
				}
				else
				{
					q.EnQueue(t -> l);
					q.EnQueue(t -> r);
				}
			}
		}
	}
	void PreOder()
	{
		Inratutruoc(root);
		cout<<endl;
	}
	void PostOder()
	{
		Inratusau(root);
		cout<<endl;
	}
	void InOrder()
	{
		Inratucha(root);
		cout<<endl;
	}
	bool Search(T key)
	{
		TreeNode<T> *p = root;
		Queue<TreeNode<T> *> q;
		q.EnQueue(p);
		if(root -> value == key)
			return true;
		else
		{
			while(!q.IsEmpty())
			{
				TreeNode<T> *t = q.DeQueue();
				if(t  != NULL)
				{
					if(t -> value == key)
						return true;
					
					else
					{
						q.EnQueue(t -> l);
						q.EnQueue(t -> r);
					}
				}
					
				
			}
			return false;
		}
	}
	
	T Max()
	{
		TreeNode<T> *p = root;
		
		Queue<TreeNode<T> *> q;
		q.EnQueue(p);
		int max = root -> value;
		while(!q.IsEmpty())
		{
			TreeNode<T> *t = q.DeQueue();
			if(t != NULL)
			{
				if(t -> value > max)
					max = t -> value;
					q.EnQueue(t -> l);
					q.EnQueue(t -> r);
			}
		}
		return max;
	}
	T Min()
	{
		TreeNode<T> *p = root;
		
		Queue<TreeNode<T> *> q;

		q.EnQueue(p);
		int min = root -> value;
		while(!q.IsEmpty())
		{
			TreeNode<T> *t = q.DeQueue();
			if(t != NULL)
			{
				if(t -> value < min)
					min = t -> value;
					q.EnQueue(t -> l);
					q.EnQueue(t -> r);
			}
		}
		return min;
	}
	
};
#endif