#include<iostream>
#include<conio.h>
using namespace std;
int sum(int size)
{ 
    int res=0,i;  
   for(i=1;i<=size;i++)
   {
    res= i + res;
   }
    return res;

}

int main()
{
    int size;
    cout<<"enter size";
    cin>>size;
    cout<<"sum is:"<<endl<<sum(size);
}