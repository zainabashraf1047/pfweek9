#include<iostream>
using namespace std;
main()
{
    int size;
    cout<<"Enter size of array: ";
    cin>>size;

    int numbers[size];
    int sum=0;
    float average;
    for(int idx=0;idx<size;idx++)
    {
      cout<<"Enter number: ";
      cin>>numbers[idx];   
   
      sum=sum+numbers[idx];
  
      average=sum/size; 

    }
        cout<<"sum is: "<<sum; 
        cout<<"average is: "<<average;
}