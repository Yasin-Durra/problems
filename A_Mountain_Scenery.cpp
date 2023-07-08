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
int n,k,y[400]={0};
cin>>n>>k;
for (int i = 1; i <= 2*n+1; i++)
{   
    cin>>y[i];
}
for (int i = 1; i <= 2*n+1; i++)
{   
    if(i%2==0&&k&&y[i-1]<y[i]-1&&y[i+1]<y[i]-1){
        k--;
        cout<<y[i]-1<<' ';
    }else  cout<<y[i]<<' ';
}
}
int main ()
{
SPEED;
solve();
R 0;
}