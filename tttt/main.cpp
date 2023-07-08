#include<bits/stdc++.h>

#define ll long long
#define pb push_back
#define mp make_pair
#define fr first
#define sc second
#define pii pair<int,int>
#define pll pair<ll,ll>
#define SPEED ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define sz size()
#define deb(a) cout << #a << ": " << a << "\n"
#define all(x) x.begin(),x.end()
#define OO 1e18
#define R return
#define Test int TT;cin>>TT;for(int T=1;T<=TT;T++)
#define unq(vec) vec.resize(distance(vec.begin(),unique(all(vec))));

using namespace std;
const ll N = 500010,M = 2100,Mod = 998244353;

ll n,k,a[N];
set<long long> cubes;

string s;


void precalc() {
  for (ll i = 1; i * i * i <= 1000000000000; i++) {
    cubes.insert(i * i * i);
  }
}

void solve() {

  ll x;
  cin >> x;
  for (ll i = 1; i * i * i <= x; i++) {
    if (cubes.count(x - i * i * i)) {
      cout << "YES\n";
      return;
    }
  }
  cout << "NO\n";

}


int main() {



 //precalc();
  int t,r,m,a1=2,a2;
  cin >> t;
  while (t--) {
        cin>>r;
        bool b=true;
        a1 = 2;
         while (r--) {
        cin>>m;
        if(m%2==1)a2=1;
        else a2=0;
        if(a1!=a2){
            b=false;
        }

            a1=a2;

  }
  if(!b)cout<<"YES\n";
  else cout<<"NO\n";
  }


    R 0;
}

/*

#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;

const ll N = 1'000'000'000'000L;

unordered_set<ll> cubes;

void precalc() {
  for (ll i = 1; i * i * i <= N; i++) {
    cubes.insert(i * i * i);
  }
}

void solve() {
  ll x;
  cin >> x;
  for (ll i = 1; i * i * i <= x; i++) {
    if (cubes.count(x - i * i * i)) {
      cout << "YES\n";
      return;
    }
  }
  cout << "NO\n";
}

int main() {
  precalc();
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}

*/

