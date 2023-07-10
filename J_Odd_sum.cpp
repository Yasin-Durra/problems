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
    ll sum = 0, lp = 111111111, ln = -111111111, n, a;
    cin >> n;
    for (ll i = 0; i < n; i++)
    {
        cin >> a;
        if (a < 0)
        {
            if (a % 2 != 0 && a > ln)
            {
                ln = a;
            }
        }
        else if (a % 2 == 1 && a < lp)
        {
            lp = a;

            sum += a;
        }
        else
        {
            sum += a;
        }
    }
    // deb(sum);
    if (sum % 2 == 0)
    {
        if (lp > abs(ln))
        {
            sum += ln;
        }
        else
        {
            sum -= lp;
        }
    }

        cout << sum;
    
}
int main()
{
    SPEED;
    solve();
    R 0;
}