#include<iostream>
using namespace std;
int main()
{
  int n,i,first=0,second=1,final=0;
  cout<<"enter no :";
  cin>>n;
  for(i=1;i<=n;i++)
  {
      if(i==1)
      {
        cout<<first<<",";
        continue;

      }
      if(i==2)
      {
        cout<<second<<",";
        continue;

      }
     first=second;
     second=final;
     final=first+second;

    cout<<final<<",";
  }
  return 0;
}
