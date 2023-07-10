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
int g[11][11];

void solve()
{
    for (int i = 1; i <= 9; i++)
    {
        for (int j = 1; j <= 9; j++)
        {
            cin >> g[i][j];
        }
    }
    for (int i = 1; i <= 9; i++)
    {
        set<int> st;
        set<int> st2;
        for (int j = 1; j <= 9; j++)
        {
            st.insert(g[i][j]);
            st2.insert(g[j][i]);
        }
        if (st.sz != 9 || st2.sz != 9)
        {
            cout << "INVALID" << endl;
            R;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            set<int> st;
            int x = (3 * j) + 1, y = (3 * i) + 1;
            for (int k = x; k < x + 3; k++)
            {
                for (int l = y; l < y + 3; l++)
                {
                    st.insert(g[k][l]);
                }
            }
            if (st.sz != 9)
            {
                cout << "INVALID" << endl;
                R;
            }
        }
    }
    cout << "VALID" << endl;
}
int main()
{
    SPEED;
    solve();
    R 0;
}