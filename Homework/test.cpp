#include <iostream>
using namespace std;
#include "List.h"

int main()
{
	List<int> ds;
	ds.pushBack(4);
	ds.pushBack(2);
	ds.pushBack(3);
	//ds.printAll();
	List<int> l = ds;
	ds.Delete(2);
	ds.printAll();
	cout<<endl;
	l.printAll();
	cout<<endl;
	return 0;
}