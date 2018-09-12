#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
#include "list.h"
int main()
{
	
	
	//list <int> l(10, 10);
	list<int> l;
	srand(time(0));
	for(int i=0;i<10;i++)
	{
		int n = rand()%10 +1;
		l.pushBack(n);
	}
	//cout<<"Size : ";l.size();cout<<endl;
	l.printAll();
	return 0;
}