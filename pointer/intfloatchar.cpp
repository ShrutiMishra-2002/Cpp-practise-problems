#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i=4; 
    float f=4.089;
    char c='A';
    int *ptr_i;
    float *ptr_f;
    char *ptr_c;
    ptr_i = &i; 
    // 4
    ptr_f = &f;
    // 4.089
    ptr_c = &c;
    // A
    cout<<"pointer i:"<<" "<<ptr_i;
    // without ptr_i asterick it prints address
    // with asterick it prints value
    cout<<"pointer f:"<<" "<<*ptr_f;
    cout<<"pointer c:"<<" "<<*ptr_c;


}
