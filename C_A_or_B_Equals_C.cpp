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
const ll N = 500010, M = 2100, Mod = 998244353,MM=1000000007;

long long power(long long n, long long p)
{
    if (p == 0)
            return 1;
    if (p == 1)
            return n;
    long long rem = 1;
    while (p)
    {
        if (p & 1)
            rem = ((rem%MM) * (n%MM))%MM;
        n = ((n%MM) * (n%MM))%MM;
        p = p / 2;
    }
    return rem;
}
void solve()
{
    ll n,k=0;
    string s1, s2;
    cin >> n >> s1 >> s2;
    for (int i = 0; i < s1.sz; i++)
    {
        if (s1[i] == '1')
        {
            k++;
        }

        if (s1[i] > s2[i])
        {
            cout << "IMPOSSIBLE\n";
            R;
        }
    }
    ll ans=power(2,k);
    cout<<ans<<"\n";
    // cout<<(1LL<<k)%MM<<"\n";
}
int main()
{
    SPEED;
    Test
    solve();
    R 0;
}