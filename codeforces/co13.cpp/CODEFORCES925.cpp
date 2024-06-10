#include <iostream>

using namespace std;

long long int countCells(long long int n, long long int m) {
    if (m <= n - 1) return m + 1;
    long long int ans = n;
    m -= n - 1;
    long long int d = (m + n - 2) / (n - 1);
    ans -= d;
    m -= (d - 1) * (n - 1);
    if (m % 2 == 0) ans -= (m / 2) * 2;
    else ans -= ((m + 1) / 2) * 2 - 1;
    return ans;
}

long long int findMinCells(long long int n, long long int k) {
    long long int l = 1, r = 2 * n, ans = -1;
    while (l <= r) {
        long long int mid = (l + r) / 2;
        if (countCells(n, mid) >= k) {
            ans = mid;
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }
    return ans;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int n, k;
        cin >> n >> k;
        cout << findMinCells(n, k) << endl;
    }
    return 0;
}
