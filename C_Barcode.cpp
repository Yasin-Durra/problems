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

ll n, m, x, y;
ll a[T] = {0};
ll dp[T][T][3];
ll cost(ll i, ll pr)
{
    // pr^=1;
    R((a[i] * pr) + ((n - a[i]) * !pr));
}
ll ans(ll i, ll w, ll pr)
{
    if (i == m)
    {
        if (w > y || w < x)
        {
            R OO;
        }
        R 0;
    }
    // dbg(w);
    if (dp[i][w][pr] != -1)
    {
        R dp[i][w][pr];
    }
    ll d = OO;
    if (i == 0 || (pr == 0 && w + 1 <= y) || (pr == 1 && w >= x))
    {
        d = n - a[i] + ans(i + 1, (pr == 0) ? w + 1 : 1, 0);
    }
    ll h = OO;
    if (i == 0 || (pr == 1 && w + 1 <= y) || (pr == 0 && w >= x))
    {
        h =a[i] + ans(i + 1, (pr == 1) ? w + 1 : 1, 1);
    }
    R dp[i][w][pr]=min(h,d);
    // if (w < x)
    // {
    //     R dp[i][w][pr] = ans(i + 1, w + 1, pr) + cost(i, pr);
    // }
    // else if (w >= y)
    // {
    //     // no
    //     R dp[i][w][pr] == ans(i + 1, 1, !pr) + cost(i, !pr);
    // }
    // else if (w + 1 <= y && w >= x)
    // {
    //     // yes
    //     R dp[i][w][pr] = min(ans(i + 1, w + 1, pr) + cost(i, pr),
    //                          ans(i + 1, 1, !pr) + cost(i, !pr));
    // }
    // else
    // {
    //     no;
    // }
}
void solve()
{
    cin >> n >> m >> x >> y;
    char c;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> c;
            if (c == '.')
                a[j]++;
        }
    }
    // for (int i = 1; i <= m; i++)
    // {
    //     dbg(cost(i,0));
    //     dbg(cost(i,1));
    // }
    clr(dp, -1);

    cout << ans(0, 0, 2);
}
int main()
{
    SPEED;
    // Test
    solve();
    R 0;
}