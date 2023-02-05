#include<iostream>
using namespace std;
main()
{
    int size;
    cout<<"Enter size of array2: ";
    cin>>size;
    int arr1[2];
    int arr2[size];

    for(int i=0;i<2;i++)
    {
        cout<<"Enter digits of array 1: ";
        cin>>arr1[i];
    }
    for(int i=0;i<size;i++)
    {
        cout<<"Enter digits of array 2: ";
        cin>>arr2[i];
    }
    cout<<arr1[0]<<",";
    for(int i=0;i<size;i++)
    {
        cout<<arr2[i]<<",";
    }
    cout<<arr1[1];


}