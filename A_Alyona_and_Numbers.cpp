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
#define all(x) x.begin(), x.end()
#define OO 1e18
#define PI 3.14159265358979323846
#define R return
#define Test   \
    int TT;    \
    cin >> TT; \
    for (int T = 1; T <= TT; T++)
#define unq(vec) vec.resize(distance(vec.begin(), unique(all(vec))));
#define fixTo(x, y) cout << fixed << setprecision(y) << x

using namespace std;
const ll N = 500010, M = 2100, Mod = 998244353;
void solve()
{
    ll x, y, a[5] = {0}, b[5] = {0};
    cin >> x >> y;
    for (int i = 1; i <= x; i++)
    {
        a[i % 5]++;
    }
    for (int i = 1; i <= y; i++)
    {
        b[i % 5]++;
    }
    ll ans = a[0] * b[0];
    ans += a[1] * b[4];
    ans += a[2] * b[3];
    ans += a[3] * b[2];
    ans += a[4] * b[1];
    cout << ans;
}
int main()
{
    SPEED;
    solve();
    R 0;
}