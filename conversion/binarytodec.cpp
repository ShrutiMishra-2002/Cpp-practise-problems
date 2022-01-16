#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main()
{
    int i=0, ans=0,rem;
    long int no;
    cout<<"enter a no :"<<" ";
    cin>>no;
    while(no!=0)
    {
        rem= no%10;
        // here to covert binary to decimal we (multiply individual digits)
        // with power then we add it with the ans 
        ans=ans+rem*pow(2,i);
        no=no/10;
        i++;
        // power=power*2;
        
    }
    cout<<"the decimal no is:"<<" "<<ans;
}