#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main()
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
  
  return 0;
}