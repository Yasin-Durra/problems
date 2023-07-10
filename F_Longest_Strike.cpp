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
    int n, k;
    map<ll, int> mp;
    cin >> n >> k;
    vector<ll> vec(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
        mp[vec[i]]++;
    }
    sort(all(vec));
    // dbga(vec);
    int an = 0, ans = 0, l = 0, r = 0;
    for (auto it = mp.begin(); it != mp.end(); ++it)
    {
        auto next = std::next(it);
        auto prev = std::prev(it);
        if (it->fr != (prev->fr + 1))
        {
            // deb(it->fr);
            // deb(prev->fr);
            an = 0;
        }
        if (it->second >= k)
        {
            an++;
            // deb(an);
            // deb(it->fr);
            // deb(it->sc);
        }
        else
        {
            an = 0;
        }

        if (an > ans)
        {
            ans = max(ans, an);
            r = it->fr;
            l = it->fr - ans + 1;
            // deb(l);
            // deb(r);
            // cout << ans << "\n";
        }
    }
    // deb(l);
    // deb(r);
    if (r == 0)
    {
        cout<<-1<<"\n";
    }
    else
    {
        cout << l << " " << r << "\n";
    }
}
int main()
{
    SPEED;
    Test
    solve();
    R 0;
}