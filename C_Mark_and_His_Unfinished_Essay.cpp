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
#define line cout<<"______________________"<<endl;
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define clr(m,val) memset(m,val,sizeof m)
#define fixTo(x , y) cout<< fixed << setprecision(y) << x 

using namespace std;
const ll N = 500010,M = 2100,Mod = 998244353;
void solve() {
    int n,c,q;
    ll l,r,k,d=0;
    vector<pair<ll,ll>>v;
    string s;
Test{
    s="";
    v.clear();
    cin>>n>>c>>q>>s;
for (ll i = 0; i < c; i++)
{
    cin>>l>>r;
    v.pb({l,r});
    // s=s+s.substr(l-1,r-l+1);
    // cout<<s<<'\n';
}
int j = 0;
for (ll i = 0; i < q; i++)
{
    cin>>k;
    for (j; s.sz<=k-d-1; j++)
    {
        s=s+s.substr((v[j].fr)-1,(v[j].sc)-(v[j].fr)+1);
    // cout<<s<<'\n';
    }
    if(s.sz>10){
        s=s.substr(7,s.sz-7);
        d+=7;
        cout<<d<<' '<<s<<'\n';
    }
    cout<<s[k-1]<<'\n';
}
}
}
int main ()
{
SPEED;
solve();
R 0;
}