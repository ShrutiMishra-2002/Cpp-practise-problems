#include<iostream>
using namespace std;
int main()
{
  int i,n,store,rev,rem;
  cout<<"enter a no to check";
  cin>>n;
  store=n;
  for(i=1;i>0;)
  {
  rem=n%10;
  rev=rev*10+rem;
  n=n/10;
  }
  cout<<"reverse is"<<rev<<"\n";
  if(store==rev)
  cout<<"palindrome no"<<store;
  else 
  cout<<"not palindrome no"<<store;

}