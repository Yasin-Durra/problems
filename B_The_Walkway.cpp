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

void solve()
{
    ll n, m, d;
    cin >> n >> m >> d;
    vector<long long> v(m);
    for (int i = 0; i < m; i++)
    {
        cin >> v[i];
        v[i]--;
    }
    sort(all(v));
    if (v[0] != 0)
    {
        if (v[m - 1] != n - 1)
        {
            v.push_back(n - 1);
        }
        v.push_back(0);
    }
    if (v[m - 1] != n - 1)
    {
        v.push_back(n - 1);
    }
    sort(all(v));
    ll ans = v.sz;
    for (int i = 1; i < v.sz; i++)
    {
        ans += (v[i] - v[i - 1]) / d;
    }
    ll mn = OO, j = 0;
    for (int i = 1; i < v.sz - 1; i++)
    {
        if ((ans - ((v[i] - v[i - 1]) / d) + ((v[i + 1] - v[i - 1]) / d)) < mn)
        {
            mn = (ans - (v[i] - v[i - 1]) / d + (v[i + 1] - v[i - 1]) / d);
            j = i;
        }
    }
    cout << mn << " " << j nl;
}
int main()
{
    SPEED;
    Test
    solve();
    R 0;
}