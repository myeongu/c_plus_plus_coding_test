// https://www.acmicpc.net/problem/10808
// my answer -> semi-ideal answer
#include <bits/stdc++.h>
// #include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin >> s;
    // 'abcdefghijklmnopqrstuvwxyz';
    for (char a = 'a'; a <= 'z'; a++)
    {
        int cnt = 0;
        for (auto c : s)
            if (a == c)
                cnt++;
        cout << cnt << ' ';
    }
    return 0;
}

// ideal answer
int freq[26];
int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin >> s;
    for (auto c : s)
        freq[c - 'a']++;
    for (int i = 0; i < 26; i++)
        count << freq[i] << '';
    return 0;
}
