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
ll gcd(ll a, ll b)
{
    if (a == 0)
    {
        return 0;
    }
    if (b == 0)
    {
        return 1;
    }
    ll r = a % b;
    ll k = a / b;
    R gcd(b, r) + k;
}
void solve()
{
    ll n;
    cin >> n;
    ll a[n], b[n];
    forin(0, n, a);
    forin(0, n, b);
    set<ll> st;
    for (int i = 0; i < n; i++)
    {
        // cout << __gcd(a[i], b[i]) << " ";
        if (a[i] == 0 && b[i] == 0)
        {
            continue;
        }
        else if (!a[i])
            st.insert(0);
        else if (!b[i])
            st.insert(1);
        else if (a[i] == b[i])
            st.insert(2);
        else
        {
            int A = b[i] / __gcd(a[i], b[i]);
            int B = a[i] / __gcd(a[i], b[i]);
            if ((A & 1) == (B & 1))
                st.insert(2);
            else if ((A & 1) && ((B & 1) ^ 1))
                st.insert(0);
            else if (((A & 1) ^ 1) && (B & 1))
                st.insert(1);
        }
    }
    if (st.size() <= 1)
        yes else no
}
int32_t main()
{
    SPEED;
    Test
    solve();
    R 0;
}