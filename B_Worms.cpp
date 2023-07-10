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
ll n, m, l, b;
void solve(ll st, ll en, ll v)
{

    // cout << a[st] << " " << a[en]<<' ' << v<< "out\n";
    ll m = (st + en) / 2;
    // if (st >= en)
    // {
    //     // cout << st << " " << en << "in \n";
    //     R;
    // }
    if (a[m-1]<v&&a[m]>=v)
    {
        cout<<m<<"\n";
        R;
    }
    else if (a[m] < v)
    {
        solve(m + 1, en, v);
    }
    else if (a[m] > v)
    {
        solve(st, m, v);
    }
    else
    {
        // cout << m << "jgcc";
        R;
    }
}
int main()
{
    SPEED;
    a[0] = 0;
    cin >> n ;
    for (ll i = 1; i <= n; i++)
    {
        cin >> l;
        a[i] = a[i - 1] + l;
    }
    cin>>m;
    for (ll i = 0; i < m; i++)
    {
        cin>>b;
        solve(1, n, b);
    }
    // cout << "mn,bb";
    R 0;
}