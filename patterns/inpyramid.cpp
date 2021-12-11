#include<iostream>
using namespace std;
int main()
{
    int i,j,n,k;
    cout<<"enter the range:";
    cin>>n;
    for(i=n;i>=1;i--)
    {  
        
        /*here k is taken first as space needs to be printed first,then star, k is same for both inverted and non inverted pyramid*/
        for(k=n-1;k>=i;k--)
        {
            cout<<" ";
        }
        /*here as j is dependent on i for printing ,it is just the opposite of pyramid*/
        for(j=i;j>=1;j--)
        { 
            cout<<" * ";
        }
    cout<<"\n";

    }
}