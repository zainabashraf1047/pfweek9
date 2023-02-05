#include<iostream>
using namespace std;
main()
{

    //int number = 10;
    //cout<<number;
    int size;
    cout<<"Enter size of array: ";
    cin>>size;

    int numbers[size];//declare after cin

    for(int idx=0;idx<size;idx++)
    {
      cout<<"Enter number: ";
      cin>>numbers[idx];   
    }
     for(int idx=0;idx<size;idx++)
    {
      cout<< numbers[idx]<<" ";   
    }



    // cout<<"Enter number: ";
    // cin>>numbers[0];
    // cout<<"Enter number: ";
    // cin>>numbers[1];
    // cout<<"Enter number: ";
    // cin>>numbers[2];
    // cout<<"Enter number: ";
    // cin>>numbers[3];
    // cout<<"Enter number: ";
    // cin>>numbers[4];


    //cout<<numbers[0]<<" "<<numbers[1]<<" "<<numbers[2]<<" "<<numbers[3]<<" "<<numbers[4];
}
