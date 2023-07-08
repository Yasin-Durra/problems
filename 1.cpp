#include <bits/stdc++.h>


#define nline "\n"
#define ll long long
using namespace std;
void solve() {

    ll n=0,h =0,t=0,c,b=0,k;
    ll a1,a2,a3,a4;
    int ho,g;
    vector<pair<int,int>>v;
    cin>>t;
    while(t--){
    cin>>ho>>g;
    pair<int,int> p;
    p.first = ho;
    p.second =g;
    v.push_back(p);


    }
    k=v.size();
    for(int i=0;i<v.size();i++)
    {
    for(int j=i;i<v.size();j++)
    {
     if(v[i].first==v[j].second)h++;
     if(v[i].second==v[j].first)h++;
    }
    }
    cout<<h<<"\n";
    }
int main ()
{
    solve();
    return 0;
}
