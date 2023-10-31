// https://www.acmicpc.net/problem/10828
// my answer
#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    stack<int> S;

    // push / pop / size / empty / top
    int n;
    cin >> n;
    while (n--)
    {
        string op;
        int x;
        cin >> op;
        if (op == "push")
        {
            cin >> x;
            S.push(x);
        }
        else if (op == "pop")
        {
            if (S.empty())
            {
                cout << -1 << '\n';
            }
            else
            {
                x = S.top();
                cout << x << '\n';
                S.pop();
            }
        }
        else if (op == "size")
        {
            cout << S.size() << '\n';
        }
        else if (op == "empty")
        {
            if (S.empty())
                cout << 1 << '\n';
            else
                cout << 0 << '\n';
        }
        else if (op == "top")
        {
            if (S.empty())
                cout << -1 << '\n';
            else
                cout << S.top() << '\n';
        }
    }
    return 0;
}

// answer with STL
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    stack<int> S;
    while (n--)
    { // n번 반복
        string c;
        cin >> c;
        if (c == "push")
        {
            int t;
            cin >> t;
            S.push(t);
        }
        else if (c == "pop")
        {
            if (S.empty())
                cout << -1 << '\n';
            else
            {
                cout << S.top() << '\n';
                S.pop();
            }
        }
        else if (c == "size")
            cout << S.size() << '\n';
        else if (c == "empty")
            cout << (int)S.empty() << '\n';
        else
        { // top
            if (S.empty())
                cout << -1 << '\n';
            else
                cout << S.top() << '\n';
        }
    }
}

// answer with custom stack
const int MX = 1000005;
int dat[MX];
int pos;

void push(int val)
{
    dat[pos++] = val;
}

void pop()
{
    pos--;
}

int top()
{
    return dat[pos - 1];
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    while (n--)
    { // n번 반복
        string c;
        cin >> c;
        if (c == "push")
        {
            int t;
            cin >> t;
            push(t);
        }
        else if (c == "pop")
        {
            if (pos == 0)
                cout << -1 << '\n';
            else
            {
                cout << top() << '\n';
                pop();
            }
        }
        else if (c == "size")
            cout << pos << '\n';
        else if (c == "empty")
            cout << (int)(pos == 0) << '\n';
        else
        { // top
            if (pos == 0)
                cout << -1 << '\n';
            else
                cout << top() << '\n';
        }
    }
}