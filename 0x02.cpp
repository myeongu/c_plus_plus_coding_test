// https://www.acmicpc.net/problem/10871
// my answer
#include <iostream>

int main(int argc, char const *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int n, x, i, c;
    std::cin >> n >> x;
    for (i = 0; i < n; i++)
    {
        std::cin >> c;
        if (c < x)
        {
            std::cout << c << ' ';
        }
    }
    return 0;
}

// ideal answer
#include <bits/stdc++.h>

int n, x, a[100005];
int main(void)
{
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    std::cin >> n >> x;
    for (int i = 0; i < n; i++)
    {
        std::cin >> a[i];
        if (a[i] < x)
            std::cout << a[i] << ' ';
    }
    return 0;
}