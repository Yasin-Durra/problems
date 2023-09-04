#include <bits/stdc++.h>
#define ll long long
#define SPEED                \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0)
using namespace std;
int main()
{
    SPEED;
    ll m, b, i, mx = 0;
    cin >> m >> b;
    for (int j = b; j >= 0; j--)
    {
        i = m * (b - j);
        mx = max(mx, ((i + 1) * j * (j + 1) / 2) + ((j + 1) * i * (i + 1) / 2));
    }
    cout << mx;
    return 0;
}