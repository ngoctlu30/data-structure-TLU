#ifndef DANHBA_H
#define DANHBA_H
#include "List.h"
#include "Node.h"
#include <iostream>
using namespace std;
#include <fstream>
class DanhBa
{
private:
	string name;
	string phoneN;
public:
	DanhBa()
	{
		name = "";
		phoneN = "";
	};
	DanhBa(string a, string b)
	{
		name = a;
		phoneN = b;
	};
	friend istream &operator >> (istream &in, DanhBa &a )
	{
		cin.ignore();
		getline(cin, a.name);
		cin.ignore(0);
		getline(cin, a.phoneN);
		return in;
	}
	friend ostream &operator << (ostream &out, DanhBa &a)
	{
		out<<a.name<<endl;
		out<<a.phoneN;
		return out;

	}
	void setName(string a)
	{
		name = a;
	}
	string getName()
	{
		return name;
	}
	string setPhoneN(string a)
	{
		phoneN = a;
	}
	string getPhoneN()
	{
		return phoneN;
	}
	
};
	void Add(List<DanhBa> &p)
	{
		string name;
		string phone;
		cout<<"Moi ban nhap ten : ";
		cin.ignore();
		getline(cin, name);
		cout<<"Nhap so dien thoai : ";
		cin.ignore(1);
		getline(cin, phone);
		p.pushBack(DanhBa(name, phone));
	}
	void Display(List<DanhBa> p)
	{
		p.printAll();
	}
	void Savefile(List<DanhBa> p)
	{
		p.saveFile();
	}
	void Openfile(List<DanhBa> &p)
	{
		ifstream fin("fileData.txt");
		string a;
		string b;
		while(!fin.eof())
		{
			getline(fin, a);
			
			getline(fin, b);
			p.pushBack(DanhBa(a,b));
		}
	}
void Menu1()
{
	cout<<"\t Moi ban chon chuc nang \n";
	cout<<"\t 1.Them so lien lac \n";
	cout<<"\t 2.Hien thi\n";
	cout<<"\t 3.Luu xuong file\n";
	cout<<"\t 4.Mo file\n";
	cout<<"\t 5.Sua\n";
	cout<<"\t 6.In ra htlm\n";
	cout<<"\t 0.Thoat\n";
	cout<<"\t ======================= \n";
	cout<<"Moi chon chuc nang : ";
}
#endif