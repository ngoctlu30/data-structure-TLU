#include <iostream>

using namespace std;
#include "dathuc.h"
int main()
{
	Dathuc<int> p(4);

	//p.printAll();
	//p.setHeso(0, 5);
	//p.printAll();
	//p.setHeso(3, 0);

	//p.printAll();
	cout<<p.cal(2)<<endl;
	
	return 0;
}
