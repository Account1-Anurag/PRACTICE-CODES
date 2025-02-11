#include <bits/stdc++.h>
using namespace std;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main() {
    fast_cin();
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long arr[n];
        for (long long i = 0; i < n; i++) {
            cin >> arr[i];
        }

        unordered_map<long long, long long> freq; 
        long long a = -1, b = -1;          
        bool fflag = false;
        bool fquad = false;
        for (long long i = 0; i < n; i++) {
            freq[arr[i]]++;
            if (freq[arr[i]] == 4) {
                cout << arr[i] << " " << arr[i] << " " << arr[i] << " " << arr[i] << "\n";
                fquad = true;
                break;
            }
            if (freq[arr[i]] == 2) {
                if (!fflag) {
                    a = arr[i];
                    fflag = true;
                } else {
                    b = arr[i];
                    break;
                }
            }
        }

        if (fquad) {
            continue;
        }

        if (b != -1) {
            cout << a << " " << a << " " << b << " " << b << "\n";
        } else if (fflag) {
            vector<long long> ans;
            long long count = 0;
            for (long long i = 0; i < n; i++) {
                if (arr[i] != a) {
                    ans.push_back(arr[i]);
                } else if (arr[i] == a && count >= 2) {
                    ans.push_back(arr[i]);
                } else {
                    count++;
                }
            }
            sort(ans.begin(), ans.end());
            long long s1 = 0;
            long long s2 = 0;
            long long mini = INT_MAX;

            for (long long i = 0; i < ans.size() - 1; i++) {
                mini = min(mini, (ans[i + 1] - ans[i]));
                if (mini == (ans[i + 1] - ans[i])) {
                    s1 = ans[i];
                    s2 = ans[i + 1];
                }
            }

            long double vv = ((s2 - s1) / 2.0);
            long double z = vv * vv;
            long double y = a * a;
            if (sqrt(y - z) > 0) {
                cout << a << " " << a << " " << s1 << " " << s2 << "\n";
            } else {
                cout << -1 << "\n";
            }
        } else {
            cout << "-1\n";
        }
    }
    return 0;
}
