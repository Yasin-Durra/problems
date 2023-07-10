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
bool ar[N] = {0}, ad[N] = {0};
ll n, d, r;
void solve()
{
    memset(ar, false, sizeof(ar));
    memset(ad, false, sizeof(ad));
    cin >> n >> d >> r;
    ll dd = d, rr = r, cnt = 1;
    while (1)
    {
        ad[dd] = 1;
        ar[rr] = 1;
        if (ad[rr])
        {
            break;
        }
        if (ar[dd])
        {
            break;
        }
        rr += r;
        dd += d;
        rr %= n;
        dd %= n;
        cnt++;
    }
    cout << cnt << endl;
}
int main()
{
    SPEED;
    Test
    solve();
    R 0;
}