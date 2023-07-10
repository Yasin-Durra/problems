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
    ll x[n + 1], p[n + 1];
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> p[i];
    }
    ll g = 0;
    for (int i = 1; i < n; i++)
    {
        g = __gcd(g, (x[i] - x[i - 1]));
    }
    // deb(g);

    int ind3 = find(p, (p + m + 1), g) - p;

    if (ind3 <= m)
    {
        yes
                cout
            << x[0] << " " << ind3 + 1 << "\n";
        R;
    }
    for (int i = 0; i < m; i++)
    {

        if (g % p[i] == 0)
        {
            yes
                    cout
                << x[0] << " " << i + 1 << "\n";
            R;
        }
    }
    no
}
int main()
{
    SPEED;
    solve();
    R 0;
}