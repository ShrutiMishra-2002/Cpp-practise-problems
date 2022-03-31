#include<iostream>
using namespace std;
int main()
{
    int n,arr[n],i,count=0,x,j,k;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(j=0;j<n;j++)
    {
        for(i=0;i<n;i++)
        {
            if(arr[i]>arr[i+1])
            {
                count++;
            x= arr[i];
            arr[i]= arr[i+1];
            arr[i+1]= x;
            
            }
            // if(count==0)
            // {
            //     break;
            // }
            
            
        }
        
    }
    // for(i=0;i<n;i++)
    // {
        
    // }
    cout<<"Array is sorted in"<<" "<<count<<" "<<"swaps."<<"\n";
        cout<<"First Element:"<<" "<<arr[0]<<"\n";
        cout<<"Last Element:"<<" "<<arr[n]<<"\n";
    
    
}

