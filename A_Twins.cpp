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
#define all(x) x.begin(),x.end()
#define OO 1e18
#define R return
#define Test int TT;cin>>TT;for(int T=1;T<=TT;T++)
#define unq(vec) vec.resize(distance(vec.begin(),unique(all(vec))));
#define fixTo(x , y) cout<< fixed << setprecision(y) << x 

using namespace std;
const ll N = 500010,M = 2100,Mod = 998244353;
void solve() {
vector<int>v;
int a,s1=0,s2=0,n=1;
Test{
    cin>>a;
    v.pb(a);
    s2+=a;
}
sort(all(v));
for (int i = 0; i < TT; i++)
{       s1+=v[i];
        s2-=v[i];
    if(s1>=s2){
        n=i;
        break;
    }
}
cout<<TT-n;
}
int main ()
{
SPEED;
solve();
R 0;
}