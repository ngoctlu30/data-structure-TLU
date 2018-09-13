#include <iostream>
using namespace std;
#include "list1.h"
#include "node.h"


int main()
{

	List <int> ds;
	ds.Add(5);
	ds.Add(4);
	ds.Add(1);
	ds.Add(2);
	ds.Add(6);
	ds.Add(3);
	//ds.change(1, 10);
	//ds.insert(3,50);
	//ds.Delete(1,2);
	ds.Delete(3);

	//cout<<"So phan tu la :"<<ds.Count()<<endl;
	ds.printAll();
	return 0;
}