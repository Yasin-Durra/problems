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
bool vis[200010];
ll ans[200010];
ll a[200010];
ll cnt = 0;
ll n;
void dfs(ll i)
{
    if (vis[i])
    {
        R;
    }
    if (i>n)
    {
        R;
    }
    cnt++;
    vis[i]=1;
    dfs(a[i]);
    ans[i] = cnt;
}
void solve()
{
    cin >> n;
    for (ll i = 1; i <= n; i++)
    {
        cin >> a[i];
        vis[i] = 0;
    }
    for (ll i = 1; i <= n; i++)
    {
        cnt = 0;
        dfs(i);
    }
    for (ll i = 1; i <= n; i++)
    {
        cout << ans[i]<<' ';
    }
    cout<<'\n';
}
int main()
{
    SPEED;
    Test
    solve();
    R 0;
}