#include<iostream>
using namespace std;
int main()
{
    int a,b,sum,subt,mul,divi;
    char choice;
    cout<<"enter operation to perform"<<" ";
    cout<<"+ - * /"<<" ";
    cin>>choice;
    cout<<"enter two no to perform operation"<<" ";
    cin>>a>>b;
/*inside switch bracket there is a char type variable , we take operator in choice variable as operators are char type
case can be any no,sign or words, but users should enter the same thing when asked to enter*/
switch (choice)
{
case '+': 
      sum=a+b;
      cout<<"sum is"<<sum<<" ";
    break;
case '-': 
      subt=a-b;
      cout<<"subtraction is"<<subt<<" ";
    break;

case '*': 
      mul=a*b;
      cout<<"multiplication is"<<mul<<" ";
    break;
case '/': 
      divi=a/b;
      cout<<"division is"<<divi<<" ";
    break;

default:
      cout<<"invalid operation entered!";
    break;
}
}