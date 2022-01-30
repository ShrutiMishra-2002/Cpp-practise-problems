#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n=5,i;
    int arr[n]={1,2,3,4,5};
    int search, found=0;
    cout<<"enter element to be searced"<<" ";
    cin>>search;
    for(i=0;i<=n-1;i++)
    {
        if(arr[i]==search)
        {
            found= 1;
            cout<<"item found at"<<" "<<i;
            break;
        }
        
    }
    if(found==0)
        {
            cout<<"item not found";
        }


}