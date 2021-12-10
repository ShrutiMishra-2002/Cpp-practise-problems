#include<iostream>
#include<string.h>
using namespace std;
int main()
{
  char a[100],b[100];
  cout<<"enter a no to check"<<"\n";
  cin>>a;
  /*for(i=1;i<=0;i++)
  {
  rem=n%10;
  rev=rev*10+rem;
  n=n/10;
  }*/
  strcpy(b,a);
  strrev(b);
  if(strcmp(a,b)==0)
  cout<<"palindrome no"<<b;
  else 
  cout<<"not palindrome no"<<b;

}