#include <iostream>
using namespace std;
#include "Queue.h"
#include "Tree.h"
int main()
{
	Tree <int> l;
	l.AddRoot(17);
	l.AddRoot(1);
	l.AddRoot(3);
	l.AddRoot(2);
	l.AddRoot(4);
	l.AddRoot(6);
	
	l.PreOder();
	cout<<l.Search(10)<<endl;
	//cout<<l.Max()<<endl;
	//cout<<l.Min()<<endl;

	return 0;
}