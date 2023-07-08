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
    string a, b;
    int fa = 0, fb = 0, la = 0, lb = 0;
    cin >> a >> b;
    for (int i = 0; i < a.sz; i++)
    {
        if (a[i] == '0')
        {
            fa++;
        }
        else
        {
            break;
        }
    }
    for (int i = 0; i < b.sz; i++)
    {
        if (b[i] == '0')
        {
            fb++;
        }
        else
        {
            break;
        }
    }
    la = a.sz - fa;
    lb = b.sz - fb;
    // cout << la << lb;
    if (la > lb)
    {
        cout << '>';
    }
    else if (lb > la)
    {
        cout << '<';
    }
    else{
        for (int i = 0; i < la; i++)
        {
            if (a[fa+i] > b[fb+i])
            {
                cout << '>';
                return;
            }
            else if (b[fb+i] > a[fa+i])
            {
                cout << '<';
                return;
            }
        }
    cout << '=';}
}
int main()
{
    SPEED;
    solve();
    R 0;
}