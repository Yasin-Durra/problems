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

int n, m, u, v, c, cnt = 0;
vector<int> adj[N];
set<int> st;
vector<int> vec(N);
bool vis[N] = {0};
void dfs(int x, int c)
{

    // deb(x);
    // deb(c);
    if (vis[x])
    {
        R;
    }
    vis[x] = 1;
    if (c > m)
    {
        R;
    }
    bool leaf=1;
    for (auto i : adj[x])
    {
        // deb(x);
        if (!vis[i])
        {
            leaf=0;
        }
        
        if (vec[i])
        {
            // deb(x);
            dfs(i, c + vec[i]);
        }
        else
        {
            // deb(x);
            dfs(i, vec[i]);
        }
    }
    if (leaf)
    {
        // cout << "leaf\n";
        // deb(x);
        // deb(c);
        if (c <= m)
            cnt++;
        ;
        R;
    }
}
void solve()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        cin >> u >> v;
        u--, v--;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    // dbga(adj[0]);
    dfs(0, vec[0]);
    cout << cnt << "\n";
}

int main()
{
    SPEED;
    solve();
    R 0;
}