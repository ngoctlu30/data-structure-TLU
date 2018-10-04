#include <iostream>
using namespace std;
#include "tree.h"
int main()
{
    Tree<int> x;
    x.AddChild(10);
    x.AddChild(6);
    x.AddChild(15);
    x.AddChild(2);
    x.AddChild(8);
    x.AddChild(11);
    x.AddChild(13);
   // x.Add(2, 7);
    x.PreOrder(); 
    // x.PostOrder();
    // x.InOrder();
    cout<<x.Max();
    // if(x.Search(15))
    //     cout<<"1";
    return 0;
}
