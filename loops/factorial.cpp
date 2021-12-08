#include<iostream>
using namespace std;
int main()
{
  int n,i,fact=1;
  cout<<"enter no for which you want to generate factorial:";
  cin>>n;
  for(i=1;i<=n;i++)
  {
    fact=i*fact;
  }
    cout<<n<<"!"<<"="<<fact<<"\n";

}

