#include <iostream>
#include <conio.h>
using namespace std;
int mask,n;
int set(int n, int mask)
{
return (mask | n);
}
int main()
{
    n = 00101;
    int i = 1;
    mask = 1 << i;
    cout<<"k th bit:"<<set(n,mask);
    // int res = n & mask;
    // if (res == 0)
    
        // cout << "notset"<<"\n";
        
        // cout<< n;

        // cout<<n||mask;
    

    // else
    // {
    //     cout << "set";
    // }
    return 0;
}