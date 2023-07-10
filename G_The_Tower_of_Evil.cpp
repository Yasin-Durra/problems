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

    ll d, h, w, ans;
    cin >> h >> w >> d;
    ll hn = h % ((w - 1) * 2);
    if (hn >= w)
    {
        ans = w - (hn - w);
    }
    else
    {
        ans = hn;
    }
    if (ans == 0)
    {
        ans = w;
    }
    if (ans == d)
        cout << "Yes\n";
    else
        cout << "No\n";
    // deb(d);


// if (a % 2)
//     ans = h % w;
// else
//     ans = a + (h % w);
// if (ans == d)
//     cout << "Yes\n";
// else
//     cout << "No\n";

// ll d, h, w, ans;
// cin >> h >> w >> d;
// ll a = (h / w);
// if (a % 2)
//     ans = w - (h % w);
// else
//     ans = a + (h % w);
// if (ans == d)
//     cout << "Yes\n";
// else
//     cout << "No\n";
// deb(d);
}
int main()
{
    // SPEED;
    // fopen("evil.in", "r");
    freopen("evil.in", "r", stdin);
    Test
    solve();
    R 0;
}