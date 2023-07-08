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
#define PI 3.14159265358979323846
#define R return
#define Test int TT;cin>>TT;for(int T=1;T<=TT;T++)
#define unq(vec) vec.resize(distance(vec.begin(),unique(all(vec))));
#define fixTo(x , y) cout<< fixed << setprecision(y) << x 

using namespace std;
const ll N = 500010,M = 2100,Mod = 998244353;
void solve() {
int n;
Test{
    cin>>n;
    int a[500005]={0},j=1;
    cout<<2<<'\n';

    while(j<=n){
    for(int i=j;i<=n;i*=2)
    {
        if(!a[i])
        cout<<i<<' ';
        a[i]=1;
        if(!a[i*2]&&(i*2<=n))
        cout<<i*2<<' ';
        a[i*2]=1;
    }
    j++;
    }
    cout<<'\n';
}
}
int main ()
{
SPEED;
solve();
R 0;
}