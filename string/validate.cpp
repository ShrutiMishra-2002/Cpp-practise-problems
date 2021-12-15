#include<iostream>
using namespace std;
int validate(char str[10])
{
    int i;
    cout<<"enter string to check"<<" ";
    /*using gets to get the string because in cout we can get only one word that is S so by using gets() we overcome that issue*/
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        if(!(str[i]>=65 && str[i]<=90)&&!(str[i]>=97 && str[i]<=122)&&!(str[i]>=48 && str[i]<=57))
         return 0;
    }
    return 1;
    cout<<"the string is"<<" "<<str;
}
int main()
{
    char str[10];
    if(validate(str))
    cout<<"valid";
    else 
    cout<<"invalid";
}