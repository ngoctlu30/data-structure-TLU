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
    void Them(T value1, T value2, Node<T> *&root)
    {
        if(root != 0)
        {
            if(Search(value1))
            {
                if(value1 == root -> value)
                {
                Node<T> *n = new Node<T>;
                n -> value = value2;
                n -> l = 0;
                n -> r = 0;
                if(root -> l == 0)
                    root -> l = n;
                if(root -> r == 0)
                    root -> r = n;
                }
                else
                {
                    Them(value1, value2, root -> l);
                    Them(value1, value2, root -> r);
                }
            }
        }
    };
    T Maxx(Node<T> *root)
    {
        int max = root -> value;
        
    }
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
    void PostOrder() const
    {
        InRaTuSau(root);
        cout<<endl;
    };
    void InOrder() const
    {
        InRaTuCha(root);
        cout<<endl;
    };
    bool Search(int key)
    {
        
        
        Queue<Node<T> *> q;
        Node<T> *p = root;
        q.EnQueue(p);
        while(!q.IsEmpty())
        {
            Node<T> *t = q.DeQueue();
            if(t -> l -> value ==  key || t -> r -> value == key )
            {
                return true;
            }
            else
            {
                return false;
            }
            q.EnQueue(t -> l);
            q.EnQueue(t -> r);
        }

        return false;
    }
    // T Max()
    // {
    //     Queue<Node<T> *> q;
    //     Node<T> *p = root;
    //     q.EnQueue(p);
    //     int max = root -> value;
    //     while(!q.IsEmpty())
    //     {
    //         Node<T> *t = q.DeQueue();
    //         if(t -> l -> value > max)
    //         {
    //             max = t -> l -> value;
    //         }
    //         else if(t -> r -> value > max)
    //         {
    //             max = t -> r -> value;
    //         }
    //         q.EnQueue(t -> l);
    //         q.EnQueue(t -> r);
    //     }
    //     return max;


    // }
    T Max()
    {
        Maxx(root);
    }
    void Add(int a, int b)
    {
        Them(a,b,root);
    }
};

#endif
