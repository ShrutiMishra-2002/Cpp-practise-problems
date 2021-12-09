#include<iostream>
#include<math.h>
using namespace std;
int main()
{   
    int b,e,result;
    cout<<"enter base and exponent:";
    cin>>b>>e;
    result = pow(b,e);
    cout<<"power is:"<<result;
    return 0;
}