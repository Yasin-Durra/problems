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
    int x1, y1, x2, y2, l;
    cin >> x1 >> y1 >> x2 >> y2;
    if (x1 == x2)
    {
        l = abs(y1 - y2);

        cout << x1 + l << " " << y1 << " " << x2 + l << " " << y2;
    }
    else if (y1 == y2)
    {
        l = abs(x1 - x2);
        cout << x1 << " " << y1 + l << " " << x2 << " " << y2 + l;
    }

    else if (x1 != x2 && y1 != y2 && abs(x1 - x2) != abs(y1 - y2))
    {
        cout << -1;
    }
    else
    {
        cout << x1 << " " << y2 << " " << x2 << " " << y1;
    }
}
int main()
{
    SPEED;
    solve();
    R 0;
}