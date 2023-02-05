#include<iostream>
using namespace std;
main()
{
    
  string name;
  cout<<"Enter string";
  getline(cin,name);//used instead of cin
  //cin>>name; 
  int idx=0;
  while(name[idx]!='\0')
  {
    cout<<"character"<<name[idx]<<" at index "<<idx<<endl;
    idx++;
  }
}
