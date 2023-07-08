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
    int n, r = 0, l = 0, p = 0;
    bool b=true;
    string s;
    cin >> n >> s;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'R')
        {
            r++;
            b = false;
        }
        else if (s[i] == 'L')
        {
            l++;
            b = false;
        }
        else if (b)
            p++;
    }
    if(s[p]=='R'&&s[p+l+r-1]=='R'){
        cout<<p+1<<' '<<p+r+1;
    }
    if(s[p]=='L'&&s[p+l+r-1]=='L'){
        cout<<p+l<<' '<<p;
    }
    if(s[p]=='R'&&s[p+l+r-1]=='L'){
        cout<<p+1<<' '<<p+r;
    }
}
int main()
{
    SPEED;
    solve();
    R 0;
}