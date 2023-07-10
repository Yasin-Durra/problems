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
    ll t; cin>>t;
    while(t--)
    {
        string a,b,ans="Yes\n"; cin>>a>>b;
        for(ll i=0; i<a.length(); i++){
            a[i]=tolower(a[i]);
        }
        for(ll i=0; i<b.length(); i++){
            b[i]=tolower(b[i]);
        }
        if(a.length()!= b.length())ans="No\n";
        else{
        for(ll i=0; i<a.length(); i++){
            if(a[i]!=b[i]) {
                if(a[i]=='i'  and b[i]=='e')continue;
                else if(a[i]=='e' and b[i]=='i' )continue;
                else if(a[i]=='p' and b[i]=='b' )continue;
                else if(a[i]=='b' and b[i]=='p' )continue;
                else {ans="No\n"; break;}
            }
        }
        }
          cout<<ans;
    }
}
int main ()
{
SPEED;
solve();
R 0;
}