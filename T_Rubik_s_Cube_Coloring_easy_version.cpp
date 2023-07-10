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
const ll N = 500010, M = 2100, Mod = 998244353, m=1000000007;
ll fp(ll a, ll p)
{
    if (p < 1)
    {
        R 1;
    }
    ll r1;
    if (p % 2 == 0)
    {
        r1=(fp(a,p/2)%m);
        R ((r1*r1)%m);
    }
    else
    {
        
        r1=(fp(a,p/2)%m);
        R (r1*r1*a)%m;
    }
}
void solve()
{
    ll k;
    cin>>k;
    ll t =(1LL<<k)-2;
    cout<<(((fp(4,t)%m)*6)%m);
}
int main()
{
    SPEED;
    solve();
    R 0;
}