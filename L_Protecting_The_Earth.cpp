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
 int gaussCircleProblem(int radius)
{
    int allPoints = 0;                                          
    double y = 0;                                                
    long inscribedSquare = (long)sqrt(radius * radius / 2); 
    int x = (int)inscribedSquare;                               
    while (x <= radius)
    {
        allPoints += (long)y; 
        x++;
        y = sqrt(radius * radius - x * x); 
    }
    allPoints *= 8; 
    allPoints += (4 * inscribedSquare * inscribedSquare);
    allPoints += (4 * radius + 1); 
    return allPoints;
}

void solve()
{
    ll a, last = 1;
    cin >> a;
// cout<<;
    for (ll i = 1; i < 1e6; i++)
    {
        ll s =gaussCircleProblem(i);
        // deb(s);
        if ( a <= s)
        {
            cout << i;
            R;
        }
        // else if (s == a)
        // {
        //     cout << i;
        //     R;
        // }
        // last = s;
    }
}
int main()
{
    SPEED;
    solve();
    R 0;
}