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
    string s;
    cin >> s;
    int n = s.sz, pre[n], suf[n], a = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] >= 97)
        {
            a++;
        }
        pre[i] = a;
    }
    a = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        if (s[i] < 97)
        {
            a++;
        }
        suf[i] = a;
    }
    int dp[n], k, mn = N;
    for (int i = 0; i < n; i++)
    {
        // for (int j = 0; j < 2; j++)
        // {
        //     dp[i][j]=
        // }
        k = suf[i] + pre[i] - 1;
        mn = min(mn, k);
    }
    cout << mn;
    // dbga(suf);
    // dbga(pre);
    // deb(mn);
}
int main()
{
    SPEED;
    solve();
    R 0;
}