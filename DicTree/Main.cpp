#include <iostream>
using namespace std;
#include "test.h"
int main()
{
	DicTree t;
	t.Add("HELLO");
	cout<<t.Search("HELLO")<<endl;
	
	cout<<t.Search("HEIGH")<<endl;
	return 0;
}