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
#define dbg(a) cout << #a << ':' << ' ' << a << '\n'
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
#define nl << "\n"
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define clr(m, val) memset(m, val, sizeof m)
#define btwn(v, a, b) (v <= b && v >= a)
#define fixTo(x, y) cout << fixed << setprecision(y) << x

using namespace std;
const ll N = 500010, M = 500, Mod = 1e9 + 7, K = 21, SQ = 316, T = 1440;
int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};
int dxx[] = {1, -1, 0, 0, -1, 1, -1, 1};
int dyy[] = {0, 0, 1, -1, -1, 1, 1, -1};

void solve()
{
    ll n, k;
    cin >> n >> k;
    ll a[n + 1];
    priority_queue<pll> q;
    for (ll i = 1; i <= n; i++)
    {
        cin >> a[i];
        // a[i] = 1e5 + i;
        if (a[i] % k != 0)
            q.push({((a[i] % k)), (-1 * i)});
        else
        {
            q.push({k, (-1 * i)});
        }

        // dbg(k-a[i]%k);
    }
    ll i = 0;
    while (!q.empty())
    {
        pll tp = q.top();
        q.pop();
        // dbg(tp.fr);
        // dbg(tp.sc);
        // dbg(res);
        // ll res = ceill(((((tp.first * 1.0) - (q.top().first * 1.0)) * 1.0) / (k * 1.0))) * (k);
        // if (tp.fr == q.top().fr)
        // {
        //     res = k;
        // }
        // if (res >= tp.fr)
        // {
        cout << -1 * tp.sc << " ";
        // }
        // else
        // {
        //     q.push({tp.fr - res, tp.sc});
        // }
    }
    cout nl;
}
int main()
{
    SPEED;
    Test
    solve();
    R 0;
}