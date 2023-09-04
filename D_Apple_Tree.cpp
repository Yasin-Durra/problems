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
int dxx[] = {1, -1, 0, 0, -1, 1, -1, 1};
int dyy[] = {0, 0, 1, -1, -1, 1, 1, -1};
vector<int> adj[N];
ll ch[N];
ll p[N];
bitset<N> vis = 0;
set<ll> st;
ll dfs(ll x, ll pa)
{
    vis[x] = 1;
    p[x] = pa;
    // dbga(adj[x]);
    if (adj[x].size() == 1 && x != 1)
    {
        // dbg(x);
        R ch[x] = 1;
    }
    ll chs = 0;
    for (auto i : adj[x])
    {
        if (!vis[i])
        {
            chs+=dfs(i, x);
        }
    }
    R ch[x]=chs;
}
void solve()
{
    ll n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        adj[i].clear();
        vis[i] = 0;
        ch[i] = 0;
        p[i] = 0;
    }
    st.clear();
    int u, v;
    for (int i = 1; i < n; i++)
    {
        cin >> u >> v;
        adj[u].pb(v);
        adj[v].pb(u);
    }
    dfs(1, -1);
    // if (st.sz == 1)
    // {
    //     st.insert(1);
    // }
    // while (st.sz)
    // {
    //     ll i = *(st.begin());
    //     st.erase(i);
    //     while (p[i] != -1)
    //     {
    //         i = p[i];
    //         ch[i]++;
    //     }
    // }

    ll q;
    cin >> q;
    while (q--)
    {
        cin >> u >> v;
        cout << ch[u] * ch[v] nl;
    }
    // line
}
int main()
{
    SPEED;
    Test
    solve();
    R 0;
}