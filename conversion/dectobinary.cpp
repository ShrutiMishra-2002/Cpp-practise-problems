#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
int main()
{
    int i, j,ans[10];
    int no;
    cout << "enter a decimal no :"<< " ";
    cin >> no;
    for (i = 0; no > 0; i++)
    {
        ans[i] = no % 2;
        no = no / 2;
    }
    // reverse printing of ans array 
    cout << "the binary no is:"<< " ";
    // here we are using i-1 to print reverse array, because i has 
    // already reach its max limit that is for eg: 4 entered by user
    // so when we do i-1 , its decrease from 4 to 0 so reverse array 
    for (j = i - 1; j >= 0; j--)
    {
        cout << ans[j];
    }

}

