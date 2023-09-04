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
#define dbg(a) cout << #a << ':' << ' ' << a << '\n'
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
#define nl << "\n"
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define clr(m, val) memset(m, val, sizeof m)
#define btwn(v, a, b) (v <= b && v >= a)
#define fixTo(x, y) cout << fixed << setprecision(y) << x

using namespace std;
const ll N = 500010, M = 500, Mod = 1e9 + 7, K = 21, SQ = 316, T = 1440;
int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};
int dxx[] = {1, -1, 0, 0, -1, 1, -1, 1};
int dyy[] = {0, 0, 1, -1, -1, 1, 1, -1};
vector<ll> compute_primes(ll max_num)
{
    vector<bool> is_prime(max_num + 1, true);
    is_prime[0] = is_prime[1] = false;
    for (ll i = 2; i * i <= max_num; i++)
    {
        if (is_prime[i])
        {
            for (ll j = i * i; j <= max_num; j += i)
            {
                is_prime[j] = false;
            }
        }
    }
    vector<ll> primes;
    for (ll i = 2; i <= max_num; i++)
    {
        if (is_prime[i])
        {
            primes.push_back(i);
        }
    }
    return primes;
}
bool isIn(string s, string t)
{
    int j = 0;
    for (int i = 0; i < s.sz; i++)
    {
        if (s[i] == t[j])
        {
            j++;
        }
        if (j >= t.sz)
        {
            R 1;
        }
    }
    R 0;
}
void solve()
{
    vector<ll> primes = compute_primes(1e7);
    sort(all(primes));
    int q;
    cin >> q;
    string s = "", t = "";
    for (int qq = 0; qq < q; qq++)
    {
        // s = "";
        cin >> s;
        for (int i = 0; i < primes.sz; i++)
        {
            t = to_string(primes[i]);
            if (isIn(s, t) && t.sz > 1)
            {
                cout << primes[i] nl;
                break;
            }
        }
    }
}
int main()
{
    SPEED;
    // Test
    solve();
    R 0;
}