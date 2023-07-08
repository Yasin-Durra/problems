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
    int n;
    cin >> n;
    vector<int> v(n), w(n), ans;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        w[i] = v[i];
    }
    map<int, int> mp;
    sort(all(v));
    for (int i = 0; i < n; i++)
    {
        mp[v[i]] = i;
        v[i] = i;
    }
    for (int i = 0; i < n; i++)
    {
        w[i] = mp[w[i]];
    }
    int r = -1, l = -1;
    for (int i = 0; i < n; i++)
    {
        if (w[i] != i)
        {
            l = i;
            break;
        }
    }
    for (int i = n-1; i >= 0; i--)
    {
        if (w[i] != i)
        {
            r = i;
            break;
        }
    }
    if(l==-1&&r==-1){
        cout<<"yes\n1 1";
    }else
    {
        // dbga(w);
        reverse(w.begin()+l,w.begin()+r+1);
        // dbga(w);
        bool ok=1;
        for (int i = 0; i < n; i++)
        {
            if(w[i]!=i)ok=0;
        }
        if (ok)
        {
            cout<<"yes\n"<<l+1<<' '<<r+1;
        }else
        {
            cout<<"no";
        }
        
        
    }
    
}
int main()
{
    SPEED;
    solve();
    R 0;
}