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
    priority_queue <int>q;
    int a,e;
    bool b=true,f=true;
    cin>>e;
    while (e!=0)
    {
        cin>>a;
        if(a==e){
            b=true;
            cout<<e--<<' ';
            if(!q.empty()){
            while(q.top()==e){
            cout<<e--<<' ';
            q.pop();
            }}
        }else {
            if(b&&!f)cout<<'\n';
            b=false;
            cout<<'\n';
            q.push(a);
        }
        f=false;
    }
}
int main ()
{
SPEED;
solve();
R 0;
}