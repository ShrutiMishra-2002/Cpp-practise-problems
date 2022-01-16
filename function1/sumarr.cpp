#include<iostream>
#include<conio.h>
using namespace std;
int sum(int total)
{ 
    int res,a,b;  
    cout<<"enter a"<<" ";
    cin>>a;
    cout<<"enter b"<<" ";
    cin>>b;
    res= a + b;
    return res;

}

int main()
{   
    int tot;
    cout<<"sum is:"<<endl<<sum(tot);

}