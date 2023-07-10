#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define fr first
#define sc second
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

using namespace std;
const ll N = 500010, M = 2100, Mod = 998244353;
int romanToInt(std::string s) {
    std::unordered_map<char, int> romanNumerals = {
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000}
    };
    
    int result = 0;
    int prevValue = 0;
    
    for (char c : s) {
        int curValue = romanNumerals[c];
        if (curValue > prevValue) {
            result += curValue - 2 * prevValue;
        } else {
            result += curValue;
        }
        prevValue = curValue;
    }
    
    return result;
}

void solve()
{
    string s;
    cin >> s;
    cout << romanToInt(s);
}
int main()
{
    solve();
    return 0;
}