#include <bits/stdc++.h>
using namespace std;
#define F first
#define S second
#define p1 2*p
#define p2 p1+1
#define ll long long
#define pb push_back
#define LFT p1,L,Mid
#define pf push_front
#define Mid ((L+R)/2)
#define RGT p2,Mid+1,R
#define pi pair<int,int>
#define int ll
#define pii pair<pi,pi>
#define deb(x) cout<<#x<<"="<<x<<endl
#define go ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
const int mod=1e9+7;
int mul(int x,int y){
    return (ll) x*y %mod;
}
int sum(int x,int y){
    return (x+y)%mod;
}
int t,n,m;
int32_t main()
{
    go;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        int ans=0;
        vector <int> l(n),r(n),pre(m+5);
        for(int i=0;i<n;i++)
        {
            cin>>l[i]>>r[i];
            pre[l[i]-1]+=m-r[i]+1;
        }
        for(int i=m;i>=0;i--)
            pre[i]+=pre[i+1];
        for(int i=0;i<n;i++)
            ans=sum(ans,mul(l[i],pre[r[i]]));
        cout<<ans<<'\n';
    }
    return 0;
}
