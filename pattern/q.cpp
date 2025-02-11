// #include <bits/stdc++.h> 
// using namespace std;

// typedef long long ll;
// typedef vector<ll> v64;
// #define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

// int main() {
//     fast_cin();
//     ll t;
//     cin >> t;
//     while (t--) {
//         ll n, l, r;
//         cin >> n >> l >> r;
//         ll arr[n];
//         for (ll i = 0; i < n; i++) {
//             cin >> arr[i];
//         }
        
//         // Separate the ranges
//         vector<ll> v1, v2, v3;
//         for (ll i = 0; i < n; i++) {
//             if (i + 1 >= l && i + 1 <= r) {  // Range [l, r]
//                 v1.push_back(arr[i]);
//             } else if (i + 1 < l) {          // Strictly before range
//                 v2.push_back(arr[i]);
//             } else {                        // Strictly after range
//                 v3.push_back(arr[i]);
//             }
//         }
        
//         // Sort the ranges
//         sort(v1.begin(), v1.end());
//         sort(v2.begin(), v2.end());
//         sort(v3.begin(), v3.end());

//         // // Debugging outputs
//         cout << " ";
//         for (ll i = 0; i < v1.size(); i++) {
//             cout << v1[i] << " ";
//         }
//         cout << "\n ";
//         for (ll i = 0; i < v2.size(); i++) {
//             cout << v2[i] << " ";
//         }
//         cout << "\n ";
//         for (ll i = 0; i < v3.size(); i++) {
//             cout << v3[i] << " ";
//         }
//         cout << "\n";

//         vector<ll> v1_copy = v1; // Copy of v1 for the second operation
        
//         // Operation 1: Modify original v1 with v2
//         ll s1 = v1.size();
//         ll s2 = v2.size();
//         ll s3 = v3.size();
//         ll j = 0;
//         for (ll i = s1 - 1; i >= 0; i--) {
//             if (j < s2 && v1[i] > v2[j]) {
//                 v1[i] = v2[j];
//                 j++;
//             } else {
//                 break;
//             }
//         }
//         ll sum1 = 0;
//         for (ll i = 0; i < s1; i++) {
//             sum1 += v1[i];
//         }
//         cout<<"sum1:"<<sum1<<"\n";
//         // Operation 2: Use a copy of v1 for the second modification
//         j = 0;
//         ll sum2 = 0;
//         for (ll i = 0; i < s1; i++) {
//             if (j < s3 && v1_copy[i] > v3[j]) {
//                 v1_copy[i] = v3[j];
//                 j++;
//             } else {
//                 break;
//             }
//         }
//         for (ll i = 0; i < s1; i++) {
//             sum2 += v1_copy[i];
//         }

//         // Print the minimum of the two results
//         cout << min(sum1, sum2) << "\n";
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> v64;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main() {
    fast_cin();
    ll t;
    cin >> t;
    while (t--) {
        ll n, l, r;
        cin >> n >> l >> r;
        ll arr[n];
        for (ll i = 0; i < n; i++) {
            cin >> arr[i];
        }
        
        // Separate the ranges
        vector<ll> v1, v2, v3;
        for (ll i = 0; i < n; i++) {
            if (i + 1 >= l && i + 1 <= r) {  // Range [l, r]
                v1.push_back(arr[i]);
            } else if (i + 1 < l) {          // Strictly before range
                v2.push_back(arr[i]);
            } else {                        // Strictly after range
                v3.push_back(arr[i]);
            }
        }
        
        // Sort the ranges
        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end());
        sort(v3.begin(), v3.end());
        vector<ll> v1_copy = v1;
        
        // for(int i=0;i<v1.size();i++){
        //     cout<<v1[i]<<" ";
        // }
        // cout<<"\n";
        // for(int i=0;i<v2.size();i++){
        //     cout<<v2[i]<<" ";
        // }
        // cout<<"\n";
        // for(int i=0;i<v3.size();i++){
        //     cout<<v3[i]<<" ";
        // }
        // cout<<"\n";      
        //   for(int i=0;i<v1_copy.size();i++){
        //     cout<<v1_copy[i]<<" ";
        // }
        // cout<<"\n";

        ll j=0;
        if (!v2.empty()) {
            for(int i=v1.size()-1;i>=0 && j<v2.size();i--){
                if(v1[i]>v2[j]){
                    v1[i]=v2[j];
                    j++;
                }else{
                    break;
                }
            }
        }
        ll sum1 = accumulate(v1.begin(), v1.end(), 0LL);
        // cout<<sum1<<"\n";
        j=0;
        if (!v3.empty() ) {
            for(int i=v1_copy.size()-1;i>=0 && j<v3.size();i--){
                if(v1_copy[i]>v3[j]){
                    v1_copy[i]=v3[j];
                    j++;
                }else{
                    break;
                }
            }
        }
        // for(int i=0;i<v1_copy.size();i++){
        //     cout<<v1_copy[i]<<" ";

        // }
        // cout<<"\n";
        ll sum2 = accumulate(v1_copy.begin(), v1_copy.end(), 0LL);
        // cout<<sum2<<"\n";

        // Output the minimum of the two sums
        cout << min(sum1, sum2) << "\n";
    }
    return 0;
}

