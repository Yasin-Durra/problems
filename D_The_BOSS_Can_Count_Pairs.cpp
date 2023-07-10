#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int count_good_pairs(vector<int>& a, vector<int>& b) {
    // unordered_map<int, int> freq_map;
    int count = 0;

    // for (int num : a) {
    //     freq_map[num]++;
    // }

    for (int i = 0; i < a.size(); i++) {
        for (int j = i + 1; j < a.size(); j++) {
            int prod = a[i] * a[j];
            int summ = b[i] + b[j];
            if (prod == summ) {
                count++;
            }
        }
    }

    return count;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        vector<int> b(n);
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }

        int good_pairs = count_good_pairs(a, b);
        cout << good_pairs << endl;
    }

    return 0;
}
