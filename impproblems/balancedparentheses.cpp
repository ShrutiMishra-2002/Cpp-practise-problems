#include <bits/stdc++.h>
using namespace std;
// bool returns true or false
bool balanced(string expr)
{
    stack<char> s;
    int i, x;
    for (i = 0; i < expr.length(); i++)
    {
        if (expr[i] == '(' || expr[i] == '{' || expr[i] == '[')
        {
            s.push(expr[i]);
            continue;
        }

        if (s.empty())
            return false;

        switch (expr[i])
        {
        case ')':
            x = s.top();
            s.pop();
            if (x == '{' || x == '[')
                return false;
            break;
        case '}':
            x = s.top();
            s.pop();
            if (x == '(' || x == '[')
                return false;

            break;
        case ']':
            x = s.top();
            s.pop();
            if (x == '(' || x == '{')
                return false;
            break;
        default:
            break;
        }
    }
    return s.empty();
}
int main()
{
    int i;
    string expr = "[({()})]";
    if (balanced(expr))
    {
        cout << "balanced";
    }
    else
    {
        cout << "unbalanced";
    }
}