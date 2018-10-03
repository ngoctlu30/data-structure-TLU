#include "node.h"
#include "queue.h"

#ifndef tree_h
#define tree_h

template <class T>
class Tree
{
private:
    Node<T> *root;    
    void InRaThuTuTruoc(Node<T> *root) const
    {        
        if (root != 0)
        {
            InRaThuTuTruoc(root->l);
            cout<<root->value<<" ";
            InRaThuTuTruoc(root->r);
        }
    };
    void InRaTuSau(Node<T> *root )const
    {
        if(root != 0)
        {
            InRaTuSau(root -> r);
            cout<<root -> value<<" ";
            InRaTuSau(root -> l);
        }
    };
    void InRaTuCha(Node<T> *root) const
    {
        if(root != 0)
        {
            cout<<root -> value<<" ";
            InRaTuCha(root -> l);
            InRaTuCha(root -> r);
        }
    };
public:
    Tree()
    {
        root = 0;
    };
    void AddChild(T v)
    {
        Node<T> *n = new Node<T>;
        n -> value = v;
        n -> l = 0;
        n -> r = 0;
        if(root == 0)
            root = n;
        else
        {
            Queue<Node<T> *> q;
            Node<T> *p = root;
            q.EnQueue(p);
            while(!q.IsEmpty())
            {
                Node<T> *t = q.DeQueue();
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
    };
    void PreOrder() const
    {
       InRaThuTuTruoc(root);  
       cout<<endl;       
    };
    void LastOrder() const
    {
        InRaTuSau(root);
        cout<<endl;
    };
    void FatherOrder() const
    {
        InRaTuCha(root);
        cout<<endl;
    };
};

#endif
