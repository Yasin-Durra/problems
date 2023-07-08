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
    int y,w,m;
    cin>>y>>w;
    m = max(y,w);
    if(m==1)cout<<"1/1";
    else  if(m==2)cout<<"5/6";
    else  if(m==3)cout<<"2/3";
    else  if(m==4)cout<<"1/2";
    else  if(m==5)cout<<"1/3";
    else  if(m==6)cout<<"1/6";
}
int main ()
{
SPEED;
solve();
R 0;
}