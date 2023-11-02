// https://www.acmicpc.net/problem/4949
// my answer
#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    while (true)
    {
        string input;
        getline(cin, input);
        if (input == ".")
            break;
        stack<char> S;
        bool is_valid = true;
        for (auto c : input)
        {
            if (c == '(' || c == '[')
            {
                S.push(c);
            }
            else if (c == ')')
            {
                if (S.size() > 0 && S.top() == '(')
                {
                    S.pop();
                }
                else
                {
                    is_valid = false;
                    break;
                }
            }
            else if (c == ']')
            {
                if (S.size() > 0 && S.top() == '[')
                {
                    S.pop();
                }
                else
                {
                    is_valid = false;
                    break;
                }
            }
            else if (c == '.')
                break;
        }
        if (!S.empty())
            is_valid = false;
        if (is_valid)
            cout << "yes\n";
        else
            cout << "no\n";
    }
    return 0;
}

// answer with STL
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    while (true)
    {
        string a;
        getline(cin, a);
        if (a == ".")
            break;
        stack<char> s;
        bool isValid = true;
        for (auto c : a)
        {
            if (c == '(' || c == '[')
                s.push(c);
            else if (c == ')')
            {
                if (s.empty() || s.top() != '(')
                {
                    isValid = false;
                    break;
                }
                s.pop();
            }
            else if (c == ']')
            {
                if (s.empty() || s.top() != '[')
                {
                    isValid = false;
                    break;
                }
                s.pop();
            }
        }
        if (!s.empty())
            isValid = false;
        if (isValid)
            cout << "yes\n";
        else
            cout << "no\n";
    }
}