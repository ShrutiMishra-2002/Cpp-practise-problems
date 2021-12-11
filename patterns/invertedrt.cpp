#include<iostream>
using namespace std;
int main()
{
    int i,j,n,k;
    cout<<"enter the range:";
    cin>>n;
    for(i=1;i<=n;i++)
    {  
        /*here as j is dependent on i so in 2nd row j starts with 2 so i prints only 4 stars*/
        for(j=i;j<=n;j++)
        { 
            /*here k prints the space in columns*/
           /* for(k=1;k<=n;k++)
         {
            cout<<" ";
         }*/
        cout<<"*";
        }
    cout<<"\n";

    }
}