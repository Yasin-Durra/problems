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
    int n, k, b = 0, e;
    ll a;
    vector<ll> vec;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        vec.pb(a);
    }
    e = n;
    sort(all(vec));
    // dbga(vec);
    ll sum = 0;
    for (int i = 0; i < n - k; i++)
    {
        sum += vec[i];
    }
    ll ans=sum;
    for (int i = n - k; i < n; i++)
    {
        // for (int j = 0; j < 2; j++)
            sum -= vec[b] + vec[b + 1];
            b+=2;
            sum += vec[i];
            ans=max(ans,sum);
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