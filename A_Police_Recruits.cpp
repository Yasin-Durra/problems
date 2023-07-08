#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve() {
    ll o=0,c=0,x;
    ll t;
    cin>>t;
    while(t--){
        cin>>x;
        if(x==-1&&o==0)c++;
        else if(x!=-1) o+=x;
        else o+=x;
    }
    cout<<c;
}
int main ()
{
solve();
return 0;
}