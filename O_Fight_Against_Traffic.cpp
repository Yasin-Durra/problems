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
int n, m, u, v, s, t;
int p[N][2];
vector<vector<int>> vec(N);
int mx = 1;
void dfs(int a, int id)
{
    for (int i = 1; i <= n; i++)
    {
        p[i][id] = N;
    }
    p[a][id] = 0;

    queue<ll> Q;
    Q.push(a);

    while (!Q.empty())
    {
        int Cur = Q.front();
        Q.pop();

        for (auto to : vec[Cur])
        {
            if (p[to][id] > p[Cur][id] + 1)
            {

                p[to][id] = p[Cur][id] + 1;
                Q.push(to);
            }
        }
    }
}

void solve()
{
    cin >> n >> m >> s >> t;
    vec.resize(n + 1);
    map<pii, bool> E;

    for (int i = 1; i <= m; i++)
    {
        cin >> u >> v;
        vec[u].push_back(v);
        vec[v].push_back(u);
        E[{v, u}] = 1;
        E[{u, v}] = 1;
    }
    dfs(s, 0);
    dfs(t, 1);
    int k = p[t][0], ans = 0;

    for (int i = 1; i <= n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            if (E[{i, j}])
            {
                continue;
            }

            int d1 = p[i][0] + p[j][1] + 1;
            int d2 = p[i][1] + p[j][0] + 1;
            if (d1 >= k && d2 >= k)
            {
                ans++;
            }
        }
    }

    cout << ans;
}
int main()
{
    SPEED;
    solve();
    R 0;
}