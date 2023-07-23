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

void solve()
{
    ll n, op;
    cin >> n >> op;
    ll a[n];
    forin(0, n, a);
    if (op == 1)
    {
        cout << "7\n";
    }
    else if (op == 2)
    {
        if (a[0] == a[1])
        {
            cout << "Equal"
                 << "\n";
        }
        else if (a[0] > a[1])
        {
            cout << "Bigger"
                 << "\n";
        }
        else
        {
            cout << "Smaller"
                 << "\n";
        }
    }
    else if (op == 3)
    {
        // ll aa = a[0], b = a[1], c = a[2];
        // if (aa > b)
        // {
        //     if (b > c)
        //     {
        //         // a > b > c
        //         cout << b << endl;
        //     }
        //     else if (aa > c)
        //     {
        //         // a > c >= b
        //         cout << c << endl;
        //     }
        //     else
        //     {
        //         // c >= a > b
        //         cout << aa << endl;
        //     }
        // }
        // else
        // {
        //     if (aa > c)
        //     {
        //         // b >= a > c
        //         cout << aa << endl;
        //     }
        //     else if (b > c)
        //     {
        //         // b > c >= a
        //         cout << c << endl;
        //     }
        //     else
        //     {
        //         // c >= b >= a
        //         cout << b << endl;
        //     }
        // }
        cout << max(min(a[0], a[1]), min(max(a[0], a[1]), a[2]));
    }
    else if (op == 4)
    {
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += a[i];
        }
        cout << sum << endl;
    }
    else if (op == 5)
    {
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (!(a[i] & 1))
            {
                sum += a[i];
            }
        }
        cout << sum << endl;
    }
    else if (op == 6)
    {
        string ans = " ";
        for (int i = 0; i < n; i++)
        {
            ans += 'a' + (a[i] % 26);
        }
        cout << ans << endl;
    }
    else if (op == 7)
    {
        ll i = a[0];
        set<ll> st;
        while (true)
        {
            if (a[i] == n - 1)
            {
                cout << "Done"
                     << "\n";
                R;
            }
            if (a[i] > n - 1)
            {
                cout << "Out"
                     << "\n";
                R;
            }
            if (st.count(a[i]))
            {
                cout << "Cyclic"
                     << "\n";
                R;
            }
            st.insert(a[i]);
            i = a[i];
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