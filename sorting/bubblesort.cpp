// segmentation fault
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n,arr[n],i,count=0,x,j,k;
//     cin>>n;
//     for(i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
//     for(j=0;j<n;j++)
//     {
//         for(i=0;i<n;i++)
//         {
//             if(arr[i]>arr[i+1])
//             {
//                 count++;
//             x= arr[i];
//             arr[i]= arr[i+1];
//             arr[i+1]= x;
            
//             }
//             // if(count==0)
//             // {
//             //     break;
//             // }
            
            
//         }
        
//     }
//     // for(i=0;i<n;i++)
//     // {
        
//     // }
//     cout<<"Array is sorted in"<<" "<<count<<" "<<"swaps."<<"\n";
//         cout<<"First Element:"<<" "<<arr[0]<<"\n";
//         cout<<"Last Element:"<<" "<<arr[n]<<"\n";
    
    
// }
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int i, j, n, x, count=0;
    cin>>n;
    int array[n];
    
    for (i = 0; i <n; i++) 
    {
        cin>>array[i];
    } 
    for (j = 0; j <n; j++) 
    {
        // Swaps = 0;
    for (i = 0; i <n-1; i++) 
    {           
        if(array[i]>array[i+1])
        {
            
            x= array[i];
            array[i]= array[i+1];
            array[i+1]= x;
            count++;
        }
    }
    
    }   
    cout<<"Array is sorted in "<<count<<" swaps.\n";
    cout<<"First Element: "<<array[0]<<endl;
    cout<<"Last Element: "<<array[n-1]<<endl;
    return 0;
}


