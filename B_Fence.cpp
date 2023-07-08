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
    ll n, k, a, an;
    ll ans = OO;
    cin >> n >> k;
    vector<ll> ps(n + 1);
    for (ll i = 1; i <= n; i++)
    {
        cin >> a;
        ps[i] = ps[i - 1] + a;
    }
    for (ll i = 1; i <= n - k + 1; i++)
    {
        // deb(ps[i + k-1] - ps[i - 1]);
        if (ans > ps[i + k - 1] - ps[i - 1])
        {
            an = i;
        }
        ans = min(ans, ps[i + k - 1] - ps[i - 1]);
    }
    cout << an;
}
int main()
{
    SPEED;
    solve();
    R 0;
}