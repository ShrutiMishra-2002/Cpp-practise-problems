// #include<bits/stdc++.h>
#include<iostream>
#include<conio.h>
using namespace std;
int binarysearch(int arr[],int n,int search)
{
    int a=0,z=n-1,mid;
    while(a<=z)
    {
        mid= a+ (z-a)/2;
        if(search==arr[mid])
        {
            return mid;
        }
        else if(search>arr[mid])
        {
            a=mid+1;

        }
        else
        { 
            z=mid-1;

        }

    }
    return -1;

}
int main()
{
    int n,arr[100], a=0,z=n-1,mid,search,found,i;
    // int arr[n]={1,2,3,4,5};
    cout<<"enter no of elements"<<" ";
    cin>>n;
    cout<<"enter array elements"<<"\n";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"item to be searched"<<" \n";
    cin>>search;
    found=binarysearch(arr,n,search);
    if(found==-1)
    {
        cout<<"item not found";
    }
    else
    cout<<"item found at"<<" "<<found;
    
}