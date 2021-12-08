#include<iostream>
#include<cmath>
using namespace std;
int main()
{
 int a,b,c,x1,x2,i, dis,real,imag;
 cout<<"enter a,b,c:"<<"\n";
 cin>>a>>b>>c;
 dis=b*b-4*a*c;
 if(dis>0)
 {
   x1= (-b+ sqrt(dis))/(2*a);
   x2= (-b- sqrt(dis))/(2*a);
   cout<<"roots are real and different:";
   cout<<"x1="<<x1<<"\n";
   cout<<"x2="<<x2<<"\n";  
 }
else if(dis==0)
{
    x1=(-b/2*a);
    cout<<"roots are real and same ";
    cout<<"x1=x2="<<x1;
}
if(dis<0)
 {
   real= -b/2*a; 
   imag= (sqrt(-dis))/(2*a);
   cout<<"roots are complex and different:";
   cout<<"x1="<<real<<"+"<<imag<<"i";
   cout<<"x2="<<real<<"-"<<imag<<"i";

 }
 
 return 0;



}
