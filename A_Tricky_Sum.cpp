#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve() {
        ll t,n,ans=0;
        cin>>t;
        while(t--){
            cin>>n;
            ans=(n*(n+1))/2;
            for(ll i=1;i<=n;i*=2){
                ans-=i*2;
            }
            cout<<ans<<endl;
        }
}
int main ()
{
solve();
return 0;
}