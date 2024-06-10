// // // #include <bits/stdc++.h>
// // // using namespace std;

// // // int main()
// // // {
// // //     // your code goes here
// // //     int t;
// // //     cin >> t;
// // //     while (t--)
// // //     {
// // //         int h, x, y1, y2, k;
// // //         cin >> h >> x >> y1 >> y2 >> k;
// // //         int p = 0;
// // //         if (h % x == 0)
// // //         {
// // //             p = h / x;
// // //         }
// // //         else
// // //         {
// // //             p = h / x + 1;
// // //         }
// // //         int ans = 0;
// // //         if(h%y1==0){
// // //             ans=ans+(h/y1);
// // //         }
// // //         else{
// // //             ans=ans+(h/y1)+1;
// // //         }

// // //         while (h > 0)
// // //         {
// // //             h = h - y2;
// // //             ans++;
// // //         }

// // //         if (p > ans)
// // //         {
// // //             cout << ans << endl;
// // //         }
// // //         else
// // //         {
// // //             cout << p << endl;
// // //         }
// // //     }
// // // }
// // #include <iostream>
// // using namespace std;

// // int main(int argc, char* argv[])
// // {
// //     cout << "You have entered " << argc
// //          << " arguments:" << endl;

// //     // Using a while loop to iterate through arguments
// //     int i = 0;
// //     while (i < argc) {
// //         cout << argv[i] << endl;
// //         i++;
// //     }

// //     return 0;
// // }
// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int a=10;
//     a=++a+a;
//     cout<<a;
//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// 	// your code goes here
//     int t;
//     cin>>t;
//     while(t--){
//         int p,l;
//         cin>>p>>l;
//         float z=l/p;
//         cout<<z<<endl;
//         if((l*100)/p>=75){
//             cout<<"YES"<<endl;
//         }
//         else{
//             cout<<"NO"<<endl;
//         }
//     }
// }
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     // your code goes here
//     int t;
//     cin >> t;
//     while (t--) {
//         int n, m;
//         cin >> n >> m;
//         int arr[n];
//         for (int i = 0; i < n; i++) {
//             cin >> arr[i];
//         }
//         int sum = 0;
//         int ans = 0;
//         int i = 0;
//         while (i < n) {  
//             sum += arr[i];
//             i++;
//             if (sum >= m) {
//                 ans++;
//                 sum = 0;
//             }
//         }
//         cout << ans << endl;
//     }
//     return 0;
// }
// #include <iostream>
// #include <vector>
// #include<bits/stdc++.h>

// using namespace std;

// int gcd(int a, int b) {
//     return b == 0 ? a : gcd(b, a % b);
// }

// vector<int> maxGCDSubset(int N, int K) {
//     vector<int> subset;
    
//     // Choose the largest K numbers to maximize GCD
//     for (int i = N; i > N - K; i--) {
//         subset.push_back(i);
//     }
    
//     return subset;
// }

// int main() {
//     int T;
//     cin >> T;

//     while (T--) {
//         int N, K;
//         cin >> N >> K;

//         // Get the subset with maximum GCD
//         vector<int> ans = maxGCDSubset(N, K);
        
//         sort(ans.begin(), ans.end());

//         // Output the ans
//         for (int i = 0; i < K; i++) {
//             cout << ans[i] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;

// int gcd(int a, int b) {
//     return b == 0 ? a : gcd(b, a % b);
// }

// vector<int> maxGCDSubset(int N, int K) {
//     vector<int> subset;
    
//     // Choose numbers with the same remainder when divided by K
//     for (int i = N; i > N - K; i--) {
//         subset.push_back(i);
//     }

//     return subset;
// }

// // int main() {
// //     int T;
// //     cin >> T;

// //     while (T--) {
// //         int N, K;
// //         cin >> N >> K;

