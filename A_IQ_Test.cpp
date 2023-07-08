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
#define fixTo(x, y) cout << fixed << setprecision(y) << x

using namespace std;
const ll N = 500010, M = 2100, Mod = 998244353;
void solve()
{
    int a[4][4];
    char c;
    bool b = false;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> c;
            if (c == '#')
                a[i][j] = 1;
            else
                a[i][j] = 0;
        }
    }
        if (a[0][0] + a[0][1] + a[1][0] + a[1][1] == 3 || a[0][0] + a[0][1] + a[1][0] + a[1][1] == 1|| a[0][0] + a[0][1] + a[1][0] + a[1][1] == 0|| a[0][0] + a[0][1] + a[1][0] + a[1][1] == 4)
    {
        b = true;
    }
    else  if (a[1][0] + a[1][1] + a[2][0] + a[2][1] == 3 || a[1][0] + a[1][1] + a[2][0] + a[2][1] == 1|| a[1][0] + a[1][1] + a[2][0] + a[2][1] == 0|| a[1][0] + a[1][1] + a[2][0] + a[2][1] == 4)
    {
        b = true;
    }
    else  if (a[2][0] + a[2][1] + a[3][0] + a[3][1] == 3 || a[2][0] + a[2][1] + a[3][0] + a[3][1] == 1|| a[2][0] + a[2][1] + a[3][0] + a[3][1] == 0|| a[2][0] + a[2][1] + a[3][0] + a[3][1] == 4)
    {
        b = true;
    }
    else  if (a[0][1] + a[0][2] + a[1][1] + a[1][2] == 3 || a[0][1] + a[0][2] + a[1][1] + a[1][2] == 1|| a[0][1] + a[0][2] + a[1][1] + a[1][2] == 0|| a[0][1] + a[0][2] + a[1][1] + a[1][2] == 4)
    {
        b = true;
    }
    else  if (a[1][1] + a[1][2] + a[2][1] + a[2][2] == 3 || a[1][1] + a[1][2] + a[2][1] + a[2][2] == 1|| a[1][1] + a[1][2] + a[2][1] + a[2][2] == 0|| a[1][1] + a[1][2] + a[2][1] + a[2][2] == 4)
    {
        b = true;
    }
    else  if (a[2][1] + a[2][2] + a[3][1] + a[3][2] == 3 || a[2][1] + a[2][2] + a[3][1] + a[3][2] == 1|| a[2][1] + a[2][2] + a[3][1] + a[3][2] == 0|| a[2][1] + a[2][2] + a[3][1] + a[3][2] == 4)
    {
        b = true;
    }
    else  if (a[0][2] + a[0][3] + a[1][2] + a[1][3] == 3 || a[0][2] + a[0][3] + a[1][2] + a[1][3] == 1|| a[0][2] + a[0][3] + a[1][2] + a[1][3] == 0|| a[0][2] + a[0][3] + a[1][2] + a[1][3] == 4)
    {
        b = true;
    }
    else  if (a[1][2] + a[1][3] + a[2][2] + a[2][3] == 3 || a[1][2] + a[1][3] + a[2][2] + a[2][3] == 1|| a[1][2] + a[1][3] + a[2][2] + a[2][3] == 0|| a[1][2] + a[1][3] + a[2][2] + a[2][3] == 4)
    {
        b = true;
    }
    else  if (a[2][2] + a[2][3] + a[3][2] + a[3][3] == 3 || a[2][2] + a[2][3] + a[3][2] + a[3][3] == 1|| a[2][2] + a[2][3] + a[3][2] + a[3][3] == 0|| a[2][2] + a[2][3] + a[3][2] + a[3][3] == 4)
    {
        b = true;
    }
    if(b) cout<<"YES";
    else cout<<"NO";
}
int main()
{
    SPEED;
    solve();
    R 0;
}