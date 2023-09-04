#include <bits/stdc++.h>
#define ll long long
#define int long long
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
set<pair<ll, ll>> st;
void pre()
{
    ll a = 0, b = 1, c = 1;
    for (int i = 2; c < N; i++)
    {
        // cout << "{"<<c<<","<<i << "}";
        st.insert({c, i});
        c = a + b;
        a = b;
        b = c;
    }
}
bool ok(int n, int mid, int k)
{
    int t = 0;
    for (int i = mid; k--;)
    {
        // dbg(n);
        // dbg(i);
        t = i;
        i = n - i;
        n = t;
        if (n < 0)
        {
            R 0;
        }
    }
    R 1;
}
// int binarySearch1(int n, int x)
// {
//     int ans = 0;
//     int left = n / 2;
//     int right = n;
//     while (left <= right)
//     {
//         int mid = left + (right - left) / 2;
//         if (ok(n, mid, x))
//         {
//             ans = max(ans, mid);
//             left = mid + 1;
//         }
//         else
//         {
//             right = mid - 1;
//         }
//     }
//     return ans;
// }
// int binarySearch2(int n, int x)
// {
//     int ans = OO;
//     int left = n / 2;
//     int right = n;
//     while (left <= right)
//     {
//         int mid = left + (right - left) / 2;
//         // dbg(mid);
//         if (ok(n, mid, x))
//         {
//             ans = min(ans, mid);
//             right = mid - 1;
//             // left = mid + 1;
//             // yes;
//         }
//         else
//         {
//             right = mid - 1;
//         }
//     }
//     return ans;
// }
void solve()
{
    ll n, k;
    cin >> n >> k;
    // if (k > n)
    // {
    //     cout << st.count({n, k}) nl;
    // }
    // else
    // {
    //     if (st.count({n, k}))
    //     {
    //         cout << st.count({n, k}) nl;
    //     }
    //     else
    //     {
            bool b = 0;
            ll ans = 0;
            for (int i = n ; i >= (n / 2); i--)
            {
                if (ok(n, i, k))
                {
                    ans++;
                    b = 1;
                }
                else if (b)
                {
                    break;
                }
            }
            cout << ans << endl;
        // }
    // }
}
int32_t main()
{
    SPEED;
    pre();
    Test
    solve();
    R 0;
}