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
#define line cout<<"______________________"<<endl;
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define answer(x) cout << (x ? "Yes\n" : "No\n")
#define clr(m,val) memset(m,val,sizeof m)

using namespace std;
const ll N = 500010,M = 2100,Mod = 998244353;
void solve() {
    int n;
    string s;
Test{
 int n,i;
        cin>> n;
        string s[n];
        map<string , int >mp;
        for(i=0;i<n;i++)
        {
            cin>> s[i];
            mp[s[i]]++;
        }
        string ans="";
        for(i=0;i<n;i++)
            ans+="0";
        for(i=0;i<n;i++)
        {
            string temp="",temp2="";
            for(int j=0;j<s[i].size();j++)
            {
                temp+=s[i][j];
                temp2="";
                for(int k=j+1;k<s[i].size();k++)
                    temp2+=s[i][k];
                if(mp[temp]&&mp[temp2])
                {
                    ans[i]='1';
                    break;
                }
            }
        }
        cout<< ans << "\n";
    

}
}
int main ()
{
SPEED;
solve();
R 0;
}