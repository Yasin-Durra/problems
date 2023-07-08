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
#define fixTo(x, y) cout << fixed << setprecision(y) << x

using namespace std;
const ll N = 500010, M = 2100, Mod = 998244353;
void solve()
{
    string s1, s2;
    int a1 = 0, a2 = 0;
    cin >> s1 >> s2;
    int i;
    for (i = 0; s1[i] != '|'; i++)
    {
        a1++;
    }
    for (++i; i < s1.sz; i++)
    {
        a2++;
    }
    if (max(a1, a2) <= ((s1.sz + s2.sz - 1) / 2) && (s1.sz + s2.sz - 1) % 2 == 0)
    {
        int cu=0;
        for (int i = 0; i<a1; i++)
        {
            cout<<s1[i];
        }
        for (int i = 0; a1+i<((s1.sz + s2.sz - 1) / 2); i++)
        {
            cu=i+1;
            cout<<s2[i];
        }
        cout<<'|';
        for (int i = s1.sz-a2; i<s1.sz; i++)
        {
            cout<<s1[i];
        }
        for (int i = cu; a2<((s1.sz + s2.sz - 1) / 2); i++)
        {
            cout<<s2[i];
            a2++;
        }
    }
    else
    {
        cout << "Impossible";
    }
}
int main()
{
    SPEED;
    solve();
    R 0;
}