#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve() { 
    int n;
    int a[1001];
    cin>>n;
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    int st=0,en=n-1,s=0,d=0,m;
    for(ll i=0;i<n;i++){
        if(a[st]>a[en]){m=a[st];st++;}
        else{m=a[en];en--;}
        if(i%2==0)s+=m;
        else d+=m;
    }
    cout<<s<<" "<<d;
}
int main ()
{
solve();
return 0;
}