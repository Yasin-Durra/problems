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
    for (int j = i; i < n; i++) \
        cin >> a[i];
#define all(x) x.begin(), x.end()
#define OO 1e18
#define PI 3.14159265358979323846
#define MM 1000000007
#define FO(name) freopen(name, "r", stdin);
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
    ll n;
    map<ll, int> mp;
    cin >> n;
    ll t = n;
    for (ll i = 2; i * i <= n;)
    {
        if (t == 1)
        {
            break;
            ;
        }
        else if (t % i == 0)
        {
            // deb(i);
            mp[i]++;
            t /= i;
        }
        else
        {
            i++;
        }
    }
    if (mp.sz < 1)
    {
        cout << "1\n"
             << n << "\n";
        R;
    }
    ll mx = -1,a;
    for (auto el : mp)
    {
        if (mx <= el.sc)
        {
            mx=el.sc;
            a=el.fr;
        }
    }
    cout<<mx<<"\n";
    for (int i = 0; i < mx-1; i++)
    {
        n/=a;
        cout<<a<<" ";
    }
    cout<<n<<"\n";
    // deb(a);
    // deb(mx);
}
int main()
{
    SPEED;
    Test
    solve();
    R 0;
}
