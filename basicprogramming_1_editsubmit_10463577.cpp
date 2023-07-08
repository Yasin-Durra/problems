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
    int n, t;
    cin >> n >> t;
    ll a[n];
    ll ans = 0, ev = 0;
    int in = 0;
    char s[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        ans += a[i];
        if (a[i] % 2 == 0)
        {
            ev += a[i];
        }
        s[i] = 'a' + (a[i] % 26);
    }
    switch (t)
    {
    case 1:
        cout << '7';
        break;
    case 2:
        if (a[0] > a[1])
            cout << "Bigger";
        else if (a[0] == a[1])
            cout << "Equal";
        else
            cout << "Smaller";
        break;
    case 3:
        cout << max(min(a[0], a[1]), min(max(a[0], a[1]), a[2]));
        break;
    case 4:
        cout << ans;
        break;
    case 5:
        cout << ev;
        break;
    case 6:
    for (int i=0; i<n;i++)
        cout << s[i];
        break;
    case 7:
        for
            ever
            {
                // deb(in);
                in = a[in];
                if (in == -1)
                {
                    cout << "Cyclic";
                    R;
                }
                else if (in >= n)
                {
                    cout << "Out";
                    R;
                }
                else if (in == n - 1)
                {
                    cout << "Done";
                    R;
                }
                else
                {
                    a[in] = -1;
                }
            }
        break;
    default:
        R;
        break;
    }
}

int main()
{
    SPEED;
    solve();
    R 0;
}