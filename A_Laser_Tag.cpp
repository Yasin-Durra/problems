// Problem: A. Laser Tag
// Contest: Codeforces - SVU-CPC 2022
// URL: https://codeforces.com/group/TQ9GzmR8Bu/contest/386603/problem/A
// Memory Limit: 256 MB
// Time Limit: 2500 ms
//
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
#define answer(x) cout << (x ? "YES\n" : "NO\n")
#define test                 \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);             \
    int T;                   \
    cin >> T;                \
    while (T--)
#define go                   \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0)
#define F first
#define S second
using namespace std;

const int N = 200100;
ll n, q, seg[4 * N], lazy[4 * N];
vector<pair<int, int>> row[N];
void chk(int p, int s, int e)
{
    if (lazy[p] != -1)
    {
        seg[p] = lazy[p] * (e - s + 1);
        if (s != e)
        {
            lazy[2 * p] = lazy[p],
                     lazy[2 * p + 1] = lazy[p];
        }
        lazy[p] = -1;
    }
}
void update(int p, int s, int e, int a, int b, int v)
{
    chk(p, s, e);
    if (b < s || e < a)
        return;
    if (a <= s && e <= b)
    {
        seg[p] = v * (e - s + 1);
        lazy[p] = v;
        return;
    }
    update(2 * p, s, (s + e) / 2, a, b, v);
    update(2 * p + 1, (s + e) / 2 + 1, e, a, b, v);
    seg[p] = seg[2 * p] + seg[2 * p + 1];
}
int gt(int p, int s, int e, int a, int b)
{
    chk(p, s, e);
    if (s >= a && e <= b)
        return seg[p];
    if (s > b || e < a)
        return 0;
    return gt(2 * p, s, (s + e) / 2, a, b) + gt(2 * p + 1, (s + e) / 2 + 1, e, a, b);
}
void solve()
{
    cin >> n >> q;
    for (int i = 1; i <= q; i++)
    {
        int x1, x2, y;
        cin >> x1 >> x2 >> y;
        row[y].push_back({x1, x2});
    }

    for (int i = 1; i <= 4 * n; i++)
        seg[i] = 0,
        lazy[i] = -1;

    update(1, 1, n, 1, n, 1);

    for (int i = 1; i <= n; i++)
        for (auto it : row[i])
            if (gt(1, 1, n, it.F, it.S))
                update(1, 1, n, it.F, it.S, 0),
                    update(1, 1, n, it.F, it.F, 1),
                    update(1, 1, n, it.S, it.S, 1);

    for (int i = 1; i <= n; i++)
        row[i].clear();

    cout << gt(1, 1, n, 1, n) << '\n';
}

int main()
{
    test
    solve();
}
