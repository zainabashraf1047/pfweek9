#include<iostream>
using namespace std;
main()
{
    string name;
    cout<<"Enter string ";
    getline(cin,name);
    // int counter=0;
    // while(name[counter]!='\0')
    // {
    //     counter++;
    // }
    int counter=name.length();
    cout<<counter<<endl;//for length
    for(int idx=counter-1;idx>=0;idx--)
    {
      cout<<name[idx];
    }
}