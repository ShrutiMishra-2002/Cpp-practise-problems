#include<iostream>
using namespace std;
int main()
{
    int a,b,quotient,remainder;
    cout<<"enter 2 nos:";
    cin>>a>>b;
    /*a=2, divident, b=4, divisor*/
    quotient=a/b;
    remainder=a%b;
    cout<<"quotient is:"<<quotient;
    cout<<"remainder is"<<remainder;
}