// https://www.acmicpc.net/problem/10845
// my answer
#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    queue<int> Q;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        if (s == "push")
        {
            int x;
            cin >> x;
            Q.push(x);
        }
        else if (s == "size")
        {
            cout << Q.size() << '\n';
        }
        else
        {
            if (s == "empty")
            {
                if (Q.empty())
                    cout << 1 << '\n';
                else
                    cout << 0 << '\n';
            }
            else
            {
                if (Q.empty())
                    cout << -1 << '\n';
                else
                {
                    if (s == "pop")
                    {
                        cout << Q.front() << '\n';
                        Q.pop();
                    }
                    else if (s == "front")
                        cout
                            << Q.front() << '\n';
                    else if (s == "back")
                        cout
                            << Q.back() << '\n';
                }
            }
        }
    }
    return 0;
}

// answer with STL
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    queue<int> Q;
    int n;
    cin >> n;
    while (n--)
    {
        string q;
        cin >> q;
        if (q == "push")
        {
            int val;
            cin >> val;
            Q.push(val);
        }
        else if (q == "pop")
        {
            if (Q.empty())
                cout << -1 << '\n';
            else
            {
                cout << Q.front() << '\n';
                Q.pop();
            }
        }
        else if (q == "size")
        {
            cout << Q.size() << '\n';
        }
        else if (q == "empty")
        {
            cout << Q.empty() << '\n';
        }
        else if (q == "front")
        {
            if (Q.empty())
                cout << -1 << '\n';
            else
                cout << Q.front() << '\n';
        }
        else
        { // back
            if (Q.empty())
                cout << -1 << '\n';
            else
                cout << Q.back() << '\n';
        }
    }
}

// answer with custom queue
#include <bits/stdc++.h>
using namespace std;

const int MX = 1000005;
int dat[MX];
int head, tail;

void push(int x)
{
    dat[tail++] = x;
}

void pop()
{
    head++;
}

int front()
{
    return dat[head];
}

int back()
{
    return dat[tail - 1];
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    while (n--)
    {
        string q;
        cin >> q;
        if (q == "push")
        {
            int val;
            cin >> val;
            push(val);
        }
        else if (q == "pop")
        {
            if (tail == head)
                cout << -1 << '\n';
            else
            {
                cout << front() << '\n';
                pop();
            }
        }
        else if (q == "size")
        {
            cout << tail - head << '\n';
        }
        else if (q == "empty")
        {
            cout << (tail == head) << '\n';
        }
        else if (q == "front")
        {
            if (tail == head)
                cout << -1 << '\n';
            else
                cout << front() << '\n';
        }
        else
        { // back
            if (tail == head)
                cout << -1 << '\n';
            else
                cout << back() << '\n';
        }
    }
}