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
ll ans = 0;
bool prime[3600];
void sieve()
{
    memset(prime, 1, sizeof(prime));
    prime[0] = prime[1] = 0;
    for (ll i = 2; i * i <= 3600; i++)
    {
        if (prime[i])
        {
            for (ll j = i * i; j <= 3600; j += i)
                prime[j] = 0;
        }
    }
}
void solve(int n)
{
    int cnt = 0;
    for (int i = 2; i*i < n; i++)
    {
        if (n % i == 0 && prime[i])
        {
            cnt += 1;
        }if (n % i == 0 && prime[n/i])
        {
            cnt += 1;
        }
    }
    if (cnt == 2)
    {
        ans++;
    }
}
int main()
{
    sieve();
    SPEED;
    Test
        solve(T);
    cout << ans;
    R 0;
}