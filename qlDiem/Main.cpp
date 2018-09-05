#include <iostream>
#include "option.h"
using namespace std;

int main()
{
	int select;

	do
	{
		Menu();
		cout<<"Enter option : ";
		cin>>select;
		switch(select)
		{
			case 1:
				addSubject();
				break;
			case 2:
				addScore();
				break;
			case 3:
				displayTable();
				break;
			case 4:
				averageScore();
				break;
			case 5:
				break;
			case 0:
				cout<<"Thank you and see you later\n";
				break;
		}
		if(select == 0)
		{
			break;
		}
	}while(1);
	return 0;
}