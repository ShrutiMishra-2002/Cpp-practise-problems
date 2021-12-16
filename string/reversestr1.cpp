#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char str[50];
    int i;
    cout<<"enter string to check"<<" ";
    /*using gets to get the string because in cout we can get only one word that is S so by using gets() we overcome that issue*/
    gets(str);
    strrev(str);
    cout<<"the string is"<<" "<<str;
}