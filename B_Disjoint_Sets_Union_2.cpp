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

void solve()
{
    int m, n, u, v;
    string s;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        p[i] = i;
        mn[i]=i;
        mx[i]=i;
        siz[i]++;
    }
    for (int i = 0; i < m; i++)
    {
        cin >> s;
        if (s == "union")
        {
            cin >> u >> v;
            uni(u, v);
        }
        else
        {

            cin >> v;
            v=get(v);
            cout<<mn[v]<<' '<<mx[v]<<' '<<siz[v]<<"\n";
        }
    }
}
int main()
{
    SPEED;
    solve();
    R 0;
}
