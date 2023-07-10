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
bool prime_check(int x)
{
    if (x <= 1)
        return false;
    for (int i = 2; i * i <= x; i++)
    {
        if (x % i == 0)
            return false;
    }
    return true;
}
void solve()
{
    int k;
    cin >> k;
    if (k < 25)
    {
        cout << "-1" << endl;
        R;
    }
    if (prime_check(k))
    {
        cout << "-1" << endl;
        R;
    }
    int w = 0, h = 0, ok = 0;
    for (int i = 5; i * i <= k; i++)
    {
        if (k % i == 0 && k / i >= 5)
        {
            ok = 1;
            h = i;
            w = k / i;
        }
    }
    string s(k, 's');
    if (!ok)
    {
        cout << "-1" << endl;
        R;
    }
    else
    {
        string e[5]={"aeiou","eioua","iouae","ouaei","uaeio"};
        for (int i = 0; i < h; i++)
        {
            for (int j = 0; j < w; j++)
            {
                s[j + i * w] = e[i%5][j%5];
            }
        }
        cout << s;
    }
}
int main()
{
    SPEED;
    solve();
    R 0;
}