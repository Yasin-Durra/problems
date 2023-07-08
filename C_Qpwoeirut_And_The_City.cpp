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
ll a[N];
ll get(int i)
{
    R max(0ll, max(a[i - 1], a[i + 1]) - a[i] + 1);
}
void solve()
{
    Test
    {
        int n;
        cin >> n;
        ll ans = 0, an = 0, h = 0;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        if (n & 1)
        {
            for (int i = 2; i < n; i += 2)
            {
                ans += get(i);
            }
            cout << ans << '\n';
            continue;
        }
        for (int i = 2; i < n; i += 2)
        {
            ans += get(i);
        }
        an = ans;
        if (n % 2 == 0)
        {
            for (int i = n - 1; i > 1; i -= 2)
            {
                
                an -= get(i - 1);
                an += get(i);
                ans = min(an, ans);
            }
        }
        cout << ans << '\n';
    }
}
int main()
{
    SPEED;
    solve();
    R 0;
}