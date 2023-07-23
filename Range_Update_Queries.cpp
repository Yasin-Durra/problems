#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pb push_back
#define mpa make_pair
#define fr first
#define sc second
#define ever (;;)
#define pii pair<ll, ll>
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
    for (ll j = i; j < n; j++) \
        cin >> a[j];
#define all(x) x.begin(), x.end()
#define OO 1e18
#define PI 3.14159265358979323846
#define MM 1000000007
#define FO(name) freopen(name, "r", stdin);
#define R return
#define Test   \
    ll TT;    \
    cin >> TT; \
    for (ll T = 1; T <= TT; T++)
#define unq(vec) vec.resize(distance(vec.begin(), unique(all(vec))));
#define line cout << "______________________" << endl;
#define nl << "\n"
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define clr(m, val) memset(m, val, sizeof m)
#define fixTo(x, y) cout << fixed << setprecision(y) << x

using namespace std;
const ll N = 500010, M = 500, Mod = 1e9 + 7, K = 21, SQ = 316, T = 1440;
ll dx[] = {1, -1, 0, 0};
ll dy[] = {0, 0, 1, -1};
vector<ll> tree;
// ll get(ll node, ll ql, ll qh, ll tl, ll th)
// {
//     if (tl > qh || th < ql)
//     {
//         R 0;
//     }
//     if (tl >= ql && th <= qh)
//     {
//         R tree[node];
//     }
//     ll mid = (tl + th) / 2;
//     R get(node * 2, ql, qh, tl, mid) + get((node * 2) + 1, ql, qh, mid + 1, th);
// }
void upd(ll node, ll ql, ll qh, ll tl, ll th, ll v)
{
    if (tl > qh || th < ql)
    {
        R;
    }
    if (tl >= ql && th <= qh)
    {
        tree[node] += v;
        R;
    }
    ll mid = (tl + th) / 2;
    upd(node * 2, ql, qh, tl, mid, v);
    upd((node * 2) + 1, ql, qh, mid + 1, th, v);
}
void solve()
{
    ll n, m, u, v, t,x;
    cin >> n >> m;
    ll siz = (ceil(log2(n)));
    ll ss = (1 << siz);
    tree.resize(2 * ss);
    // dbg(ss);
    for (ll i = 0; i < n; i++)
    {
        cin >> tree[ss + i];
    }
    
            // dbga(tree);
    // for (ll i = ss - 1; i > 0; i--)
    // {
    //     tree[i] = tree[2 * i] + tree[2 * i + 1];
    // }
    while (m--)
    {
        
            // dbg(m);
        cin >> t;
        if (t == 1)
        {
            // ll i = ss + u - 1;
            // tree[i] = v;
            // i /= 2;
            // while (i)
            // {
            //     tree[i] = tree[2 * i] + tree[2 * i + 1];
            //     i /= 2;
            // }
            cin >> u >> v>>x;
            // u--,v--;
            upd(1, u, v, 1, ss, x);
            // dbga(tree);
        }
        else
        {
            cin >> u;
            // dbg(u);
            ll i = ss + u - 1;
            ll ans = 0;
            while (i)
            {
                ans += tree[i];
                i /= 2;
            }
            cout << ans nl;
        }
    }
}
int main()
{
    SPEED;
    // Test
    solve();
    R 0;
}