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
    int r1, r2, c1, c2,r11, r22, c11, c22, d1, d2,d11, d22, a[3][3];
    cin >> r11 >> r22;
    cin>> c11 >> c22;
    cin>> d11 >> d22;
    r1=r11;
    r2=r22;
    c1=c11;
    c2=c22;
    d1=d11;
    d2=d22;
    for (int i = 1; i <= 9; i++)
    {
        a[1][1] = i;
        a[1][2] = r1 - i;
        a[2][1] = c1 - i;
        a[2][2] = d1 - i;
        if ((r2 == a[2][1] + a[2][2]) && (c2 == a[1][2] + a[2][2]) && (d2 == a[1][2] + a[2][1]))
        {
            
            set<int> st;
            if(a[1][1]>0&&a[1][1]<10)
            st.insert(a[1][1]);
            if(a[1][2]>0&&a[1][2]<10)
            st.insert(a[1][2]);
            if(a[2][1]>0&&a[2][1]<10)
            st.insert(a[2][1]);
            if(a[2][2]>0&&a[2][2]<10)
            st.insert(a[2][2]);
            if (st.sz == 4)
            {
                cout << a[1][1] << ' ' <<a[1][2] << '\n' <<a[2][1] << ' ' <<a[2][2];
                R;
            }
        }
    }
    cout<<"-1";
}
int main()
{
    SPEED;
    solve();
    R 0;
}