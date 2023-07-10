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
void solve()
{
    ll n, k;
    cin >> n;
    ll p = 0, v = 0, s = 1, e = n, t = 0, m = 0, ans = n, d = 0;
    while (s <= e)
    {

        p = 0;
        v = 0;
        t = n;
        d = 0;
        m = (s + e) / 2;
        ll sum = 0;
         while (t > 0)
        {
            // deb(t);
            ll ad = min(t, m);
            v += ad;
            t -= ad;
            t -= t/10;
        }
        if (v*2 >=  n)
        {
            e = m - 1;
            ans = m;
        }
        else
        {
            s = m + 1;
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