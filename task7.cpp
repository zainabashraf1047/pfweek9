#include<iostream>
using namespace std;
main()
{
    
  string name;
  cout<<"Enter string";
  getline(cin,name);
  int counter=0;
  while(name[counter]!='\0')
  {
    counter++;

  }
 if(counter%2==0)
    {
        cout<<"Even length";
    }
else
    {
        cout<<"Odd";
    }

      //cout<<"The length is: "<<counter<<endl;
}