#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'camelcase' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts STRING s as parameter.
 */
int t=1,i;
int camelcase(string s) {
    int res=s.length();
for(i=0;i<res;i++)
{

    // if(isupper(s[i]))
    if(s[i]>='A' && s[i]<='Z')
        t++;
cout<<t;
        
}
    return t;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    int result = camelcase(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
