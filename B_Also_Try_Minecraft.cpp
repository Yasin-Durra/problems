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
    int n, m;
    cin >> n >> m;
    ll a[n + 1];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    int s, t;
    ll ps[n + 1] = {0};
    ll pr[n + 1] = {0};
    ps[0] = 0;
    pr[n + 1] = 0;
    for (int i = 1; i < n; i++)
    {
        if (a[i] - a[i + 1] > 0)
        {
            ps[i] = ps[i - 1] + a[i] - a[i + 1];
        }
        else
            ps[i] = ps[i - 1];
    }
    for (int i = n; i > 0; i--)
    {
        if (a[i] - a[i - 1] > 0)
        {
            pr[i] = pr[i + 1] + a[i] - a[i - 1];
        }
        else
            pr[i] = pr[i + 1];
    }
    // dbga(ps);
    for (int i = 0; i < m; i++)
    {
        cin >> s >> t;
        if (s < t)
        {
            cout << ps[t-1] - ps[s-1] << '\n';
        }
        else
        {
            cout << pr[t+1] - pr[s+1] << '\n';
        }
    }
}
int main()
{
    SPEED;
    solve();
    R 0;
}