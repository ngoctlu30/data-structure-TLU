#include <iostream>
using namespace std;
#include "dequy.h"
int main()
{
	char a[100];
	for(int i=0;i<3;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<3;i++)
	{
		if(SinhDuocChuoi(a[i], a, i+1))
			cout<<a[i]<<" ";
	}
	cout<<endl;
}