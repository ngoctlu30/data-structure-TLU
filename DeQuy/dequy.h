#ifndef DEQUY_H
#define DEQUY_H
#include <fstream>
int Giaithua(int v)
{
	if(v == 1)
		return 1;
	return v*Giaithua(v-1);
}
int Fibo(int v)
{
	if(v <= 2)
		return 1;
	return Fibo(v-2) + Fibo(v-1);
}
void ThapHN(int N, char c1, char c2, char c3)
{
	if(N == 1)
	{
		cout<<c1<<" -----> "<<c3<<endl;
	}
	else
	{
		ThapHN(N-1, c1, c3, c2);
		ThapHN(1, c1, c2, c3);
		ThapHN(N-1, c2, c1, c3);
	}
}
void KhoiTao(int N, char bc[100][100])
{
	for(int i=0; i<N; i++)
        for(int j=0; j<N; j++)
            bc[i][j] = '-';
}
void InBanCo(char bc[][100], int N)
{
    for(int i = 1; i<=N; i++)
    {
        for(int j=1; j<=N; j++)
            cout<<bc[i-1][j-1]<<" ";
        cout<<endl;
    }
    cout<<"==================================\n";
}
bool XepDuocHau(int x, int y, char bc[][100], int N)
{
    for(int j = 1; j<y; j++)
        if (bc[x-1][j-1] == 'H')
            return false;
    for(int i = x-1, j=y-1; i>=1, j>=1; i--, j--)
    {
        if (bc[i-1][j-1] == 'H')
            return false;
    }
    for(int i = x+1, j=y-1; i<=N, j>=1; i++, j--)
    {
        if (bc[i-1][j-1] == 'H')
            return false;
    }
    return true;
}
void xuatHTML(char bc[][100], int N)
{	
	ofstream fout("file.html");
	fout<<"<!DOCTYPE html>\n";
	fout<<"<html>\n";
	fout<<"		<head>\n";
	fout<<"			<title>Hello</title>\n";
	fout<<"		</head>\n";
	fout<<"		<body>\n";
	fout<<"			<table border = 1> \n";
	fout<<" 			<tr>\n";

	for(int i = 0 ; i< N;i++)
	{
		
		for(int j=0;j<N;j++)
		{
			fout<<"					<td>"<<"1"<<"</td>\n";
		}
		fout<<"\n";
	}

	fout<<" 			</tr>\n";
	fout<<"			</table>\n";
	fout<<"		</body>\n";
	fout<<"</html>\n";
}
void XepHau(int c, char bc[][100], int N)
{
    if (c > N)
    {
        InBanCo(bc, N);
        xuatHTML(bc, N);
    }
    else 
    {
        for(int i = 1; i<=N; i++)
        {
            if (XepDuocHau(i, c, bc, N))
            {
                bc[i-1][c-1] = 'H';
                XepHau(c+1, bc, N);
                bc[i-1][c-1] = '-';    
            }
        }
    }
}

#endif