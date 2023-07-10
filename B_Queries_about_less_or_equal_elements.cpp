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
vector<ll> vec;
void ps(ll st, ll en, ll v)
{
    // if (st > en)
    // {
    //     R;
    // }
    ll m = (st + en) / 2;
    // cout<<st<<":"<<en<<":"<<m<<":"<<v<<"\n";
    if (vec[m] <= v && vec[m + 1] > v)
    {
        cout << m<<" ";
        R;
    }
    if (vec[m] > v)
    {
        ps(st, m, v);
    }
    if (vec[m] <= v)
    {
        ps(m + 1, en, v);
    }
}

void solve()
{
    ll n, m;
    ll a;
    cin >> n >> m;
    for (ll i = 0; i < n; i++)
    {
        cin >> a;
        vec.pb(a);
    }
    vec.pb(-(1e9+10));
    vec.pb(1e9+10);
    sort(all(vec));
    // dbga(vec);
    for (ll i = 0; i < m; i++)
    {
        cin >> a;
        // cout<<a<<"\n";
        ps(0, n, a);
    }
}
int main()
{
    SPEED;
    solve();
    R 0;
}