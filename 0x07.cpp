// https://www.acmicpc.net/problem/10866
// my answer
#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    deque<int> DQ;
    int n;
    cin >> n;
    while (n--)
    {
        string op;
        cin >> op;
        if (op == "push_front")
        {
            int x;
            cin >> x;
            DQ.push_front(x);
        }
        else if (op == "push_back")
        {
            int x;
            cin >> x;
            DQ.push_back(x);
        }
        else if (op == "size")
        {
            cout << DQ.size() << '\n';
        }
        else if (op == "empty")
        {
            cout << DQ.empty() << '\n';
        }
        else
        {
            if (DQ.empty())
                cout << -1 << '\n';
            else
            {
                if (op == "pop_front")
                {
                    cout << DQ.front() << '\n';
                    DQ.pop_front();
                }
                else if (op == "pop_back")
                {
                    cout << DQ.back() << '\n';
                    DQ.pop_back();
                }
                else if (op == "front")
                {
                    cout << DQ.front() << '\n';
                }
                else if (op == "back")
                {
                    cout << DQ.back() << '\n';
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

    deque<int> DQ;
    int n;
    cin >> n;
    while (n--)
    {
        string q;
        cin >> q;
        if (q == "push_back")
        {
            int val;
            cin >> val;
            DQ.push_back(val);
        }
        else if (q == "push_front")
        {
            int val;
            cin >> val;
            DQ.push_front(val);
        }
        else if (q == "pop_front")
        {
            if (DQ.empty())
                cout << -1 << '\n';
            else
            {
                cout << DQ.front() << '\n';
                DQ.pop_front();
            }
        }
        else if (q == "pop_back")
        {
            if (DQ.empty())
                cout << -1 << '\n';
            else
            {
                cout << DQ.back() << '\n';
                DQ.pop_back();
            }
        }
        else if (q == "size")
            cout << DQ.size() << '\n';
        else if (q == "empty")
            cout << DQ.empty() << '\n';
        else if (q == "front")
        {
            if (DQ.empty())
                cout << -1 << '\n';
            else
                cout << DQ.front() << '\n';
        }
        else
        { // back
            if (DQ.empty())
                cout << -1 << '\n';
            else
                cout << DQ.back() << '\n';
        }
    }
}

// answer with custom queue
#include <bits/stdc++.h>
using namespace std;

const int MX = 1000005;
int dat[2 * MX + 1];
int head = MX, tail = MX;

void push_front(int x)
{
    dat[--head] = x;
}
void push_back(int x)
{
    dat[tail++] = x;
}
void pop_front()
{
    head++;
}
void pop_back()
{
    tail--;
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
        if (q == "push_back")
        {
            int val;
            cin >> val;
            push_back(val);
        }
        else if (q == "push_front")
        {
            int val;
            cin >> val;
            push_front(val);
        }
        else if (q == "pop_front")
        {
            if (tail == head)
                cout << -1 << '\n';
            else
            {
                cout << front() << '\n';
                pop_front();
            }
        }
        else if (q == "pop_back")
        {
            if (tail == head)
                cout << -1 << '\n';
            else
            {
                cout << back() << '\n';
                pop_back();
            }
        }
        else if (q == "size")
            cout << tail - head << '\n';
        else if (q == "empty")
            cout << (tail == head) << '\n';
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