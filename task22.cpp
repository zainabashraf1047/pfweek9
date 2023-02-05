#include<iostream>
using namespace std;
main()
{
    int rps[4];
    float find[4]={0.25,0.10,0.05,0.01};
    int sum=0;

    for(int i=0;i<4;i++)
    {
        cout<<"Enter your money: ";
        cin>>rps[i];

    }
    float price;
    cout<<"Enter item price: ";
    cin>>price;
    int mul;
    for(int i=0;i<4;i++)
    {
         mul=rps[i]*find[i];
         sum=sum+mul;

    }
    if(sum>=price)
    {
        cout<<"True";
    }
    else{
        cout<<"False";
    }
}