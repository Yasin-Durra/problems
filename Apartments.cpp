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
    ll a[n], b[m], k;
    cin >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    sort(a, a + n);
    sort(b, b + m);
    int l = 0, r = 0, ans = 0;
    while (l < n && r < m)
    {
        // deb(a[l]);
        // deb(b[r]);
        if (a[l] <= (b[r] + k) && a[l] >= (b[r] - k))
        {
            // cout<<"fssf\n";
            ans++;
            l++;
            r++;
        }
        else if (a[l] < (b[r] + k))
        {
            l++;
        }
        else if (a[l] > (b[r] - k))
        {
            r++;
        }
    }
    cout<<ans<<'\n';
    // dbga(a);
    // dbga(b);
}
int main()
{
    SPEED;
    solve();
    R 0;
}