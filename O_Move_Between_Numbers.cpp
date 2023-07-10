#include <bits/stdc++.h>

using namespace std;
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

#define fr first
#define sc second
#define all(x) x.begin(), x.end()

int n, s, e;
string str[255];
vector<int> adj[255];
int d[255];

int getCommon(int i, int j)
{
    int C = 0;
    for (int k = 0; k < 10; ++k)
    {
        int c1 = count(all(str[i]), char('0' + k));
        int c2 = count(all(str[j]), char('0' + k));
        C += min(c1, c2);
    }
    return C;
}

void solve()
{
    for (int i = 0; i < 255; ++i)
    {
        adj[i].clear();
    }
    cin >> n >> s >> e;
    --s, --e;
    for (int i = 0; i < n; i++)
    {
        cin >> str[i];
    }
    for (int i = 0; i < n; ++i)
        for (int j = i + 1; j < n; ++j)
        {
            int common = getCommon(i, j);
            if (common == 17)
            {
                adj[i].push_back(j);
                adj[j].push_back(i);
            }
        }
    memset(d, 0x3f, sizeof d);
    d[s] = 0;
    queue<pii> q;
    q.push({d[s], s});
    while (!q.empty())
    {
        pii me = q.front();
        q.pop();
        if (me.fr > d[me.sc])
            continue;
        for (int i = 0; i < adj[me.sc].sz; ++i)
        {
            int v = adj[me.sc][i];
            if (d[v] <= d[me.sc] + 1)
                continue;
            d[v] = d[me.sc] + 1;
            q.push({d[v], v});
        }
    }
    if (d[e] > 255)
        puts("-1");
    else
        printf("%d\n", d[e]);
}

int main()
{
    Test 
    {
        solve();
    }
    return 0;
}