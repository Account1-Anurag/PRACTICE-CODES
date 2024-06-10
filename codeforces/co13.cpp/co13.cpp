// #include <iostream>
// #include <vector>

// using namespace std;

// int main() {
//     int t;
//     cin >> t;

//     while (t--) {
//         long long n,f,a,b;
//         cin>>n>>f>>a>>b;
//         int arr[n];
//         long long i=0;
//         for(i=0;i<n;i++){
//             cin>>arr[i];
//         }
//         bool flag=1;
//         while(f>0){
//             for(int i=1;i<n;i++){
//                 if((arr[i]-arr[i-1])*a>b){
//                     f=f-b;
//                 }
//                 else{
//                     f=f-((arr[i]-arr[i-1])*a);
//                 }
//             }
//         }
//         if(f>=0){
//             cout<<"YES"<<endl;
//         }
//         else{
//             cout<<"NO"<<endl;
//         }

//     }

//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int N, Q;
//         cin >> N >> Q;
//         string S;
//         cin >> S;

//         vector<int>ans;
//         int maxi=1,curr=1;
//         for (int i = 1; i < S.length(); i++) {
//             if (S[i] == S[i - 1]) {
//                 curr++;
//             } else {
//                 maxi = max(maxi, curr);
//                 curr = 1;
//             }
//         }
//         maxi = max(maxi, curr);
//         ans.push_back(maxi);
//         for (int i = 0; i < Q; i++) {
//             char anu;
//             cin >> anu;
//             S += anu;
//             if (anu == S[S.length() - 2]) {
//                 curr++;
//             } else {
//                 curr = 1;
//             }
//             maxi = max(maxi, curr);
//             ans.push_back(maxi);
//         }
//         for (int i = 0; i < ans.size(); i++) {
//             cout << ans[i] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, K;
        cin >> N >> K;
        
        // Initialize the permutation
        vector<int> P(N);
        for (int i = 0; i < N; ++i) {
            P[i] = i + 1;
        }

        // Construct the permutation
        reverse(P.end() - K, P.end());

        // Output the permutation
        for (int i = 0; i < N; ++i) {
            cout << P[i] << " ";
        }
        cout << endl;
    }

    return 0;
}


