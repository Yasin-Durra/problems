#include <bits/stdc++.h>
using namespace std;
#define F first
#define S second
#define p1 2 * p
#define p2 p1 + 1
#define ll long long
#define pb push_back
#define LFT p1, L, Mid
#define pf push_front
#define Mid ((L + R) / 2)
#define RGT p2, Mid + 1, R
#define pi pair<int, int>
#define pii pair<pi, pi>
#define deb(x) cout << #x << "=" << x << endl
#define go ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
const int mod = 1e9 + 7;
const int N = 100100;
int fa[N]; // Calculate fa
int mul(int x, int y)
{
    return (ll)x * y % mod;
}
int sum(int x, int y)
{
    if ((x += y) >= mod)
        x -= mod;
    return x;
}
int sub(int x, int y)
{
    if ((x -= y) < 0)
        x += mod;
    return x;
}
int po(int x, int y)
{
    if (!y)
        return 1;
    if (y & 1)
        return mul(x, po(x, y - 1));
    int z = po(x, y / 2);
    return mul(z, z);
}
int inv(int x)
{
    return po(x, mod - 2);
}
int C(int x, int y)
{
    if (y > x)
        return 0;
    return mul(mul(fa[x], inv(fa[y])), inv(fa[x - y]));
}
int t;
int ans[N];
int main()
{
    go;
    fa[0] = 1;
    for (int i = 1; i < N; i++)
        fa[i] = mul(fa[i - 1], i);
    for (int i = 1; i < N; i++)
        for (int j = i + i; j < N; j += i)
        {
            ans[j]++;
        }
    for (int i = 1; i < N; i++)
        ans[i] = sum(ans[i], ans[i - 1]);
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int two = mod / 2;
        cout << mul(mul(fa[n], inv(2)), ans[n]) << '\n';
    }
    return 0;
}
