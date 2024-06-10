#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        vector<int> ans;
        for (int i = 0; i < n; i++) {
            int sum = 0;
            for (int j = i; j < n; ++j) {
                sum += arr[j];
                ans.push_back(sum);
            }
        }
        sort(ans.begin(), ans.end());
        vector<int> result;
        int p;
        int count = 1;
        for (int i = 0; i < ans.size(); i++) {
            p = ans[i];
            for (int j = i + 1; j < ans.size(); j++) {
                if (ans[j] == p) {
                    count++;
                } else {
                    result.push_back(count);
                    count = 1;
                    break;
                }
            }
        }

        for (int i = 0; i < n; i++) {
            cout << result[i] << " "; 
        }
        cout << endl; 
    }

    return 0; 
}
