#include <iostream>
using namespace std;
#include "dequy.h"
int main()
{
	//char a,b,c;
	//cout<<Giaithua(4)<<endl;
	//cout<<Fibo(10)<<endl;
	//ThapHN(3,'A','B','C');
	int N;
	int sc = 0;
	cout<<"Nhap kich thuoc ban co : ";cin>>N;
	char bc[100][100];
    
    KhoiTao(N, bc);      
    XepHau(1, bc, N, sc);
	return 0;
}