#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char str[26];
    int i,h[26];
    cout<<"enter string:"<<" ";
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
       h[str[i]-97]+=1;

    }
    for(i=0;i<26;i++)
    {
        if(h[i]>1)
        {
            cout<<"count of duplicate character"<<i+97;
            cout<<"duplicate character"<<h[i];
        }
    }


}