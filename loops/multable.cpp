#include<iostream>
using namespace std;
int main()
{
  int n,i;
  cout<<"enter no for which you want to generate the table:";
  cin>>n;
  for(i=1;i<=10;i++)
  {
    cout<<n<<"*"<<i <<"="<<n*i<<"\n";

  }
}
