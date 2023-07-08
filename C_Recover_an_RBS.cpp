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
    auto check = [](const string &s)
    {
        int b = 0;
        for (char c : s)
        {
            if (c == '(')
                b++;
            if (c == ')')
                b--;
            if (b < 0)
                R false;
        }
        R(b == 0);
    };
    Test
    {
        string s;
        vector<int> p;
        cin >> s;
        int o = s.sz / 2, c = s.sz / 2;
        for (int i = 0; i < s.sz; i++)
        {
            if (s[i] == '(')
                o--;
            if (s[i] == ')')
                c--;
            if (s[i] == '?')
                p.pb(i);
        }
        for (int i = 0; i < p.sz; i++)
        {
            if (i < o)
                s[p[i]] = '(';
            else
                s[p[i]] = ')';
        }
        bool ok = true;
        if (o > 0 && c > 0)
        {
            swap(s[p[o]], s[p[o - 1]]);
            if (check(s))
                ok = 0;
        }
        cout << (ok ? "YES\n" : "NO\n");
    }
}
int main()
{
    SPEED;
    solve();
    R 0;
}