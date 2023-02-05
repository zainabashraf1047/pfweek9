#include<iostream>
using namespace std;
main()
{
    
  string name;
  cout<<"Enter string";
  getline(cin,name);
  int idx=0;
  while(name[idx]!='\0')
  {
    cout<<"The length is: "<<idx<<endl;
    idx++;
  }
}