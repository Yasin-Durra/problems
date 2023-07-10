#include <bits/stdc++.h>
#include <limits>

#define ll long long
#define pb push_back
#define mp make_pair
#define fr first
#define sc second
#define pii pair<int,int>
#define pll pair<ll,ll>
#define SPEED ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define sz size()
#define dbg(a) cout << #a << ": " << a << endl;
#define dbga(a) for(auto x:a) cout << x << ' '; cout << endl;
#define all(x) x.begin(),x.end()
#define OO 1e12
#define Test int TT;cin >> TT;for(int T=1;T<=TT;T++)
#define unq(vec) vec.resize(distance(vec.begin(),unique(all(vec))));
#define AnsOk(ok) cout << (ok ? "YES" : "NO") << endl;
#define NIL 0
#define INF INT_MAX

using namespace std;

const ll N = 500010,M = 500,Mod = 1e9 + 7, K = 21, SQ = 316, T = 1440;
int dx[] = {1,-1,0,0};
int dy[] = {0,0,1,-1};


ll n,m;

char a[M][M];


void Dfs(int x,int y,int color) {

    if(x >= n || x < 0 || y >= m || y < 0) return;

    if(a[x][y] != '.') return;

    a[x][y] = (color == 0 ? 'B' : 'W');

    for(int i = 0 ; i < 4; i++) {

        int xx = x + dx[i];
        int yy = y + dy[i];

        int newColor = 1 - color;

        Dfs(xx,yy,newColor);
    }

}

void testCase() {

    cin >> n >> m;


    for(int i = 0 ; i  < n ; i++) {
        for(int j = 0 ; j < m ; j++) {
            cin >> a[i][j];
        }
    }


    for(int i = 0 ; i  < n ; i++) {
        for(int j = 0 ; j < m ; j++) {
            if(a[i][j] == '.') {
                Dfs(i,j,0);
            }
        }
    }

    for(int i = 0 ; i  < n ; i++) {
        for(int j = 0 ; j < m ; j++) {
            cout << a[i][j];
        }
        cout << endl;
    }

}



int main() {



    SPEED;

//    Test {
    testCase();
//    }


    return 0;
}

/*

*/
