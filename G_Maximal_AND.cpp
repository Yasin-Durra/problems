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
    int bt[32] = {0};
    ll n, k;
    cin >> n >> k;
    bitset<32> b[n];
    ll a[n], mxb = 0, mx = 0, mn = 1e9;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        b[i] = a[i];
        mn = min(mn, a[i]);
        for (int j = 0; j < 32; j++)
        {
            if (b[i][j])
            {
                bt[j]++;
                mxb = max(mxb, j * 1LL);
                mx = max(mx, bt[j] * 1LL);
            }
        }
    }
    vector<ll> v;
    for (int i = 30; i >= 0; i--)
    {
        if (bt[i] + k >= n)
        {
            k = bt[i] + k - n;
            v.push_back(i);
        }
    }
    bitset<32>ans(4294967295);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < v.size(); j++)
        {
             b[i].set(v[j], 1);
        }
        ans&= b[i];
    }
    cout << ans.to_ullong() << endl;
}
int main()
{
    SPEED;
    Test
    solve();
    R 0;
}