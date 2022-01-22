// #include <iostream>
// #include <conio.h>
// #include<math.h>
#include<bits/stdc++.h>

using namespace std;
bool anagram(string str1, string str2)
{
    int n1, n2,i;
    n1 = str1.length();
    n2 = str2.length();
    if (n1 != n2)
        return false;
        sort(str1.begin(),str1.end());
        sort(str2.begin(),str2.end());
        for(i=0;i<=n1;i++)
        {
            if(str1[i]!=str2[i])
            return false;
        }
        return true;
}
int main()
{
    string str1, str2;
    str1="ritush";
    str2="shruti";

    if ((anagram(str1, str2)))
    {
        cout << "anagram";
    }
    else
    {
        cout << "not anagram";
    }
}