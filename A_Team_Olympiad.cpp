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
    int t,s;
    vector<int> t1;
    vector<int> t2;
    vector<int> t3;
    Test{
        cin>>s;
        switch (s)
        {
        case 1:
            t1.pb(T);
            break;
        case 2:
            t2.pb(T);
            break;
        case 3:
            t3.pb(T);
            break;
        default:
            break;
        }
    }
    cout<<min(t1.sz,min(t2.sz,t3.sz))<<'\n';
    for(ll i=0;i<min(t1.sz,min(t2.sz,t3.sz));i++){
        cout<<t1[i]<<" "<<t2[i]<<" "<<t3[i]<<'\n';
    }

}
int main ()
{
SPEED;
solve();
R 0;
}