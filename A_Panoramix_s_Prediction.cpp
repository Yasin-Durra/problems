#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pb push_back
#define mpa make_pair
#define fr first
#define sc second
#define ever (;;)
#define pii pair<int, int>
#define pll pair<ll, ll>
#define SPEED                \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0)
#define sz size()
#define deb(a) cout << #a << ':' << ' ' << a << '\n'
#define all(x) x.begin(), x.end()
#define OO 1e18
#define R return
#define Test   \
    int TT;    \
    cin >> TT; \
    for (int T = 1; T <= TT; T++)
#define unq(vec) vec.resize(distance(vec.begin(), unique(all(vec))));
#define fixTo(x, y) cout << fixed << setprecision(y) << x

using namespace std;
int isPrime[64];

void sieve()

{

    for (int i = 1; i <= 64; i++)

    {

        isPrime[i] = 1;
    }

    isPrime[1] = 0;

    for (int i = 1; i <= 8; i++)

    {

        if (isPrime[i] == 1)

        {

            for (int j = i * i; j <= 64; j += i)

                isPrime[j] = 0;
        }
    }
}

const ll N = 500010, M = 2100, Mod = 998244353;
void solve()
{
    sieve();
    int n,m;
    bool b=true;
    cin>>n>>m;
    for (int i = n; i <= m; i++)
    {
        if((isPrime[i] && i!=n&&i!=m)||!isPrime[m]||!isPrime[n])
        b=false;
    }
    if(b)cout<<"YES";
    else cout<<"NO";
}
int main()
{
    SPEED;
    solve();
    R 0;
}
/*




int main()

{

    int n;

    cin>>n;

    sieve();

    while(n--){

         long long a;
        cin>>a;
        long long root=sqrt(a);
       if(isPrime[root]&&root*root==a)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    }
    return 0;

}*/