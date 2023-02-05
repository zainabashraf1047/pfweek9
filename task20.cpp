#include<iostream>
using namespace std;
main()
{
    int size;
    cout<<"Enter size of array: ";
    cin>>size;
    int res[size];
    float add=0;
    
    for(int idx=0;idx<size;idx++)
    {
        cout<<"Enter number: ";
        cin>>res[idx];
        add=res[idx]+add;
    }
    cout<<add <<" ohms";
}