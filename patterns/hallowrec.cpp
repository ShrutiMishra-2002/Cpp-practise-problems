#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"enter the range:";
    cin>>n;
    for(i=1;i<=n;i++)
    {  
        for(j=1;j<=n;j++)
        { 
            if((i==1||i==n)||(j==1||j==n))
            /*spacing matters too*/
            cout<<"* ";
            else
            cout<<"  ";
        }
        cout<<"\n";

    }
}