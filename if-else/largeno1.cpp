#include<iostream>
using namespace std;
int main()
{
    int a,b ,c,max;
    cout<<"enter 3 nos"<<"\n";
    cin>>a>>b>>c;
    max=((a>b && a>c) ? a : (b>c)?b:c);
    cout<<"max is:"<<"\n"<<max;
    
}
