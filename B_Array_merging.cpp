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
    for (int j = i; i < n; i++) \
        cin >> a[i];
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
const ll N = 500010, M = 2100, Mod = 998244353;
void solve()
{
    int n;
    map<int, int> mp1, mp2;
    cin >> n;
    int a[n] = {0}, b[n] = {0}, r[2 * n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    int mx = 1, cnt = 1, i;
    for (i = 1; i < n; i++)
    {
        if (a[i] == a[i - 1])
        {
            cnt++;
        }
        else
        {
            mp1[a[i - 1]] = max(mp1[a[i - 1]], cnt);
            cnt = 1;
        }
    }

    mp1[a[i - 1]] = max(mp1[a[i - 1]], cnt);
    cnt = 1;
    for (i = 1; i < n; i++)
    {
        if (b[i] == b[i - 1])
        {
            // deb(cnt);
            // deb(b[i]);
            cnt++;
        }
        else
        {
            mp2[b[i - 1]] = max(mp2[b[i - 1]], cnt);
            cnt = 1;
        }
    }
    mp2[b[i - 1]] = max(mp2[b[i - 1]], cnt);
    for (auto el : mp1)
    {
        // cout << el.fr << " " << el.sc << "\n";
        mx = max(mx, mp1[el.fr] + mp2[el.fr]);
    }
    for (auto el : mp2)
    {
        // cout << el.fr << " " << el.sc << "\n";
        mx = max(mx, mp1[el.fr] + mp2[el.fr]);
    }

    // dbga(r);
    cout << mx << "\n";
}
int main()
{
    SPEED;
    Test
    solve();
    R 0;
}