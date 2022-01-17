#include<iostream>
#include<conio.h>
#include<algorithm>
using namespace std;
int main()
{
    int i,size,j;
    // int size= sizeof(arr)/sizeof(arr[0]);
    cout<<"enter size"<<" ";
    cin>>size;
    int arr[size];
    // i<size because it goes from 0 to size-1
    cout<<"enter arr"<<" ";
    for(i=0;i<size;i++)
    {
        cin>>arr[i];

    }
    // sort is present in algorithm header file
    sort(arr,arr+size);
    cout<<"unique arr "<<" ";
    for(i=0;i<size;i++)
    {
        for(j=0;j<size ;j++)
        
            if(arr[i]==arr[j])
            break;
        
        if(i==j)
        {
            cout<<arr[i]<<" ";
        }

    }
}