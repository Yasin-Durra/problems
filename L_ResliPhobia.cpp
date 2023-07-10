// #include <bits/stdc++.h>
// #define ll long long
// #define ull unsigned long long
// #define pb push_back
// #define mpa make_pair
// #define fr first
// #define sc second
// #define ever (;;)
// #define pii pair<int, int>
// #define pll pair<ll, ll>
// #define SPEED                \
//     ios::sync_with_stdio(0); \
//     cin.tie(0);              \
//     cout.tie(0)
// #define sz size()
// #define deb(a) cout << #a << ':' << ' ' << a << '\n'
// #define dbga(a)           \
//     for (auto x : a)      \
//         cout << x << ' '; \
//     cout << endl;
// #define forin(i, n, a)          \
//     for (int j = i; j < n; j++) \
//         cin >> a[j];
// #define all(x) x.begin(), x.end()
// #define OO 1e18
// #define PI 3.14159265358979323846
// #define MM 1000000007
// #define FO(name) freopen(name, "r", stdin);
// #define R return
// #define Test   \
//     int TT;    \
//     cin >> TT; \
//     for (int T = 1; T <= TT; T++)
// #define unq(vec) vec.resize(distance(vec.begin(), unique(all(vec))));
// #define line cout << "______________________" << endl;
// #define yes cout << "YES" << endl;
// #define no cout << "NO" << endl;
// #define clr(m, val) memset(m, val, sizeof m)
// #define fixTo(x, y) cout << fixed << setprecision(y) << x

// using namespace std;
// const ll N = 500010, M = 2100, Mod = 998244353;

// set<ll> s;
// stack<char> st;
// vector<char> v;

// void solve()
// {

//     ll k = 0, e = 0, f = 0, q = 1, n, m = 2e9, c = 0, d = 0, j = 1;
//     char aa = '0';
//     string z = "", x, y = "", ct;
//     bool ok = true, ok1 = true;
//     ll a[200200], b[200200];
//     map<int, int> mp;
//     // cout <<fixed <<setprecision(12) ;
//     cin >> n >> k;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
//     for (int i = 0; i < n; i++)
//     {
//         int j = i;
//         mp[a[j]]++;
//         while (j + 1 < n and a[j] % 2 == a[j + 1] % 2)
//         {
//             mp[a[j + 1]]++;
//             j++;
//         }
//         int cnt = 0;
//         d = k;
//         f = k;
//         for (auto it = mp.rbegin(); it != mp.rend(); it++)
//         {
//             d -= it->second; // 4
//             if (d >= 0)
//             {
//                 c += it->first * it->second;
//             }
//             else
//             {
//                 c += it->first * (k);
//                 break;
//             }
//             k -= it->second;
//         }
//         i = j;
//         k = f;
//         mp.clear();
//     }
//     cout << c << endl;
// }
// int main()
// {
//     SPEED;
//     Test
//     solve();
//     R 0;
// }

#include <bits/stdc++.h>
#include <string>
typedef long long ll;
using namespace std;
set<ll> s;
stack<char> st;
#define RS ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
vector<char> v;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll k = 0, e = 0, f = 0, q = 1, n, m = 2e9, c = 0, d = 0, j = 1;
        bool ok = true, ok1 = true;
        ll a[200200], b[200200];
        map<int, int> mp;
        // cout <<fixed <<setprecision(12) ;
        cin >> n >> k;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            int j = i;
            mp[a[j]]++;
            while (j + 1 < n and a[j] % 2 == a[j + 1] % 2)
            {
                mp[a[j + 1]]++;
                j++;
            }
            int cnt = 0;
            d = k;
            f = k;
            for (auto it = mp.rbegin(); it != mp.rend(); it++)
            {
                d -= it->second; // 4
                if (d >= 0)
                {
                    c += it->first * it->second;
                }
                else
                {
                    c += it->first * (k);
                    break;
                }
                k -= it->second;
            }
            i = j;
            k = f;
            mp.clear();
        }
        cout << c << endl;
    }
}
