#include <bits/stdc++.h>

#define nline "\n"
#define ll long long
using namespace std;
void solve() {

    ll n=0,h =0,t=0,c,b=0,k;
    ll a1,a2,a3,a4;
    cin>>t;
    while(t--){
        h=0;
    ll a[1001];
    bool b=false;

    cin>>n;
    if(n==3)
        { for(ll i=0;i<n;i++)
    {
       cin>>a[i];
       h+=a[i];

    }
    if((h==a[0]||h==a[1]||h==a[2]))b=true;
    }
    else{
     for(ll i=0;i<n;i++)
    {
       cin>>a1;
       h+=a1;

    }}
   if(h==0||b)
    cout<<"YES\n";
    else cout<<"NO\n";

    }}

int main ()
{
    solve();
    return 0;
}
