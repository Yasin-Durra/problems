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
    int n, q;
    cin >> n >> q;
    vector<int> vec(n);
    vector<ll> ps(n + 1);
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }
    sort(all(vec));
    ps[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        ps[i] = ps[i - 1] + vec[i - 1];
    }
    for (int i = 1; i <= q; i++)
    {
        ll x,ans=0;
        cin >> x;
        if (x>ps[n])
        {
            cout<<"-1\n";
            continue;;
        }
        
        ll s = 1, e = n;
        while (s <= e)
        {
            ll m = (s + e) / 2;

            if (ps[n]-ps[m] < x)
            {
                e = m - 1;
                ans=n-m+1;
            }
            else
            {
                s = m + 1;
            }
        }
        cout<<ans<<"\n";
    }
    // dbga(ps);
}
int main()
{
    SPEED;
    Test
    solve();
    R 0;
}