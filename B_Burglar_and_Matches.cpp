#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pb push_back
#define mpa make_pair
#define fr first
#define sc second
#define ever (;;)
#define pii pair<int,int>
#define pll pair<ll,ll>
#define SPEED ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define sz size()
#define deb(a) cout << #a << ':'<<' ' << a << '\n'
#define dbga(a) for(auto x:a) cout << x << ' '; cout << endl;
#define all(x) x.begin(),x.end()
#define OO 1e18
#define PI 3.14159265358979323846
#define R return
#define Test int TT;cin>>TT;for(int T=1;T<=TT;T++)
#define unq(vec) vec.resize(distance(vec.begin(),unique(all(vec))));
#define fixTo(x , y) cout<< fixed << setprecision(y) << x 

using namespace std;
const ll N = 500010,M = 2100,Mod = 998244353;
void solve() {
ll n,m,a,b,ans=0,t=0;
vector<pair<ll,ll>>v;
cin>>n>>m;
for (ll i = 0; i < m; i++)
{
    cin>>a>>b;
    v.pb({b,a});
}
sort(v.rbegin(),v.rend());
ll i=0;
for(ll i =0 ; i<m;i++)
{
    if(v[i].sc+t<=n)
    {
        ans+=(v[i].fr*v[i].sc);
        t+=v[i].sc;
    }else{
        ans+=(n-t)*v[i].fr;
        break;
    }

}
cout<<ans;
}
int main ()
{
SPEED;
solve();
R 0;
}