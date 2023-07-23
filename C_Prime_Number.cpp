#include <bits/stdc++.h>
#define ll long long
#define int long long
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
#define dbg(a) cout << #a << ':' << ' ' << a << '\n'
#define dbga(a)           \
    for (auto x : a)      \
        cout << x << ' '; \
    cout << endl;
#define forin(i, n, a)          \
    for (int j = i; j < n; j++) \
        cin >> a[j];
#define all(x) x.begin(), x.end()
#define OO 1e18
#define PI 3.14159265358979323846
#define MM 1000000007
#define FO(name) freopen(name, "r", stdin);
#define R return
#define Test   \
    int TT;    \
    cin >> TT; \
    for (int T = 1; T <= TT; T++)
#define unq(vec) vec.resize(distance(vec.begin(), unique(all(vec))));
#define line cout << "______________________" << endl;
#define nl << "\n"
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define clr(m, val) memset(m, val, sizeof m)
#define btwn(v, a, b) (v <= b && v >= a)
#define fixTo(x, y) cout << fixed << setprecision(y) << x

using namespace std;
const ll N = 500010, M = 500, Mod = 1e9 + 7, K = 21, SQ = 316, T = 1440;
int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};
int mul(int x, int y)
{
    return (ll)x * y % Mod;
}
int sum(int x, int y)
{
    if ((x += y) >= Mod)
        x -= Mod;
    return x;
}
int sub(int x, int y)
{
    if ((x -= y) < 0)
        x += Mod;
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
    return po(x, Mod - 2);
}
ll gcd(int x, int y)
{
    if (y == 0)
        R x;
        gcd(y,x%y);
}
void solve()
{
    ll n, x;
    ll s = 0, sm = 0;
    cin >> n >> x;
    ll a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sm = sum(sm, a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        s = sum(s, po(x, sm - a[i]));
    }
    dbg(s);
    // dbg(sm);
    dbg(po(x, sm));
    cout << gcd(s, po(x, sm)) << endl;
}
int32_t main()
{
    SPEED;
    // Test
    solve();
    R 0;
}