#include <iostream>
#include "queue.h"
#include "stack.h"

using namespace std;

int main()
{
	char a[100] = " ";
	Stack<int> ds;
	for(int i=0;i<strlen(a);i++)
	{
		if(a[i] >= '0' && a[i] <= '9')
			ds.pushBack(a[i] - '0');
	}
	else
	{
		int s2 = s.Pop();
		int s1 = s.Pop();
		if(a[i] == '+')
			s.pushBack(s1+s2);
		if(a[i] == '-')
			s.pushBack(s1-s2);
		if(a[i] == '*')
			s.pushBack(s1*s2);
		if(a[i] == '/')
			s.pushBack(s1/s2);
	}
	return 0;
}

// int main()
// {
// 	Queue<int> l;
// 	l.pushBack(10);
// 	l.pushBack(15);
// 	l.pushBack(20);
// 	cout<<l.popQueue();
// 	cout<<l.popQueue();
// 	cout<<l.popQueue();
// 	return 0;
// }











































// #include <iostream>
// #include <ctime>
// #include <cstdlib>
// using namespace std;
// #include "list.h"
// int main()
// {
	
	
// 	//List <int> l(10, 10);
// 	List<int> l;
// 	srand(time(0));
// 	for(int i=0;i<10;i++)
// 	{
// 		int n = rand()%10 +1;
// 		l.pushBack(n);
// 	}
// 	//cout<<"Size : ";l.size();cout<<endl;
// 	l.printAll();
// 	return 0;
// }
