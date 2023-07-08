#include <bits/stdc++.h>
#define ll long long
using namespace std;
double len(int x,int y){
    return sqrt((x*x)+(y*y));
}
double ang(int x,int y){
    return x/(len(x,y)*1.0);
}
void solve() {
    map<int,double,greater<double>>mp;
    ll n;
    int x,y;
    cin>>n;
    for(ll i=0;i<n;i++){
        cin>>x>>y;
        mp.insert({i+1,(ang(x,y)*360)/2*3.14});
    }
    for(auto m:mp){
        m+1
    }

}
int main ()
{
solve();
return 0;
}
