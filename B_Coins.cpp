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
    string s[3];
    int a=0,b=0,c=0;
    cin>>s[0]>>s[1]>>s[2];
    for (int i = 0; i < 3; i++)
    {
        if(s[i][0]=='A'&&s[i][1]=='>'&&s[i][2]=='B'){
            a+=10;
            b-=10;
        }
        if(s[i][0]=='A'&&s[i][1]=='<'&&s[i][2]=='B'){
            b+=10;
            a-=10;
        }
        if(s[i][0]=='A'&&s[i][1]=='>'&&s[i][2]=='C'){
            a+=10;
            c-=10;
        }
        if(s[i][0]=='A'&&s[i][1]=='<'&&s[i][2]=='C'){
            c+=10;
            a-=10;
        }
        if(s[i][0]=='B'&&s[i][1]=='>'&&s[i][2]=='A'){
            b+=10;
            a-=10;
        }
        if(s[i][0]=='B'&&s[i][1]=='<'&&s[i][2]=='A'){
            a+=10;
            b-=10;
        }
        if(s[i][0]=='B'&&s[i][1]=='>'&&s[i][2]=='C'){
            b+=10;
            c-=10;
        }
        if(s[i][0]=='B'&&s[i][1]=='<'&&s[i][2]=='C'){
            c+=10;
            b-=10;
        }
        if(s[i][0]=='C'&&s[i][1]=='>'&&s[i][2]=='A'){
            c+=10;
            a-=10;
        }
        if(s[i][0]=='C'&&s[i][1]=='<'&&s[i][2]=='A'){
            a+=10;
            c-=10;
        }
        if(s[i][0]=='C'&&s[i][1]=='>'&&s[i][2]=='B'){
            c+=10;
            b-=10;
        }
        if(s[i][0]=='C'&&s[i][1]=='<'&&s[i][2]=='B'){
            b+=10;
            c-=10;
        }
    }
    set<int>st;
    st.insert(a);
    st.insert(b);
    st.insert(c);
    if(st.sz==3){
    if(a<0)cout<<'A';
    if(b<0)cout<<'B';
    if(c<0)cout<<'C';
    if(a==0)cout<<'A';
    if(b==0)cout<<'B';
    if(c==0)cout<<'C';
    if(a>0)cout<<'A';
    if(b>0)cout<<'B';
    if(c>0)cout<<'C';
    }else cout<<"Impossible";
}
int main ()
{
SPEED;
solve();
R 0;
}