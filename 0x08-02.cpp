// https://www.acmicpc.net/problem/10799
// my answer
#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    stack<char> S;
    string input;
    cin >> input;
    char before_c = ' ';
    int stick_count = 0;
    for (auto c : input)
    {
        if (c == '(')
        {
            S.push(c);
        }
        else if (c == ')')
        {
            if (before_c == '(') // laser
            {
                S.pop();
                stick_count += S.size();
            }
            else
            {
                stick_count += 1;
                S.pop();
            }
        }
        before_c = c;
    }
    cout << stick_count << '\n';
    return 0;
}

// Ideal anwer
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
string s;
ll ans = 0;
stack<char> st;
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> s;
    int sz = s.length();
    for (int i = 0; i < sz; i++)
    {
        if (s[i] == '(')
            st.push(s[i]);
        else
        {
            if (s[i - 1] == '(')
            {                     // 레이저일 경우
                st.pop();         // 앞에서 막대라고 착각하고 stack에 s[i]를 넣었으므로 pop
                ans += st.size(); // 막대의 개수만큼 ans에 추가
            }
            else
            {             // 막대의 끝일 경우
                st.pop(); // 막대의 개수를 1 감소
                ans++;    // 막대 1개가 절단된 것과 동일한 상황이므로 ans에 1 추가
            }
        }
    }
    cout << ans << "\n";
    return 0;
}

/*
굳이 stack을 쓰지 말고 막대의 개수를 저장할 cnt 변수를 둬서 +1, -1을 하는 방법도 있다.
*/