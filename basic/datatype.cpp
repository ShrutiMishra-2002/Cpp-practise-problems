// #include <iostream>
// #include <iomanip>
// #include <limits>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

int a;
    double b;
    string s2;
    
    cin>>a;
    cin>>b;
    
    cin.ignore();
 getline(cin,s2);
    // cin>>s2;
    
    cout<<a+i<<"\n";
    
    printf("%.1f\n",d+b);
   
    cout<<s<<s2;
    return 0;
}