#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pb push_back
#define mpa make_pair
#define fr first
#define sc second
#define ever (;;)
#define pii pair<int,int>
#define pll pair<ll,ll>
#define SPEED ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define sz size()
#define deb(a) cout << #a << ':'<<' ' << a << '\n'
#define dbga(a) for(auto x:a) cout << x << ' '; cout << endl;
#define all(x) x.begin(),x.end()
#define OO 1e18
#define PI 3.14159265358979323846
#define R return
#define Test int TT;cin>>TT;for(int T=1;T<=TT;T++)
#define unq(vec) vec.resize(distance(vec.begin(),unique(all(vec))));
#define fixTo(x , y) cout<< fixed << setprecision(y) << x 

using namespace std;
const ll N = 500010,M = 2100,Mod = 998244353;
void solve() {
Test{
    int n; cin >> n;
		vector<string> a(n);
		for (auto& s : a)
			cin >> s;
		int res = 0;
		for (int l = 0; l < n / 2; l++) {
			for (int i = l; i < n - l; i++) {
				int cnt = 0;
				cnt += (a[l][i] == '1');
				a[l][i] = '2';
				cnt += (a[i][n - 1 - l] == '1');
				a[i][n - 1 - l] = '2';
				cnt += (a[n - 1 - l][n - 1 - i] == '1');
				a[n - 1 - l][n - 1 - i] = '2';
				cnt += (a[n - 1 - i][l] == '1');
				a[n - 1 - i][l] = '2';
				res += min(cnt, 4 - cnt);
			}
		}
		cout << res << "\n";
}
}
int main ()
{
SPEED;
solve();
R 0;
}