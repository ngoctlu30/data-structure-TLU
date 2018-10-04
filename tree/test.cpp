#include <iostream>
using namespace std;
#include "queue.h"
int main()
{
	Queue <int> l;
	l.EnQueue(5);
	l.EnQueue(6);
	l.EnQueue(7);
	cout<<l.Max();
	return 0;
}