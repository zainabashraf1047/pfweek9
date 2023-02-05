#include<iostream>
using namespace std;

main()
{
   string txt;
   cout<<"Enter string: ";
   getline(cin,txt);
   for(int i=0;txt[i]!='\0';i++)
   {
      if(txt[i]=='a'||txt[i]=='e'||txt[i]=='i'||txt[i]=='o'||txt[i]=='u')
      {
        continue;
      }
      cout<<txt[i];
}


}