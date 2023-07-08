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
string s, k[3];
k[0] = "qwertyuiop";
k[1] = "asdfghjkl;";
k[2] = "zxcvbnm,./";
char c;
cin>>c>>s;
for (int l = 0; l < s.sz; l++)
{
    
for (int i = 0; i < 3; i++)
{
    for (int j = 0; j < k[i].sz; j++)
    {
        if(s[l]==k[i][j]){
            if(c=='R')s[l]=k[i][j-1];
            if(c=='L')s[l]=k[i][++j];
        }
    }
    
}

}
cout<<s;
}

int main ()
{
SPEED;
solve();
R 0;
}