#include<iostream>
using namespace std;
int main()
{
    int i,j,n,k;
    cout<<"enter the range:";
    cin>>n;
    for(i=1;i<=n;i++)
    {  
        /*here k is taken first as space needs to be printed first,then star*/
        for(k=n-1;k>=i;k--)
        {
            cout<<" ";
        }
        /*here as j is dependent on i for printing in 1st row j starts with 1, and endpt is i i.e 1 for 1 st row
         so i prints only 1 stars*/
        for(j=1;j<=i;j++)
        { 
            cout<<" * ";
        }
    cout<<"\n";

    }
    return 0;
}