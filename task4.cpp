#include<iostream>
using namespace std;
main()
{
   // bool isfound=false;
    int size;
    cout<<"Enter size of array: ";
    cin>>size;
    int numbers[size];
    int another;
    int multiply;
    
    for(int idx=0;idx<size;idx++)
    {
        cout<<"Enter number: ";
        cin>>numbers[idx];
        
    }
    cout<<"Enter another no: ";
    cin>>another;
    // for(int idx=0;idx<size;idx++)
    // {
    

    // }
    for(int idx=size-1;idx>=0;idx--)
    {
        //     multiply=another*numbers[idx];
        // cout<<multiply<<" "; 
        cout <<numbers[idx]*another <<" "; //can be done like this
    }


}