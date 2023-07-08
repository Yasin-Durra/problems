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
ll solve(ll v, ll k)
{
    if (v == 0)
        R 0;
    R v + solve((v / k), k);
}
int main()
{
    SPEED;
    ll n, k, v, s = 1, e = 1e9, m;
    cin >> n >> k;
    // cout << solve(37792279, 2);
    while (s < e)
    {
        m = (s + e) / 2;
        // deb(s);deb(m);deb(e);
        if (solve(m, k) > n)
        {
            e = m;
        }
        else if (solve(m, k) < n)
        {
            s =  ++ m;
        }
        else
        {
            break;
        }
    }
    cout << m;
    R 0;
}