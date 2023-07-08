#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
ll n,q,a,x,y;
vector <ll>v;
    cin>>n>>q;
 for(ll i =0;i<n;i++){
        cin>>a;
    v.push_back(a);
 }
 sort(v.begin(),v.end());

  for(ll i =0;i<q;i++){
        cin>>x>>y;
        ll sum=0;
        for(ll i =n-x;i<=n-y;i++){
            sum+=v[i];
        }
        cout<<sum<<endl;
 }

 return 0;
}
