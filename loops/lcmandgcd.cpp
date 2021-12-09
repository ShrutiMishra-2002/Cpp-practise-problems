/*lcm: least common multiple: in 65 and 13, 65 is lcm, as 65 commons in both 13*5 & 65*1 
gcd: greatest common divisor: in 65 and 13, 13 is gcd, as 13 is the greatest that divides both 13 & 65 */
#include<iostream>
using namespace std;
int main()
{
  int i, num1,num2,lcm,gcd;
  cout<<"enter 2 nos";
  cin>>num1>>num2;
  for(i=1;i<=num1/2;i++)
  {
      if(num1%i==0 && num2%i==0)
      gcd=i;
  }
  cout<<"gcd is:"<<gcd<<"\n";
  lcm=num1*num2/gcd;
  cout<<"lcm is:"<<lcm;
}