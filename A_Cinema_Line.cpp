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
#define all(x) x.begin(), x.end()
#define OO 1e18
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
    int a5 = 0, a2 = 0, a1 = 0, a;
    bool b=true;
    Test
    {
        cin >> a;
        if (a == 25)
            a2++;
        else if (a == 50 && a2 > 0)
        {
            a2--;
            a5++;
        }
        else if (a == 100)
        {
            if (a5 > 0 && a2 > 0)
            {
                a5--;
                a2--;
            }
            else if (a2 > 2)
            {
                a2 -= 3;
            }
            else
            {
                b = false;
            }
        }
        else b=false;
    }
    if(b)cout<<"YES";
    else cout<<"NO";
}
int main()
{
    SPEED;
    solve();
    R 0;
}