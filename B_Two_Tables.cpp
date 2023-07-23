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
double dis(ll x, ll y)
{
    R sqrt(x * x + y * y);
}
void solve()
{
    ll H, W, x1, y1, x2, y2, w, h;
    cin >> W >> H >> x1 >> y1 >> x2 >> y2 >> w >> h;
    ll x3 = x2, y3 = y1, x4 = x1, y4 = y2;
    ll ans1 = OO;

    if (h + (y2 - y1) <= H)
    {
        ans1 = min(ans1, (h - y1)<0?0:(h - y1));
        ans1 = min(ans1, h - (H - y2) < 0 ? 0 : h - (H - y2));
    }
    if (w + (x2 - x1) <= W)
    {
        ans1 = min(ans1, (w - x1)<0?0:(w - x1));
        ans1 = min(ans1, w - (W - x2) < 0 ? 0 : w - (W - x2));
    }
    /*Result*/
    if (ans1 == OO)
    {
        cout << -1 nl;
    }
    else
    {
        cout << ans1 nl;
    }
}
int main()
{
    SPEED;
    Test
    solve();
    R 0;
}