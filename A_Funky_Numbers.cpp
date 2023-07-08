#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define fr first
#define sc second
#define pii pair<int,int>
#define pll pair<ll,ll>
#define SPEED ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define sz size()
#define deb(a) cout << #a << ": " << a << "\n"
#define all(x) x.begin(),x.end()
#define OO 1e18
#define R return
#define Test int TT;cin>>TT;for(int T=1;T<=TT;T++)
#define unq(vec) vec.resize(distance(vec.begin(),unique(all(vec))));

using namespace std;
const ll N = 500010,M = 2100,Mod = 998244353;

ll n,k,a[N];
string s;

pre(){
for(ll i=1;i<45000;i++){
    a[i]=(i*(i+1))/2;
}
}
int bs(int st,int en,ll v){
    if(en<st)
        R 0;
    int m=(st+en)/2;
   // cout<<m<<" ";
    if(a[m]>v)
        bs(st,m-1,v);
    else if(a[m]<v)
        bs(m+1,en,v);
    else R 1;
}
void solve() {
cin>>n;
for(int i=1;i*i<2*n;i++){
    if(bs(1,45000,n-a[i])){
        cout<<"YES";
        return;
    }
}
cout<<"NO";
}


int main() {
    SPEED;
    pre();
    solve();
    R 0;
}