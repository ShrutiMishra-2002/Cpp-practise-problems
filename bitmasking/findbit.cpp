#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int n = 101, i = 1;
    int mask = 1 << i;
    int res = n & mask;
    if (res == 0)
        cout << "notset";
    else
        cout << "set";
    return 0;
}