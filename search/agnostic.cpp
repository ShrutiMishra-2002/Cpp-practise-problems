#include<bits/stdc++.h>
// agnostic means we don't know whether it is in asc or des order
using namespace std;
int agnostic(int arr[],int n,int search)
{
    int mid,start=0,end=n-1;
    bool asc =arr[0]<=arr[1];
    while(start<=end)
    {
        mid=start+(end-start)/2;
        if(search==arr[mid])
        return mid;
        // ascending
        if(asc==true)
        {
        if(search<=arr[mid])
        {
            end=mid-1;

        }
        else
        {
            start=mid+1;
        }
        }
        // descending
        else
        {
            if(search>=arr[mid])
            {
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }

    }
    return -1;


}
int main()
{
    int n=5,search,found,start=0,end=n-1,mid;
    int arr[n]={1,2,3,4,5};
    cout<<"item to be searched"<<" ";
    cin>>search;
    found=agnostic(arr,n,search);
    if(found==-1)
    {
        cout<<"item not found";
    }
    else{
        cout<<"item found at"<<found;
    }
 
}