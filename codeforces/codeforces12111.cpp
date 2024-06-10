#include <iostream>
#include <vector>
#include <string>
using namespace std;

pair<string, long long> smallestLexicographicallyStringAndPaths(int n, const string& row1, const string& row2) {
    // dp[i][j]: lexicographically smallest string of length j from top-left to (i, j)
    vector<vector<string>> dp(2, vector<string>(n + 1));
    dp[0][0] = dp[1][0] = "";
    
    // Count of paths to reach each cell
    vector<vector<long long>> count(2, vector<long long>(n + 1, 0));
    count[0][0] = count[1][0] = 1;
    
    for (int j = 1; j <= n; ++j) {
        // Update dp and count for cell (1, j)
        if (row1[j - 1] == '0') {
            dp[0][j] = dp[0][j - 1] + '0';
            count[0][j] = count[0][j - 1];
        } else {
            dp[0][j] = dp[0][j - 1] + '1';
            count[0][j] = count[0][j - 1];
        }
    }
    
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            // Update dp and count for cell (i, j)
            if (i == 1) {
                dp[i % 2][j] = dp[i % 2][j - 1] + row2[j - 1];
                count[i % 2][j] = count[i % 2][j - 1];
            } else {
                if (dp[(i - 1) % 2][j] + '1' < dp[i % 2][j - 1] + row2[j - 1]) {
                    dp[i % 2][j] = dp[(i - 1) % 2][j] + '1';
                    count[i % 2][j] = count[(i - 1) % 2][j];
                } else if (dp[(i - 1) % 2][j] + '1' > dp[i % 2][j - 1] + row2[j - 1]) {
                    dp[i % 2][j] = dp[i % 2][j - 1] + row2[j - 1];
                    count[i % 2][j] = count[i % 2][j - 1];
                } else {
                    dp[i % 2][j] = dp[i % 2][j - 1] + row2[j - 1];
                    count[i % 2][j] = count[i % 2][j - 1] + count[(i - 1) % 2][j];
                }
            }
        }
    }
    
    return {dp[n % 2][n], count[n % 2][n]};
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        string row1, row2;
        cin >> row1 >> row2;
        
        auto result = smallestLexicographicallyStringAndPaths(n, row1, row2);
        cout << result.first << endl << result.second << endl;
    }
    
    return 0;
}
