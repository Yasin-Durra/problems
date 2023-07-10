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
#define unq(vec) vec.resiz(distance(vec.begin(), unique(all(vec))));
#define line cout << "______________________" << endl;
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define clr(m, val) memset(m, val, sizof m)
#define fixTo(x, y) cout << fixed << setprecision(y) << x

using namespace std;
const ll N = 500010, M = 2100, Mod = 998244353;
int p[N];
ll siz[N] = {0};

int get(int x)
{
    R p[x] == x ? x : get(p[x]);
}

void uni(int a, int b)
{
    a = get(a);
    b = get(b);
    if (a != b)
    {
        if (siz[a] > siz[b])
        {
            swap(a, b);
        }
        p[a] = b;
        siz[b] += siz[a];
    }
}

void solve()
{
    int m, n, u, v, k;
    string s;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        p[i] = i;
        siz[i]++;
    }
    int a[N], lan[n + 1] = {-1}, z = 0;
    for (int i = 1; i <=n; i++)
    {
        cin >> k;
        // cout<<k<<'\n';
        if (k == 0)
        {
            // cout<<i;
            z++;
        }
        for (int j = 0; j < k; j++)
        {
            cin >> a[j];
            lan[i] = a[0];
        }
        for (int j = 1; j < k; j++)
        {
            uni(a[j], a[j - 1]);
        }
    }
    set<int> st;
    for (int i = 1; i <= n; i++)
    {
        if (!lan[i])
        {
            continue;
        }
        lan[i] = get(lan[i]);
        st.insert(lan[i]);
    }
    // cout<<z;
    cout << (st.sz <=1 ? z : st.sz - 1 + z);
}
int main()
{
    SPEED;
    solve();
    R 0;
}
