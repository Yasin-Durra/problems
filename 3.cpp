#include <bits/stdc++.h>
using namespace std;

long long calculateCost(vector<int> &permutation)
{
    long long sum = 0;
    long long maxProduct = INT_MIN;

    for (int i = 0; i < permutation.size(); i++)
    {
        sum += (long long)permutation[i] * (i + 1);
        maxProduct = max(maxProduct, (long long)permutation[i] * (i + 1));
    }

    return sum - maxProduct;
}

long long solve(int n)
{
    vector<int> permutation(n);
    vector<int> ans(n);
    iota(permutation.begin(), permutation.end(), 1);

    long long maxCost = INT_MIN;

    do
    {
        long long res = calculateCost(permutation);
        if (res > maxCost)
        {
            maxCost = max(maxCost, res);
            ans = permutation;
        }
    } while (next_permutation(permutation.begin(), permutation.end()));
    for (auto i : ans)
    {
        cout << i << " ";
    }
    cout << endl;
    return maxCost;
}

int main()
{
    int n;
    cin >> n;
    cout << solve(n) << endl;

    return 0;
}