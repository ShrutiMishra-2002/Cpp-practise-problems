#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
// wrg unique element problem
int main()
{   
    int size;
    int arr[size];
    int i,ans=arr[0];
    cout<<"enter size"<<" ";
    cin>>size;
    cout<<"enter elements in array"<<" ";
    for(i=0;i<=size;i++)
    {
    cin>>arr[i];
    }
    for(i=1;i<size;i++)
    {
    ans=ans^arr[i];
    }
    // return ans;
    cout<<"unique elements in array"<<" "<<ans;
}