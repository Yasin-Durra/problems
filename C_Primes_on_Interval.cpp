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
bool prime[2002002];
int a[2002002];
void sieve()
{
    memset(prime, 1, sizeof(prime));
    prime[0] = prime[1] = 0;
    for (ll i = 2; i * i <= 2002002; i++)
    {
        if (prime[i])
        {
            for (ll j = i * i; j <= 2002002; j += i)
                prime[j] = 0;
        }
    }
}
bool chk(int l, int n, int k)
{
    int i = 0, j = l - 1, cnt = 0;
    for (int i = 0; i < l; i++)
    {
        if (prime[a[i]])
        {
            cnt++;
        }
    }
    
        if (cnt < k)
        {
            R 0;
        }
    for (int i = 0; j < n - 1;)
    {
        if (prime[a[i]])
        {
            cnt--;
        }
        if (prime[a[j + 1]])
        {
            cnt++;
        }
        // deb(l);
        // deb(cnt);
        j++;
        i++;
        if (cnt < k)
        {
            R 0;
        }
    }
    R 1;
}

void solve()
{
    int ans = 0;
    int left = 0;
    int n, k, f, r;
    cin >> f >> r >> k;
    n = r - f + 1;
    int right = n;
    for (int i = 0; i < n; i++)
    {
        a[i] = f + i;
    }
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (chk(mid, n, k))
        {
            ans = mid;
            // deb(ans);
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }
    if (ans)
        cout << ans;
    else
        cout << -1;
}
int main()
{
    SPEED;
    sieve();
    solve();
    R 0;
}