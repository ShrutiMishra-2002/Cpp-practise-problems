#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    // int i;
    int i, rem, temp, ans = 0;
    int no;
    cout << "enter no"<< " ";
    cin >> no;
    temp = no;
    // both for and while loop working 

    for(i=no;no>0;i++)
    // while (no > 0)
    {
        rem = no % 10;
        // both pow and (rem*rem*rem) working properly
        // ans = ans + (rem * rem * rem);
        ans= ans + pow(3,no);
        no = no / 10;
    }
    if (ans == temp)
    {
        cout << "armstrong no"<<" " << temp;
    }
    else
    {
        cout << "not a armstrong no" << " " << temp;
    }
    return 0;
}
// pow(3,no)