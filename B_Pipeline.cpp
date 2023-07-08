#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pb push_back
#define mpa make_pair
#define fr first
#define sc second
#define ever (;;)
#define pii pair<int, int>
#define pll pair<ll, ll>
#define SPEED                \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0)
#define sz size()
#define deb(a) cout << #a << ':' << ' ' << a << '\n'
#define dbga(a)           \
    for (auto x : a)      \
        cout << x << ' '; \
    cout << endl;
#define all(x) x.begin(), x.end()
#define OO 1e18
#define PI 3.14159265358979323846
#define R return
#define Test   \
    int TT;    \
    cin >> TT; \
    for (int T = 1; T <= TT; T++)
#define unq(vec) vec.resize(distance(vec.begin(), unique(all(vec))));
#define line cout << "______________________" << endl;
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define clr(m, val) memset(m, val, sizeof m)
#define fixTo(x, y) cout << fixed << setprecision(y) << x

using namespace std;
const ll N = 500010, M = 2100, Mod = 998244353;
ull sm(ull n)
{
    R((n * (n + 1)) / 2);
}
ull sm(ull s, ull e)
{
    if (s <= 1)
    {
        R sm(e);
    }

    R(sm(e) - sm(s - 1));
}
ull ms(ull n, ull k)
{
    ull st = 1, en = k, m, s;
    while (st < en)
    {
        m = (st + en) / 2;
        s = sm(m, k);
        if (s == n)
        {
            R(k - m + 1);
        }
        if (s > n)
        {
            st = m + 1;
        }
        else
        {
            en = m;
        }
    }
    R(k - st + 2);
}
void solve()
{
    ull n, k;
    cin >> n >> k;
    if (n == 1)
    {
        cout << 0;
    }
    else if (n <= k)
    {
        cout << 1;
    }
    else
    {
        --n;
        --k;
        if (sm(k) < n)
        {
            cout << "-1";
        }
        else
        {
            cout << ms(n,k);
        }
    }
}
int main()
{
    SPEED;
    solve();
    R 0;
}