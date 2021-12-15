#include<iostream>
using namespace std;
int main()
{
    char str[]="SHRUTI";
    int i;
    for(i=0;str[i]!='\0';i++)
    {
        
        str[i]+=32;
        
    }
    cout<<"the string is"<<" "<<str;
}