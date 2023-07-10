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
#define unq(vec) vec.resize(visance(vec.begin(), unique(all(vec))));
#define line cout << "______________________" << endl;
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define clr(m, val) memset(m, val, sizeof m)
#define fixTo(x, y) cout << fixed << setprecision(y) << x

using namespace std;
const ll N = 500010, M = 2100, Mod = 998244353;

void solve()
{

    string s;
    int vis[26] = {0};
    
    vector<int> v[26];
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        v[s[i] - 'a'].push_back(i + 1);
    }

    int n = s.length(),m;
    for (int i = 0; i < 26; i++)
    {
        if (!v[i].size())
        {
            vis[i] = N*2;
            continue;
        }

        m = v[i].size();
        vis[i] = max(v[i][0], n - v[i][m - 1] + 1);

        for (int j = 1; j < m; j++)
            vis[i] = max(vis[i], v[i][j] - v[i][j - 1]);
    }

    m = vis[0];
    for (int i = 1; i < 26; i++)
        m = min(m, vis[i]);

    cout<<m;

}
int main()
{
    SPEED;
    solve();
    R 0;
}

