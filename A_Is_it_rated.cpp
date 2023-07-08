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
    int a[1002], b[1002], ans = 0;

    Test
    {
        cin >> a[T] >> b[T];
        if (a[T] != b[T])
            ans = 1;
    }
    if (ans == 1)
    {
        cout << "rated";
    }
    else
    {
        for (int i = 2; i <=TT; i++)
        {
            if(a[i]-a[i-1]>0)ans=2;
        }
        if(ans!=2){
            cout<<"maybe";
        }else cout<<"unrated";
    }
}
int main()
{
    SPEED;
    solve();
    R 0;
}