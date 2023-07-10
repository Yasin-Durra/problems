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
#define forin(i, n, a)          \
    for (int j = i; j < n; j++) \
        cin >> a[j];
#define all(x) x.begin(), x.end()
#define OO 1e18
#define PI 3.14159265358979323846
#define MM 1000000007
#define FO(name) freopen(name, "r", stdin);
#define R return
#define nl << "\n"
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
const ll N = 500010, M = 500, Mod = 1e9 + 7, K = 21, SQ = 316, T = 1440;
int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};

void solve()
{
    ll n, x;
    cin >> n >> x;
    ll a[n]={0};
    vector<ll>mx(n+1,-OO);
    forin(0, n, a);
    // ll mx = 0;
    for (int l = 0; l < n; l++)
    {
        ll s = 0;
        for (int r = l; r < n; r++)
        {
            s += a[r];
			mx[r - l + 1] = max(mx[r - l + 1], s);
        }
    }
    for (int k = 0; k <= n; k++)
    {
        ll pre = 0;
        for (int i = 0; i <= n; i++)
        {
            pre=max(pre,mx[i]+min(i,k)*x);
        }
        cout<<pre<<" ";
    }
    cout nl;
}
int main()
{
    SPEED;
    Test
    solve();
    R 0;
}