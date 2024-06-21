// // // // #include <bits/stdc++.h>
// // // // using namespace std;

// // // // int main(){
// // // //     ios_base::sync_with_stdio(false);
// // // //     cin.tie(NULL);
// // // //     long long t;
// // // //     cin>>t;
// // // //     while(t--){
// // // //         long long n;
// // // //         cin>>n;
// // // //         long long arr[n];
// // // //         for(long long i=0;i<n;i++){
// // // //             cin>>arr[i];
// // // //         }
// // // //         long long ans=0;
// // // //         if(arr[0]==0){
// // // //             ans++;
// // // //         }
// // // //         long long maxi;
// // // //         long long sum;
// // // //         long long f;
// // // //         for(long long i=1;i<n;i++){
// // // //             maxi=arr[0];
// // // //             f=0;
// // // //             for(long long j=1;j<=i;j++){
// // // //                 if(arr[j]>maxi){
// // // //                     maxi=arr[j];
// // // //                     f=j;
// // // //                 }
// // // //             }
// // // //             sum=0;
// // // //             for(long long j=0;j<=i;j++){
// // // //                 if(j!=f){
// // // //                     sum+=arr[j];
// // // //                 }

// // // //             }
// // // //             if(sum==maxi){
// // // //                 ans++;
// // // //             }

// // // //         }
// // // //         cout<<ans<<"\n";
// // // //     }
// // // //     return 0;
// // // // }
// // // #include <bits/stdc++.h>
// // // using namespace std;
// // // pair<int, int> centerrr(const vector<pair<int, int>>& ans) {
// // //     int miniX = ans[0].first, maxiX = ans[0].first;
// // //     int miniY = ans[0].second, maxiY = ans[0].second;

// // //     for (const auto& po : ans) {
// // //         miniX = min(miniX, po.first);
// // //         maxiX = max(maxiX, po.first);
// // //         miniY = min(miniY, po.second);
// // //         maxiY = max(maxiY, po.second);
// // //     }

// // //     int cenX = (miniX + maxiX) / 2;
// // //     int cenY = (miniY + maxiY) / 2;

// // //     return {cenX, cenY};
// // // }

// // // int main() {
// // //     int t;
// // //     cin >> t;

// // //     while (t--) {
// // //         int n, m;
// // //         cin >> n >> m;

// // //         vector<pair<int, int>> ans;
// // //         for (int i = 1; i <= n; ++i) {
// // //             string r;
// // //             cin >> r;
// // //             for (int j = 1; j <= m; ++j) {
// // //                 if (r[j-1] == '#') {
// // //                     ans.emplace_back(i, j);
// // //                 }
// // //             }
// // //         }

// // //         auto center = centerrr(ans);
// // //         cout << center.first << " " << center.second << endl;
// // //     }

// // //     return 0;
// // // }
// // #include <bits/stdc++.h>
// // using namespace std;
// // int main() {
// //     int tc;
// //     cin >> tc;
// //     while (tc--) {
// //         int n, m;
// //         cin >> n >> m;

// //         vector<pair<int, int>> ans;
// //         for (int i = 1; i <= n; ++i) {
// //             string r;
// //             cin >> r;
// //             for (int j = 1; j <= m; ++j) {
// //                 if (r[j-1] == '#') {
// //                     ans.emplace_back(i, j);
// //                 }
// //             }
// //         }

// //         int miniX = ans[0].first, maxiX = ans[0].first;
// //         int miniY = ans[0].second, maxiY = ans[0].second;

// //         for (const auto& po : ans) {
// //             miniX = min(miniX, po.first);
// //             maxiX = max(maxiX, po.first);
// //             miniY = min(miniY, po.second);
// //             maxiY = max(maxiY, po.second);
// //         }

// //         int cenX = (miniX + maxiX) / 2;
// //         int cenY = (miniY + maxiY) / 2;

// //         cout << cenX << " " << cenY << endl;
// //     }

// //     return 0;
// // }
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int tc;
//     cin >> tc;
//     while (tc--)
//     {
//         int x, y, z;
//         long long k;
//         cin >> x >> y >> z >> k;
//         long long ans = 0;

//         for (int i = 1; i <= x; i++)
//         {
//             if (k % i == 0)
//             {
//                 long long v = k / i;
//                 for (int j = 1; j <= y; ++j)
//                 {
//                     if (v % j == 0)
//                     {
//                         int c = v / j;
//                         if (c <= z)
//                         {
//                             long long placements = ((x-i + 1) * (y - j + 1) * (z - c + 1));
//                             ans = max(ans, placements);
//                         }
//                     }
//                 }
//             }
//         }

//         cout << ans << endl;
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long arr[n];
        for (long long i = 0; i < n; i++) {
            cin >> arr[i];
        }
        long long ans = 0;
        if (arr[0] == 0) {
            ans++;
        }
        long long maxi;
        long long sum = 0; // Initialize sum outside the loop
        long long f;
        for (long long i = 1; i < n; i++) { // Changed from i <= n to i < n
            maxi = arr[0];
            f = 0;
            for (long long j = 1; j <= i; j++) {
                if (arr[j] > maxi) {
                    maxi = arr[j];
                    f = j;
                }
            }
            // Update sum only if f changes
            if (i == 1 || arr[i] > arr[f]) {
                sum = 0;
                for (long long j = 0; j <= i; j++) {
                    if (j != f) {
                        sum += arr[j];
                    }
                }
            }
            if (sum == maxi) {
                ans++;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
