/*here inbuilt reverse function is used, reverse(), in c++ reverse() function can be used directly to reverse the string
but we need to pass arugument of starting and ending string, *** this function is present in algorithm header file*/
#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
int main()
{   
    /*here we are using string instead of char as string function can only be used on string type */
    string str;
    int i;
    cout<<"enter string to check"<<" ";
    cin>>str;
    reverse(str.begin(),str.end());
    cout<<"the string is"<<" "<<str;
    return 0;
    
}
