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
#define SPEED                 \
    ios ::sync_with_stdio(0); \
    cin.tie(0);               \
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

ll n, q;
vector<ll> v, a;
set<ll> p;

void add(ll i, ll x)
{
    // dbg(i);
    // dbg(a[i]);
    // dbg(v[i]);
    if (a[i] == v[i])
    {
        auto pr = p.upper_bound(i);
        if (pr != p.end())
        {
            add(*pr, x);
        }
    }
    else if (a[i] - v[i] < x)
    {
        x -= (a[i] - v[i]);
        v[i] = a[i];
        p.erase(i);
        auto pr = p.upper_bound(i);
        if (pr != p.end())
        {
            add(*pr, x);
        }
    }
    else
    {
        v[i] += x;
    }

    // dbg(i);
    // dbg(a[i]);
    // dbg(v[i]);
    // line
}

void solve()
{
    cin >> n;
    a.resize(n + 2);
    v.resize(n + 2);
    for (int i = 1; i <= n; i++)
    {
        p.insert(i + 1);
        cin >> a[i];
        v[i] = 0;
    }
    ll op, x, i;
    Test
    {
        cin >> op;
        if (op == 1)
        {
            cin >> i >> x;
            add(i, x);
            // dbga(p);
        }
        else
        {
            cin >> i;
            cout << v[i] nl;
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
/*
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
#define sz siz()
#define dbg(a) cout << #a << ':' << ' ' << a << '\n'
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
#define unq(vec) vec.resiz(distance(vec.begin(), unique(all(vec))));
#define line cout << "______________________" << endl;
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define clr(m, val) memset(m, val, sizof m)
#define fixTo(x, y) cout << fixed << setprecision(y) << x

using namespace std;
const ll N = 500010, M = 2100, Mod = 998244353;
int p[N], r[N] = {0};
ll siz[N] = {0};
ll v[N], a[N];

int get(int x)
{
    R p[x] == x ? p[x] : get(p[x]);
}

void uni(int a, int b)
{
    a = get(a);
    b = get(b);
    if (a != b)
    {
        p[a] = b;
    }
    // if (a != b)
    // {
    //     if (siz[a] > siz[b])
    //     {
    //         swap(a, b);
    //     }
    //     p[a] = b;
    //     siz[b] += siz[a];
    //     mn[b] = min(mn[a], mn[b]);
    //     mx[b] = max(mx[a], mx[b]);
    // }
}
void add(ll u, ll y)
{
    // dbg(u);
    // dbg(y);
    u = get(u);
    if (a[u] - v[u] > y)
    {
        v[u] += y;
        R;
    }
    else if (a[u] - v[u] == y)
    {
        v[u] = a[u];
        uni(u, u + 1);
        R;
    }
    else
    {
        y = y - (a[u] - v[u]);
        v[u] = a[u];
        uni(u, u + 1);
    }
    u = get(u);
    add(u, y);
}

void solve()
{
    int m, n, u, y;
    int s;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        p[i] = i;
        v[i] = 0;
    }
    v[n + 1] = 0;
    a[n + 1] = OO;
    p[n + 1] = n + 1;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> s;
        if (s == 1)
        {
            cin >> u >> y;
            add(u, y);
        }
        else
        {

            cin >> u;
            // u = get(u);
            cout << v[u] << "\n";
        }
    }
}
int main()
{
    SPEED;
    solve();
    R 0;
}
 */