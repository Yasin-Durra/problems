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
const ll N = 200010, M = 2100, Mod = 998244353;
ll ar[N] = {0};
ll n, k;
bool ok(ll mid)
{
    ll cnt = 0, j = 1;
    for (ll i = 1; i <= n; i++)
    {
        if (i == 1)
        {
            cnt++;
            j = i;
        }
        else
        {
            if (ar[i] - ar[j] + 1 > mid)
            {
                cnt++;
                j = i;
            }
        }
    }
    // for (int i = 0; i < n; i++)
    // {
    //     ll j = i;
    //     if (ar[i] - ar[j] > mid)
    //     {
    //         cnt++;
    //         i = j;
    //     }
    // }
    // deb(mid);
    // deb(cnt);
    return (cnt <= k);
}
void solve()
{
    cin >> n >> k;
    for (ll i = 1; i <= n; i++)
    {
        cin >> ar[i];
    }
    ll l = 1, r = 1e9 + 1, mid, ans;
    while (l <= r)
    {
        mid = (r + l) / 2;
        // deb(l);
        // deb(mid);
        // deb(r);
        if (ok(mid))
        {
            ans = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    cout << ans << "\n";
}
int main()
{
    SPEED;
    Test
    solve();
    R 0;
}