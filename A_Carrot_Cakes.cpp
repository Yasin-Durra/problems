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
int n,t,k,d,o1,o2,p,t1,t2,ct=0;
cin>>n>>t>>k>>d;
p=ceil(n*1.0/k);
o1=t*p;
t1=0;
t2=d;
for ever{
if(p==0)break;
ct=min(t1,t2);
if(t1==ct&&p>0){p--;t1+=t;}
if(t2==ct&&p>0){p--;t2+=t;}
}
o2=max(t1,t2);
(o1<=o2)?cout<<"NO":cout<<"YES";

}
int main ()
{
SPEED;
solve();
R 0;
}