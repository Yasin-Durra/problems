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
vector<int> adj[N];
vector<int> goal(N), init(N), res;
bool visited[N] = {0};
void dfs(int x,bool odd,bool even)
{
    visited[x] = true;
    if (init[x]^odd != goal[x])
    {
        res.pb(x);
        odd=1-odd;
    }
    for (auto i : adj[x])
    {
        if (!visited[i])
        {
            dfs(i,even,odd);
        }
    }
}
void solve()
{
    int n, u, v;
    cin >> n;
    for (int i = 1; i < n; i++)
    {
        cin >> u >> v;
        adj[u].pb(v);
        adj[v].pb(u);
    }
    for (int i = 1; i <= n; i++)
    {
        cin >> init[i];
    }
    for (int i = 1; i <= n; i++)
    {
        cin >> goal[i];
    }
    dfs(1,0,0);
    cout << res.size() << endl;
    for (int i = 0; i < res.sz; i++)
    {
        cout << res[i] nl;
    }
}
int main()
{
    SPEED;
    solve();
    R 0;
}