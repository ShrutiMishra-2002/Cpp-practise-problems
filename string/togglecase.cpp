#include<iostream>
using namespace std;
int main()
{
    char str[10];
    int i;
    cout<<"enter string to check"<<" ";
    /*using gets to get the string because in cout we can get only one word that is S so by using gets() we overcome that issue*/
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>=65 && str[i]<=90)
        {
        str[i]+=32;
        }
        else if(str[i]>=97 && str[i]<=122)
        {
        str[i]-=32;
        }
    }
    cout<<"the string is"<<" "<<str;
}