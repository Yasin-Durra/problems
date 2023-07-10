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
bool vis[N] = {0};
ll a[N];
ll c[N] = {0};
void dfs(ll x)
{
    // deb(x);
    for (auto i : adj[x])
    {
        if (adj[i].sz == 0)
        {
            c[x]++;
        }

        dfs(i);
    }
}

void solve()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {

        adj[i].clear();
    }
    ll v;
    for (int i = 1; i < n; i++)
    {
        cin >> v;
        v--;
        adj[v].pb(i);
        vis[v] = 1;
        // adj[v].pb(u);
    }
    dfs(0);
    bool ok = 1;
    for (int i = 0; i < n; i++)
    {
        if (vis[i])
        {
            if (c[i] < 3 && c[i] >= 0)
            {
                ok=0;
            }
        }
        if (c[i] < 3 && c[i] > 0)
        {
            ok = 0;
        }
    }

    if (ok)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
}
int main()
{
    SPEED;
    solve();
    R 0;
}