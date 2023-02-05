#include<iostream>
using namespace std;
main()
{
    
  string name;
  cout<<"Enter string";
  getline(cin,name);
  int counter=0;
  for(int idx=0;idx<=counter;idx++)
  {
    if(name[counter]=='i'||name[counter]=='a'||name[counter]=='e'||name[counter]=='o'||name[counter]=='u')
    {
        counter++;
    }
    
  }
  cout<<counter;

}