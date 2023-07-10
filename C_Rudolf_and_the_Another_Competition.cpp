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
#define nl << "\n"
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
    ll n, m, h;
    cin >> n >> m >> h;
    vector<vector<ll>> a(n + 1, vector<ll>(m + 1, (0)));
    vector<vector<ll>> v(n + 1, vector<ll>(m + 1, (0)));
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> a[i][j];
            v[i][j] = a[i][j];
        }
        sort(all(a[i]));
        sort(all(v[i]));
    }
    for (int i = 1; i <= n; i++)
    {
        partial_sum(all(a[i]), a[i].begin());
        partial_sum(all(v[i]), v[i].begin());
    }
    for (int i = 1; i <= n; i++)
    {
        partial_sum(all(a[i]), a[i].begin());
        // dbga(a[i]);
    }
    // vector<pair<ll, pair<ll, ll>>> r(n + 1);

    vector<ll> p(n + 1), pe(n + 1);
    for (int i = 1; i <= n; i++)
    {
        auto e = lower_bound(v[i].begin(), v[i].end(), h);
        while (*e > h || e == v[i].end())
        {
            --e;
        }
        ll cv = (e - v[i].begin());
        // r[i] = {cv * -1, {a[i][e - v[i].begin()], i}};
        p[i] = cv;
        pe[i] = a[i][e - v[i].begin()];
        // deb(e - v[i].begin());
        // deb(a[i][e- v[i].begin()]);
    }
    // sort(all(r));

    ll pc = p[1], pi = pe[1], ans = 1;
    for (int i = 2; i <= n; i++)
    {
        if(p[i]>pc){
            ans++; 
        }else if (pc==p[i]&&pi>pe[i])
        {
            ans++; 
        }
        
        // if (r[i].sc.sc == 1)
        // {
        //     while (r[i - 1].fr == pc && r[i - 1].sc.fr == pi && i >= 1)
        //     {
        //         i--;
        //     }
        //     cout << i + 1 nl;
        //     R;
        // }
    }
    cout << ans nl;
}
int main()
{
    SPEED;
    Test
    solve();
    R 0;
}