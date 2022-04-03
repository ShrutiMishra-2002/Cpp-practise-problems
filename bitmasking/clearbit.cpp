#include<iostream>
using namespace std;
int clear(int n,int i)
{
    // i-1 as 1,2,4,8 starts from 1st position
return (n& (~(1<<(i-1))));
}

int main()
{
    int n,i;
    cout<<"enter n"<<endl;
    cin>>n;
    cout<<"i"<<"\n";
    cin>>i;
    // int mask = ~(1<<i);
    // int res = n & mask;
    cout<<clear(n,i);
// cout<<res;
}