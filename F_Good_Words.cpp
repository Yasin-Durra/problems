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
    string a, b, q[4];
    bool g = 0, ag = 0;
    cin >> a >> b;
    int l = 0, r = 3;
    while (r < a.sz)
    {
        if (a.substr(l, 4) == b)
        {
            g = 1;
            break;
        }
        l++;
        r++;
    }
    if (g)
        cout << "good" << endl;
    else
    {
        for (int i = 0; i < 4; i++)
        {
            for(int j=0;j<4;j++){
                if(j!=i)
                q[i]+=b[j];
            }
        }
        int l = 0, r = 2;
    while (r < a.sz)
    {
        string sub =a.substr(l, 3);
        for(int i=0;i<4;i++){
        if (sub == q[i])
        {
            ag = 1;
            //break;
        }
        }
        l++;
        r++;
    }
    if (ag)
        cout << "almost good" << endl;
        else
        cout<<"none"<<endl;
    }
    
}
int main()
{
    SPEED;
    Test
    solve();
    R 0;
}