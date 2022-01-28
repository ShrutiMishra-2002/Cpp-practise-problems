#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x=10, y=20;
    int *ptr_a;
    ptr_a=&x;
    cout<<"pointer to x:"<<" "<<*ptr_a;
    ptr_a=&y;
    cout<<"pointer to y:"<<" "<<*ptr_a;
}