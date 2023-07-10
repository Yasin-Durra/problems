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
#define fixTo(x, y) cout << fixed << setprecision(y) << x

using namespace std;
const ll N = 500010, M = 500, Mod = 1e9 + 7, K = 21, SQ = 316, T = 1440;
int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};
ll a, b, n, W;
vector<ll> w, v;
vector<vector<ll>> dp;
ll ans(ll i, ll j)
{
    if (i == 0 || j == 0)
    {
        R 0;
    }
    if (dp[i][j] != -1)
    {
        R dp[i][j];
    }
    if (w[i] > j)
    {
        dp[i][j] = ans(i - 1, j);
    }
    else
    {
        dp[i][j] = max(ans(i - 1, j - w[i]) + v[i], ans(i - 1, j));
    }
    R dp[i][j];
}
void solve()
{
    cin >> n >> W;
    w.pb(0);
    v.pb(0);
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        w.pb(a);
        v.pb(b);
    }
    dp.resize(n + 1);
    for (int i = 0; i <= n; i++)
    {
        dp[i].resize(W + 1);
        fill(dp[i].begin(), dp[i].end(), -1);
    }
    cout<<(ans(n, W));
}
int main()
{
    SPEED;
    solve();
    R 0;
}