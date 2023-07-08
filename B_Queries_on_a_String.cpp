#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve() {
        ll t,n,ans=0,l,r,k;
        string s;
        cin>>s>>t;
        while(t--){
            cin>>l>>r>>k;
            for(ll j=0;j<k;j++){
                for(ll i=0;i<(r-l);i++){
                swap(s[i+l-1],s[r-1]);
            }
            }
        
        }
        cout<<s;
}
swap(char &a,char &b){
    char te = a;
    a=b;
    b=te;
}
int main ()
{
solve();
return 0;
}