// //         // Get the subset with maximum GCD
// //         vector<int> ans = maxGCDSubset(N, K);
// //         sort(ans.begin(), ans.end());
// //         // Output the ans
// //         for (int i = 0; i < K; i++) {
// //             cout << ans[i] << " ";
// //         }
// //         cout << endl;
// //     }

// //     return 0;
// // }

// // #include <iostream>

// // using namespace std;

// // int main() {
// //     int t;
// //     cin >> t;

// //     while (t--) {
// //         int n, m;
// //         cin >> n >> m;

// //         if(m%2==0){
// //             cout<<n*(m/2)<<endl;
// //         }
// //         else{
// //             cout<<(n*(m-1))/2<<endl;
// //         }
// //     }

// //     return 0;
// // }
// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// // Function to calculate the number of inversions in a permutation
// long long countInversions(const vector<int>& arr) {
//     int n = arr.size();
//     long long inversions = 0;
//     for (int i = 0; i < n - 1; ++i) {
//         for (int j = i + 1; j < n; ++j) {
//             if (arr[i] > arr[j]) {
//                 inversions++;
//             }
//         }
//     }
//     return inversions;
// }

// int main() {
//     int t;
//     cin >> t;

//     while (t--) {
//         int n;
//         cin >> n;

//         vector<int> a(n), b(n);
//         for (int i = 0; i < n; ++i) {
//             cin >> a[i];
//         }
//         for (int i = 0; i < n; ++i) {
//             cin >> b[i];
//         }

//         // Calculate initial number of inversions
//         long long initial_inversions = countInversions(a) + countInversions(b);

//         // Sort both permutations simultaneously
//         sort(a.begin(), a.end());
//         sort(b.begin(), b.end());

//         // Output the ansing permutations
//         for (int i = 0; i < n; ++i) {
//             cout << a[i] << " ";
//         }
//         cout << endl;
//         for (int i = 0; i < n; ++i) {
//             cout << b[i] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         int a[n];
//         int b[n];
//         for(int i=0;i<n;i++){
//             cin>>a[i];
//         }
//       for(int i=0;i<n;i++){
//           cin>>b[i];
//       }  
//       sort(a,a+n,greater<int>());
//       sort(b,b+n,greater<int>());
//       for(int i=0;i<n;i++){
//           cout<<a[i]<<" ";
//       }
//       cout<<endl;
//       for(int i=0;i<n;i++){
//           cout<<b[i]<<" ";
//       }
//       cout<<endl;
//     }
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;
int subString(const string& anu) {
    int maxi = 1, curr=1;
    for (int i = 1; i < anu.length(); i++) {
        if (anu[i] == anu[i - 1]) {
            curr++;
        } else {
            maxi=max(maxi, curr);
            curr = 1;
        }
    }
    maxi=max(maxi, curr);
    return maxi;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int N, Q;
        cin >> N >> Q;
        string S;
        cin >> S;

        vector<int> ans;
        ans.push_back(subString(S));
        for (int i = 0; i < Q; i++) {
            char c;
            cin >> c;
            S += c;
            ans.push_back(subString(S));
        }
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }

    return 0;
}



#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, Q;
        cin >> N >> Q;
        string S;
        cin >> S;

        vector<int> result;
        int max_length = 1, current_length = 1;

        // Count the length of the initial longest beautiful substring
        for (int i = 1; i < S.length(); i++) {
            if (S[i] == S[i - 1]) {
                current_length++;
            } else {
                max_length = max(max_length, current_length);
                current_length = 1;
            }
        }
        max_length = max(max_length, current_length);
        result.push_back(max_length);

        // Perform updates
        for (int i = 0; i < Q; i++) {
            char c;
            cin >> c;
            S += c;

            if (c == S[S.length() - 2]) {
                current_length++;
            } else {
                current_length = 1;
            }
            max_length = max(max_length, current_length);
            result.push_back(max_length);
        }

        // Output result
        for (int i = 0; i < result.size(); i++) {
            cout << result[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
