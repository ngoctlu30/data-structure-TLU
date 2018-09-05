#include <fstream>

using namespace std;

void Menu()
{
	cout<<"\t1. Add subject\n";
	cout<<"\t2. Add score\n";
	cout<<"\t3. Display table score\n";
	cout<<"\t4. Average score\n";
	cout<<"\t5. Save\n";
	cout<<"\t0.Exit\n";
}
void addSubject()
{
	ofstream fout ("table.txt", ios::app);
	char subject[100];
	cout<<"Enter subject you want to add : ";
	cin.ignore();
	cin.getline(subject, 100);
	fout<<subject<<endl;

}
void addScore()
{
	ofstream fout ("table.txt", ios::app);
	int score;
	cout<<"Enter score : ";
	cin>>score;
	fout<<score<<endl;
}
void displayTable()
{
	ifstream fin("test.txt",ios::in);
  	string name;
  	string code;
  	int score;
  	getline(fin, name);
  	getline(fin, code);
  	fin>>score;
  	while(fin)
  	{
    	cout<<"Subject: "<<name<<endl;
    	cout<<"Code: "<<code<<endl;
    	cout<<"Score : "<<score<<endl;
    	fin.ignore();
   		getline(fin, name);
    	getline(fin, code);
    	fin>>score;
  }   
  	fin.close();
}
void averageScore()
{
	float total = 0.0;
	int i=0;
	ifstream fin("test.txt",ios::in);
  	string name;
  	string code;
  	int score;
  	getline(fin, name);
  	getline(fin, code);
  	fin>>score;
  	while(fin)
  	{
    	total+=score;
    	fin.ignore();
   		getline(fin, name);
    	getline(fin, code);
    	fin>>score;
    	i++;
  	}   
  	cout<<"Average Score is : "<<total/i<<endl;
  	fin.close();
}