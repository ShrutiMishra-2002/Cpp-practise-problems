#include<iostream>
#include<string.h>
#include<stack>
using namespace std;
bool valid(string s)
{
    int n=s.size();
    int i;
    stack <char> st;
    bool ans=true;
    for(i=0;i<=n;i++)
    {
        if(s[i]=='{'||s[i]=='['||s[i]=='(')
        st.push(s[i]);

        else if(s[i]==')')
        {
            if(!st.empty() && st.top() =='(')
            {
                st.pop();
            }
            else
            {
                ans=false;
                break;
            }
            
        }
        else if(s[i]=='}')
        {
            if(!st.empty() && st.top() =='{')
            {
                st.pop();
            }
            else
            {
                ans=false;
                break;
            }
            
        }
        else if(s[i]==']')
        {
            if(!st.empty() && st.top() =='[')
            {
                st.pop();
            }
            else
            {
                ans=false;
                break;
            }
            
        }

        if(!st.empty())
        return false;
        return ans;

}
}
int main()

{
    string s="{([])}";
    if(valid(s))
    {
        cout<<"valid string";
    }
    else
    cout<<"invalid string";

}

