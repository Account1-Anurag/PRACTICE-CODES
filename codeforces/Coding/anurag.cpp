#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

void solve() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<pair<int, int>> ranges(n);
        vector<int> results(n, 0);
        set<int> available;

        for (int i = 0; i < n; ++i) {
            cin >> ranges[i].first >> ranges[i].second;
        }

        // Create a set of all possible values
        for (int i = 1; i <= 2 * n; ++i) {
            available.insert(i);
        }

        // Assign unique values for each range
        for (int i = 0; i < n; ++i) {
            auto it = available.lower_bound(ranges[i].first);

            if (it != available.end() && *it <= ranges[i].second) {
                results[i] = *it;
                available.erase(it);
            }
        }

        // Construct the result binary string
        for (int i = 0; i < n; ++i) {
            if (results[i]) {
                cout << "1";
            } else {
                cout << "0";
            }
        }
        cout << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
