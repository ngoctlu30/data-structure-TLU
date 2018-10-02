#include <iostream>
using namespace std;
#include "matran.h"

int main()
{
	matran<int> a;
	cout<<"Nhap ma tran 1 : \n";
	a.Nhap();
	a.Print();
	matran<int> b;
	cout<<"Nhap ma tran 2 : \n";
	b.Nhap();
	b.Print();
	matran<int> c;
	c = a + b;
	c.Print();
	return 0;	
}
