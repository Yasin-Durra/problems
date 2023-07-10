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
    ll n;
    cin >> n;
    string s[n + 1];
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    string s1, s2;
    ll c = 9999999999, m = 999999;
    cin >> s1 >> s2;
    if (s1 == s2)
    {
        cout << 0;
        R;
    }
    for (int i = 0; i < n; i++)
    {
        if (s[i] == s1)
            c = i;
        if (s[i] == s2)
            m = i;
    }
    ll a1 = (c - m ), a2 = (m - c );
    if (c > m)
    {
        a1 = a1;
    }
    else if (c < m)
    {
        a1 = a2;
    }
    else
    {
        a1 = 0;
    }
    a1 = ceil(a1 * 1.0 / 2.0);
    cout << a1;
}
int main()
{
    SPEED;
    solve();
    R 0;
}