#include<iostream>
using namespace std;
main()
{
    string text;
    char chr[27]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','a'};
    cout<<"Enter text: ";
    getline(cin,text);
    for(int idx=0 ; text[idx]!='\0';idx++)
    {
         for(int j=0;j<26;j++)
         {
            if(text[idx]==chr[j])
            {
                j++;
                cout<<chr[j];
            }
         }
    }



}