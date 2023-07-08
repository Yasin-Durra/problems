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
    ll w, m;
    vector<ll> vec;
    cin >> m >> w;
    if (m != 1)
    {
        vec.push_back(1);
        vec.push_back(m);
    }
    else
        vec.push_back(1);
    for (ll i = 2; i * i <= m; i++)
    {
        if (m % i == 0)
        {
            if (i == (m / i))
            {
                vec.push_back(i);
            }
            else
            {
                vec.push_back(i);
                vec.push_back(m / i);
            }
        }
    }
    sort(all(vec));
    if (w <= vec.size())
    {
        cout << vec[w - 1];
    }
    else
        cout << "-1";
}

int main()
{
    SPEED;
    solve();
    R 0;
}