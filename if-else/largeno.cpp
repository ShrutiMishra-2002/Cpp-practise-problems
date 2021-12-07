#include<iostream>
using namespace std;
int main()
{
    int a,b ,c,max;
    cout<<"enter 3 nos"<<"\n";
    cin>>a>>b>>c;
    if(a>b)
    {
        max=a;

    }
    else
    max=b;
    if(a>c)
    {
        max=a;

    }
    else
    max=c;
    if(b>c)
    {
        max=b;

    }
    else
    max=c;
    if(a>c)
    {
        max=a;

    }
    else
    max=c;

    cout<<"max is:"<<"\n"<<max;
    return 0;
}
