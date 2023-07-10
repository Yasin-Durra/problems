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
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define clr(m, val) memset(m, val, sizeof m)
#define fixTo(x, y) cout << fixed << setprecision(y) << x

using namespace std;
const ll N = 500010, M = 500, Mod = 1e9 + 7, K = 21, SQ = 316, T = 1440;
int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};

vector<ll> adj[N];
bool vis[N];
ll a[N];
ll dfs(ll x)
{
    vis[x]=1;
    ll c = MM;
    for (auto i : adj[x])
    {
        if (!vis[i])
        {
            c = min(c, dfs(i));
        }
    }
    R min(c,a[x]);
}

void solve()
{
    int n, m, x, y;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        adj[i].clear();
        vis[i] = 0;
    }
    ll u, v;
    for (int i = 0; i < m; i++)
    {
        cin >> u >> v;
        u--, v--;
        adj[u].pb(v);
        adj[v].pb(u);
    }
    ll acc = 0;
    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            acc += dfs(i);
        }
    }
    cout << acc;
}
int main()
{
    SPEED;
    solve();
    R 0;
}