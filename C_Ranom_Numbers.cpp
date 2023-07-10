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
ll values[] = {1, 10, 100, 1000, 10000};
const int val[] = {1, 10, 100, 1000, 10000};
const int INF = 1e9;

string s;
int dp[2][5][2];
void solve()
{
    cin >> s;
    reverse(s.begin(), s.end());
    for (int j = 0; j < 5; ++j)
        dp[0][j][0] = dp[0][j][1] = -INF;
    dp[0][0][0] = 0;
    for (auto c : s)
    {
        int x = c - 'A';
        for (int j = 0; j < 5; ++j)
            dp[1][j][0] = dp[1][j][1] = -INF;
        for (int j = 0; j < 5; ++j)
        {
            for (int t = 0; t < 2; ++t)
            {
                for (int y = 0; y < 5; ++y)
                {
                    int nj = max(j, y);
                    int nt = t + (x != y);
                    if (nt < 2)
                        dp[1][nj][nt] = max(dp[1][nj][nt], dp[0][j][t] + (y < nj ? -val[y] : val[y]));
                }
            }
        }
        swap(dp[0], dp[1]);
    }
    int ans = -INF;
    for (int j = 0; j < 5; ++j)
        ans = max(ans, max(dp[0][j][0], dp[0][j][1]));
    cout << ans << '\n';
}
int main()
{
    SPEED;
    Test
    solve();
    R 0;
}