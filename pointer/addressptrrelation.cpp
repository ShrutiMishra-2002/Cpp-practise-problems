#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a=20,b=40;
    int *ptr_a;
    int *ptr_b;
    ptr_a=&a;
    ptr_b=&b;
    cout<<"pointer to a"<<*ptr_a;
    cout<<"pointer to b"<<*ptr_b;
    cout<<"address of a"<<&a;

}