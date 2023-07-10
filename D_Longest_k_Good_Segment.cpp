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
    ll n, k, d = 0, mx = 0, al = 0, ar = 0;

    map<ll, ll> mp;
    cin >> n >> k;
    ll a[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll l = 0, r = 0;
    while (r < n)
    {
        mp[a[r]]++;
        if (mp[a[r]] == 1)
        {
            d++;
        }
        while (d > k)
        {
            mp[a[l]]--;
            if (mp[a[l]] == 0)
            {
                d--;
            }
            l++;
        }
        if (r - l + 1 > mx)
        {
            mx = r - l + 1;
            al = l;
            ar = r;
        }
        r++;
    }
    cout << al + 1 << " " << ar + 1;
}
int main()
{
    SPEED;
    solve();
    R 0;
}