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
    ll n, x;
    cin >> n;
    map<ll, ll> mp;
    vector<ll> a;
    for (int i = 1; i <= (n * (n - 1)) / 2; i++)
    {
        cin >> x;
        mp[x]++;
    }
    // if (mp.sz == 1)
    // {
    //     x = mp.begin()->first;
    //     for (int i = 1; i <= n; i++)
    //     {
    //         cout << x << " ";
    //     }
    //     cout nl;
    //     R;
    // }
    // no;
    for (int i = n - 1; i > 0; i--)
    {
        for (auto &el : mp)
        {
            if (el.sc >= i)
            {
                // dbg(el.sc);
                el.sc = el.sc - i;
                // dbg(el.sc);
                a.pb(el.fr);
                if (el.sc == 0)
                {
                    mp.erase(el.fr);
                }
                // cout << el.fr << " " << el.sc << endl;
                break;
            }
        }
    }
    // yes
    ll s = a.sz;
    a.pb(a[s-1]);
    for (auto i : a)
    {
        cout << i << ' ';
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