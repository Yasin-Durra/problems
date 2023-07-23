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
#define dbg(a) cout << #a << ':'<<' ' << a << '\n'
#define dbga(a) for(auto x:a) cout << x << ' '; cout << endl;
#define forin(i,n,a) for(int j =i ; j<n;j++)cin>>a[j];
#define all(x) x.begin(),x.end()
#define OO 1e18
#define PI 3.14159265358979323846
#define MM 1000000007
#define FO(name) freopen(name,"r",stdin);
#define R return
#define Test int TT;cin>>TT;for(int T=1;T<=TT;T++)
#define unq(vec) vec.resize(distance(vec.begin(),unique(all(vec))));
#define line cout<<"______________________"<<endl;
#define nl << "\n"
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define clr(m,val) memset(m,val,sizeof m)
#define fixTo(x , y) cout<< fixed << setprecision(y) << x 

using namespace std;
const ll Mod = 1e9 + 7, K = 21, SQ = 316, T = 1440;
int dx[] = {1,-1,0,0};
int dy[] = {0,0,1,-1};

const int MAXN = 105;
const int MAXM = 105;

int N, M;
int P[MAXN], C[MAXN];
int F[MAXN][MAXM];
vector<int> products_with_function[MAXM];

void solve() {
    
    cin >> N >> M;

    for (int i = 1; i <= N; i++) {
        cin >> P[i] >> C[i];
        for (int j = 1; j <= C[i]; j++) {
            cin >> F[i][j];
            products_with_function[F[i][j]].push_back(i);
        }
    }

    bool found = false;
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            if (P[i] >= P[j]) continue; // condition 1
            bool contains_all_functions = true;
            for (int k = 1; k <= C[j]; k++) {
                if (find(F[i] + 1, F[i] + C[i] + 1, F[j][k]) == F[i] + C[i] + 1) {
                    contains_all_functions = false;
                    break;
                }
            }
            if (!contains_all_functions) continue; // condition 2
            if (P[i] > P[j] || C[i] > C[j]) {
                found = true;
                break;
            }
            bool found_extra_function = false;
            for (int k = 1; k <= C[j]; k++) {
                if (!found_extra_function && find(F[i] + 1, F[i] + C[i] + 1, F[j][k]) == F[i] + C[i] + 1) {
                    found_extra_function = true;
                } else if (find(products_with_function[F[j][k]].begin(), products_with_function[F[j][k]].end(), i) == products_with_function[F[j][k]].end()) {
                    found_extra_function = true;
                }
            }
            if (found_extra_function) {
                found = true;
                break;
            }
        }
        if (found) break;
    }

    cout << (found ? "Yes" : "No") << endl;

}
int main ()
{
SPEED;
//Test
solve();
R 0;
}