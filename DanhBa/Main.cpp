#include <iostream>
#include <fstream>
using namespace std;
#include "DanhBa.h"
#include "List.h"
#include "Node.h"
#include "stdlib.h"

int main()
{
	List<DanhBa> ds;
	int option;
	do
	{
		Menu1();
		cin>>option;
		if(option == 1)
		{
			Add(ds);
		}
		if(option == 2)
		{
			Display(ds);
		}
		if(option == 3)
		{
			Savefile(ds);
		}
		if(option == 4)
		{
			Openfile(ds);
		}
	}while(option != 0);
	return 0;
}