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

    int n, q;
    cin >> n >> q;

    vector<ll> a(n), ps(n + 1);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ps[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        ps[i] = ps[i - 1] + a[i - 1];
    }
    ll arw = 0, k;
    // dbga(ps);
    ll co = n;
    for (int i = 0; i < q; i++)
    {
        cin >> k;
        arw += k;
        ll m;
        ll st = 0, e = n;
        // deb(k);
        while (st < e)
        {
            m = (st + e+1) / 2;
            // deb(st);
            // deb(m);
            // deb(e); // deb(co);
            if (arw > ps[m])
            {
                st = m ;
                // ans = max(m, ans);
            }
            else if (arw < ps[m])
            {
                e = m-1;
            }
            else
            {
                st = m;
                // deb(ps[m]);
                // deb(arw);
                break;
            }
            // deb(ps[m]);
            // deb(arw);
        }
        if (st == n)
        {
            // cout << "all die ";
            cout << n << "\n";
            arw = 0;
        }
        else
            cout << n - st  << "\n";
    }
}
int main()
{
    SPEED;
    solve();
    R 0;
}