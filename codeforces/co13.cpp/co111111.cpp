#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool isPossible(vector<int>& a, vector<int>& b, int k) {
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int ptrA = 0, ptrB = 0;
    for (int i = 1; i <= k; ++i) {
        bool found = false;
        while (ptrA < a.size() && a[ptrA] == i) {
            ++ptrA;
            found = true;
        }
        while (ptrB < b.size() && b[ptrB] == i) {
            ++ptrB;
            found = true;
        }
        if (!found)
            return false;
    }
    return true;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;

        vector<int> a(n), b(m);
        for (int i = 0; i < n; ++i)
            cin >> a[i];
        for (int i = 0; i < m; ++i)
            cin >> b[i];

        if (isPossible(a, b, k))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
