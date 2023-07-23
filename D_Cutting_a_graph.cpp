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
#define fixTo(x, y) cout << fixed << setprecision(y) << x

using namespace std;
const ll N = 500010, M = 500, Mod = 1e9 + 7, K = 21, SQ = 316, T = 1440;
int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};
int p[N], r[N] = {0};
ll siz[N] = {0};
ll mn[N] = {N};
ll mx[N] = {-1};

int get(int x)
{
    R p[x] == x ? x : get(p[x]);
}

void uni(int a, int b)
{
    a = get(a);
    b = get(b);
    if (a != b)
    {
        if (siz[a] > siz[b])
        {
            swap(a, b);
        }
        p[a] = b;
        siz[b] += siz[a];
        mn[b] = min(mn[a], mn[b]);
        mx[b] = max(mx[a], mx[b]);
    }
}
void cut(int a, int b)
{
    int aa = get(a);
    int bb = get(b);
    if (aa == bb)
    {
        p[a] = a;
        p[b] = b;
        if (siz[a] > siz[b])
        {
            swap(a, b);
        }
        p[a] = b;
        siz[b] += siz[a];
    }
}
void solve()
{
    ll n, m, k, u, v;
    cin >> n >> m >> k;
    for (int i = 1; i <= n; i++)
    {
        p[i] = i;
    }
    while (m--)
    {
        cin >> u >> v;
        uni(u, v);
    }
    while (k--)
    {
        string type;
        cin >> type >> u >> v;
        if (type == "ask")
        {
            u = get(u);
            v = get(v);
            if (u == v)
            {
                yes
            }
            else
            {
                no
            }
        }
        else
        {
            cut(u, v);
        }
    }
}
int main()
{
    SPEED;
    // Test
    solve();
    R 0;
}