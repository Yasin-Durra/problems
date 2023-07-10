#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
// #define pb push_back
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
void solve()
{
    string s;
    ll a[100010], c[100010], n;
    ll r, ans = 0;
    cin >> n >> r;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (ll i = 0; i < n; i++)
    {
        cin >> c[i];
    }
    ll m;
    ll st = 1, e = 2000000000;
    while (st <= e)
    {
        m = (st + e + 1) / 2;
        // deb(st);
        // deb(m);
        // deb(e);
        ull co = 0;
        for (ll i = 0; i < n; i++)
        {
            co += (((a[i] * m) - c[i]) >= 0) ? ((a[i] * m) - c[i]) : 0;
            // co += (((cs * m) - ns) >= 0) ? ((cs * m) - ns) * ps : 0;
            // co += (((cc * m) - nc) >= 0) ? ((cc * m) - nc) * pc : 0;
        }
        // deb(co);
        if (co < r)
        {
            st = m + 1;
            ans = max(m, ans);
        }
        else if (co > r)
        {
            e = m - 1;
        }
        else
        {

            ans = max(m, ans);
            break;
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