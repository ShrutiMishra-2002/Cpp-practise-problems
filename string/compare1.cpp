#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    /*here we are using compare inbuilt function */
    string str1;
    string str2;
    int res;
    cout<<"enter first string:"<<" ";
    cin>>str1;
    cout<<"enter second string:"<<" ";
    cin>>str2;
    res= str1.compare(str2);
    if(res==0)
    cout<<"same string";
    else if(res<0)
    cout<<"string 1 is smaller";
    else if(res>0)
    cout<<"string 1 is greater";

}