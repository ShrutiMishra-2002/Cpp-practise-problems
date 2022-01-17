#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
int main()
{
    int size, i,ans;
    cout << "enter size"<< " ";
    cin >> size;
    int arr[size];
    cout << "enter elements in array"<< " ";
    for (i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    // int ans = arr[0];
    // then i=1 se start
    for (i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }
    cout << "unique elements in array"<< " " << ans;
    return 0;
}
