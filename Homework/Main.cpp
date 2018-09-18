#include <iostream>
using namespace std;

#include "Stack.h"
#include "Queue.h"
#include "List.h"

int main()
{
	List <int> ds;
	int option;
	do
	{
		Menu();
		cout<<"Please enter option : ";
		cin>>option;
		if(option == 1)
		{
			system("clear");
			int value;
			cout<<"Enter value you want to add at back : ";cin>>value;
			ds.pushBack(value);
			cout<<"=========================="<<endl;
			
		}
		if(option == 2)
		{
			system("clear");
			int value;
			cout<<"Enter value you want to add at top : ";cin>>value;
			ds.pushTop(value);
			cout<<"=========================="<<endl;
		}
		if(option == 3 )
		{
			system("clear");
			cout<<"Size of linklist are : ";
			cout<<ds.size()<<endl;
			cout<<"=========================="<<endl;
		}
		if(option == 4 )
		{
			system("clear");
			int location;
			int value;
			cout<<"Enter location : ";cin>>location;
			cout<<endl<<"Enter value : ";cin>>value;
			ds.Replace(location, value);
			cout<<"=========================="<<endl;
		}
		if(option == 5)
		{
			system("clear");
			int location;
			cout<<"Enter location: ";cin>>location;
			ds.Delete(location);
			cout<<"=========================="<<endl;
		}
		if(option == 6)
		{
			system("clear");
			int value;
			cout<<"Enter value : ";cin>>value;
			ds.deleteByelement(value);
			cout<<"=========================="<<endl;
		}
		if(option == 7)
		{
			system("clear");
			cout<<"Max is : ";ds.Max();
			cout<<"=========================="<<endl;
		}
		if(option == 8)
		{
			system("clear");
			cout<<"Min is : ";ds.Min();
			cout<<"=========================="<<endl;
		}
		if(option == 9)
		{
			system("clear");
			int value;
			cout<<"Enter value you need search : ";cin>>value;
			ds.Search(value);
			cout<<"=========================="<<endl;
		}
		if(option == 10)
		{
			system("clear");
			cout<<"Link list after sort increase : ";ds.sortIncrease();
			cout<<"=========================="<<endl;
		}
		if(option == 11)
		{
			system("clear");
			cout<<"Link list after sort reduce : ";ds.sortReduce();
			cout<<"=========================="<<endl;
		}

		if(option == 12 )
		{
			system("clear");
			int location;
			int value;
			cout<<"Enter location you want to insert : ";cin>>location;
			cout<<"Endter value you want to insert : ";cin>>value;
			ds.Insert(location, value);
			cout<<"=========================="<<endl;
		}
		if(option == 13)
		{
			system("clear");
			string answer;
			cout << "Are you ready? ";cin>>answer;
			if(answer == "yes")
			{
				ds.removeList();
			}
			else
				cout<<"Ok man "<<endl;
			cout<<"=========================="<<endl;
		}
		if(option == 14)
		{
			system("clear");
			cout<<"First element of linklist : ";cout<<ds.popTop()<<endl;

			cout<<"=========================="<<endl;
		}
		if(option == 15)
		{
			system("clear");
			int location1, location2;
			cout<<"Enter two location : ";cin>>location1>>location2;
			ds.Swap(location1, location2);
			cout<<"=========================="<<endl;
		}
		if(option == 16)
		{
			system("clear");
			int location;
			cout<<"Enter location : ";cin>>location;
			cout<<ds.getAnitem(location);
		}
		if(option == 17)
		{
			system("clear");
			if(ds.isEmpty() == true)
				cout<<"it is empty"<<endl;
			else
				cout<<"it is not empty"<<endl;
			cout<<"=========================="<<endl;
		}
		if(option == 18)
		{
			system("clear");
			int value;
			cout<<"Enter value ";cin>> value;
			cout<<"Times appear of "<< value <<" is : "<<ds.timeAppear(value)<<endl;
			cout<<"=========================="<<endl;
		}
		if(option == 19 )
		{
			system("clear");
			ds.printAll();

		}
	
		if(option == 0)
		{
			cout<<"Bye."<<endl;
			break;
		}
		// cout<<"\t20.  \n";
		// cout<<"\t21.  \n";
		// cout<<"\t22.  \n";
		// cout<<"\t23.  \n";

	}while(option != 0);
	
	return 0;
}
