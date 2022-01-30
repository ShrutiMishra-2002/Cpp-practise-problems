#include<bits/stdc++.h>
using namespace std;
int binarysearch(int arr[],int n,int search)
// if you initialize some parameter in function above 
// don't initialize it down here 
{
    int a=0,z=n-1,mid;
    while(a<=z)
    {
        mid= a+ (z-a)/2;
        // to control overflow condition
        if(search==arr[mid])
        {
            return mid;
        }
        else if(search<=arr[mid])
        // 4<=3
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
    int n=5, a=0,z=n-1,mid,search,found;
    int arr[n]={5,4,3,2,1};
    cout<<"item to be searched"<<" ";
    cin>>search;
    found=binarysearch(arr,n,search);
    if(found==-1)
    {
        cout<<"item not found";
    }
    else
    cout<<"item found at"<<" "<<found;
    
}