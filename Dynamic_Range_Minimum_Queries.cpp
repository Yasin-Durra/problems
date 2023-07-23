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
#define fixTo(x, y) cout << fixed << setprecision(y) << x

using namespace std;
const ll N = 500010, M = 500, Mod = 1e9 + 7, K = 21, SQ = 316, T = 1440;
int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};
vector<ll> tree;
ll get(int node, int ql, int qh, int tl, int th)
{
    if (tl > qh || th < ql)
    {
        R MM;
    }
    if (tl >= ql && th <= qh)
    {
        R tree[node];
    }
    int mid = (tl + th) / 2;
    R min(get(node * 2, ql, qh, tl, mid) , get((node * 2) + 1, ql, qh, mid + 1, th));
}
void solve()
{
    int n, m, u, v, t;
    cin >> n >> m;
    int siz = (ceil(log2(n)));
    int ss = (1 << siz);
    tree.resize(2 * ss,MM);
    // dbg(n);
    for (int i = 0; i < n; i++)
    {
        cin >> tree[ss + i];
    }
    for (int i = ss - 1; i > 0; i--)
    {
        tree[i] = min(tree[2 * i] , tree[2 * i + 1]);
    }
    while (m--)
    {
        cin >> t >> u >> v;
        if (t == 1)
        {
            int i = ss + u-1;
            tree[i] = v;
            i /= 2;
            while (i)
            {
                tree[i] = min(tree[2 * i] , tree[2 * i + 1]);
                i /= 2;
            }

            // dbga(tree);
        }
        else
        {
            cout << get(1, u, v, 1, ss) nl;
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