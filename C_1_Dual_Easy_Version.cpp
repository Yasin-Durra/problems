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
    ll n;
    cin >> n;
    ll a[n + 1];
    ll v[n + 1];
    forin(1, n + 1, a);
    for (int i = 1; i <= n; i++)
    {
        v[i] = a[i];
    }
    vector<pll> res;
    for (int t = 1; t <= 31; t++)
    {
        for (int i = 2; i <= n; i++)
        {
            // dbg(a[i]-a[i+1]);
            if (a[i] - a[i - 1] < 0)
            {
                ll dif = a[i] - a[i - 1];
                ll mx = -21, mxi = -1;
                for (int j = 1; j <= n; j++)
                {
                    if (mx < a[j])
                    {
                        mx = a[j];
                        mxi = j;
                    }
                }
                a[i] += mx;
                res.pb({i, mxi});
                break;
            }
        }
    }
    bool ok = 1;
    for (int i = 2; i <= n; i++)
    {
        if (a[i] - a[i - 1] < 0)
        {
            ok = 0;
        }
    }
    if (ok)
    {
        cout << res.sz nl;
        for (int i = 0; i < res.sz; i++)
        {
            cout << res[i].fr << " " << res[i].sc nl;
        }
    }
    else
    {
        res.clear();
        for (int t = 1; t <= 31; t++)
        {
            for (int i = n; i >= 2; i--)
            {
                // dbg(a[i]-a[i+1]);
                if (v[i] - v[i - 1] < 0)
                {
                    ll dif = v[i] - v[i - 1];
                    ll mx = 21, mxi = -1;
                    for (int j = 1; j <= n; j++)
                    {
                        if (mx > v[j])
                        {
                            mx = v[j];
                            mxi = j;
                        }
                    }
                    v[i - 1] += mx;
                    res.pb({i - 1, mxi});
                    break;
                }
            }
        }
        bool ok = 1;
        for (int i = 2; i <= n; i++)
        {
            if (v[i] - v[i - 1] < 0)
            {
                ok = 0;
            }
        }
        if (ok)
        {
            cout << res.sz nl;
            for (int i = 0; i < res.sz; i++)
            {
                cout << res[i].fr << " " << res[i].sc nl;
            }
        }
    }
}
int main()
{
    SPEED;
    Test
    solve();
    R 0;
}