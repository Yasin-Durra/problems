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
int a[SQ];
int dp[SQ][4];
int n;

void solve()
{
    cin >> n;
    forin(0, n, a);
    for (int i = 0; i < n; i++)
    {
        dp[i][0] = dp[i][1] = dp[i][2] = -1;
    }
    dp[0][0] = 0;
    if (a[0] == 1 || a[0] == 3)
    {
        dp[0][1] = 1;
    }
    if (a[0] == 2 || a[0] == 3)
    {
        dp[0][2] = 1;
    }
    for (int i = 1; i < n; i++)
    {
        dp[i][0] = max(max(dp[i - 1][0], dp[i - 1][1]), dp[i - 1][2]);
        if (a[i] == 1 || a[i] == 3)
        {
            dp[i][1] = 1 + max(dp[i - 1][2], dp[i - 1][0]);
        }
        if (a[i] == 2 || a[i] == 3)
        {
            dp[i][2] = 1 + max(dp[i - 1][1], dp[i - 1][0]);
        }
    }
    int mx = max(max(dp[n - 1][0], dp[n - 1][1]), dp[n - 1][2]);
    cout << n - mx;
}
int main()
{
    SPEED;
    solve();
    R 0;
}