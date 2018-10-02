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
const char * myitoa(int n)
{
    char *a = new char [10];
    int i = 0;
    while(n>0)
    {
        a[i] = '0' + n%10;
        n = n/10;
        i++;        
    }
    for(int k =0;k<i/2;k++)
    {
        char t = a[k];
        a[k] = a[i-k-1];
        a[i-k-1] = t;
         
    }
    a[i] = '.';
    a[i+1] = 'h';
    a[i+2] = 't';
    a[i+3] = 'm';
    a[i+4] = 'l';
    a[i+5] = '\0';
    return a;
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
void xuatHTML(char bc[][100], int N, int sc)
{	
	ofstream fout(myitoa(sc));
	fout<<"<!DOCTYPE html>\n";
	fout<<"<html>\n";
	fout<<"		<head>\n";
	fout<<"			<title>Xep Hau</title>\n";
    fout<<"         <style>\n";
    fout<<"         td\n";
    fout<<"         {\n";
    fout<<"             text-align:center;\n";
    fout<<"             font-size:400%;\n";
    fout<<"             width: 100px;\n";
    fout<<"             height: 100px;\n";
    fout<<"         }\n";
    fout<<"         #black\n";
    fout<<"         {\n";
    fout<<"         background-color: black;";
    fout<<"         }\n";
    fout<<"         #white\n";
    fout<<"         {\n";
    fout<<"         background-color: white;";
    fout<<"         }\n";
    fout<<"         img\n";
    fout<<"         {\n";
    fout<<"         width: 100px;\n";
    fout<<"         height: 80px; \n";
    fout<<"         }\n";
    fout<<"         </style>\n";
	fout<<"		</head>\n";
	fout<<"		<body>\n";
    fout<<"<h1>"<<sc<<"</h1>\n";
	fout<<"			<table border = 1> \n";
	for(int i =0 ; i<N;i++)
	{
		fout<<"               <tr>\n";
		for(int j=0 ;j<N;j++)
		{
            
                if((i+j) % 2 == 0 )
                {
                    if(bc[i][j] == 'H')
                        fout<<"                 <td id=black>"<<"<img src=q.png>"<<"</td>\n";
                    else if(bc[i][j] == '-')
                        fout<<"                 <td id=black>"<<"</td>\n";
                }
                else
                {
                    if(bc[i][j] == 'H')
                        fout<<"                 <td id=white>"<<"<img src=q.png>"<<"</td>\n";
                    else
                        fout<<"                 <td id=white>"<<"</td>\n";
                }

		}
		fout<<"               </tr>\n\n";
	}
	fout<<"			</table>\n";
	fout<<"		</body>\n";
	fout<<"</html>\n";
}
void XepHau(int c, char bc[][100], int N, int &sc)
{
    if (c > N)
    {
        InBanCo(bc, N);
        sc++;
        xuatHTML(bc, N, sc);
    }
    else 
    {
        for(int i = 1; i<=N; i++)
        {
            if (XepDuocHau(i, c, bc, N))
            {
                bc[i-1][c-1] = 'H';
                XepHau(c+1, bc, N, sc);
                bc[i-1][c-1] = '-';    
            }
        }
    }
}

#endif