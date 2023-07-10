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
#define dbga(a)           \
    for (auto x : a)      \
        cout << x << ' '; \
    cout << endl;
#define forin(i, n, a)          \
    for (int j = i; j < n; j++) \
        cin >> a[j];
#define all(x) x.begin(), x.end()
#define OO 1e18
#define PI 3.14159265358979323846
#define MM 1000000007
#define FO(name) freopen(name, "r", stdin);
#define R return
#define Test   \
    int TT;    \
    cin >> TT; \
    for (int T = 1; T <= TT; T++)
#define unq(vec) vec.resize(distance(vec.begin(), unique(all(vec))));
#define line cout << "______________________" << endl;
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define clr(m, val) memset(m, val, sizeof m)
#define fixTo(x, y) cout << fixed << setprecision(y) << x

using namespace std;

vector<int> compute_primes(int max_num)
{
    vector<bool> is_prime(max_num + 1, true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i <= max_num; i++)
    {
        if (is_prime[i])
        {
            for (int j = i * i; j <= max_num; j += i)
            {
                is_prime[j] = false;
            }
        }
    }
    vector<int> primes;
    for (int i = 2; i <= max_num; i++)
    {
        if (is_prime[i])
        {
            primes.push_back(i);
        }
    }
    return primes;
}

int main()
{
    vector<int> primes = compute_primes(10000);

    int n;
    cin >> n;

    string best_name;
    int best_factor = 0;
    for (int i = 0; i < n; i++)
    {
        string name;
        int id;
        cin >> name >> id;

        int largest_factor = 1;
        for (int p : primes)
        {
            if (p * p > id)
            {
                break;
            }
            while (id % p == 0)
            {
                largest_factor = p;
                id /= p;
            }
        }
        if (id > 1)
        {
            largest_factor = id;
        }

        if (largest_factor > best_factor)
        {
            best_factor = largest_factor;
            best_name = name;
        }
    }

    cout << best_name << endl;

    return 0;
}