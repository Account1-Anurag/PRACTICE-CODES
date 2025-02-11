// // #include <bits/stdc++.h> 
// // #include <complex>
// // #include <queue>
// // #include <set>
// // #include <unordered_set>
// // #include <list>
// // #include <chrono>
// // #include <random>
// // #include <iostream>
// // #include <algorithm>
// // #include <cmath>
// // #include <string>
// // #include <vector>
// // #include <map>
// // #include <unordered_map>
// // #include <stack>
// // #include <iomanip>
// // #include <fstream>
// // using namespace std;

// // typedef long long ll;
// // typedef long double ld;
// // typedef pair<ll,ll> p64;
// // typedef pair<double,double> pdd;
// // typedef vector<ll> v64;
// // typedef vector<vector<ll> > vv64;
// // typedef vector<vector<p64> > vvp64;
// // typedef vector<p64> vp64;
// // ll MOD = 998244353;
// // double eps = 1e-12;
// // #define forn(i,n) for(ll i = 0; i < n; i++)
// // #define forsn(i,s,e) for(ll i = s; i < e; i++)
// // #define rforn(i,s) for(ll i = s; i >= 0; i--)
// // #define rforsn(i,s,e) for(ll i = s; i >= e; i--)
// // #define mp make_pair
// // #define pb push_back
// // #define fi first
// // #define se second
// // #define nl cout<<endl
// // #define arrin(i,arr,n); for(int i=0;i<n;i++){ cin >> arr[i]; }
// // #define arrout(i,arr,n); for(int i=0;i<n;i++){ cout << arr[i]; }
// // #define INF 2e18
// // #define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
// // #define all(x) (x).begin(), (x).end()
// // #define sz(x) ((ll)(x).size())
// // int main(){
// //     fast_cin();
// //     int t;
// //     cin>>t;
// //     while(t--){
// //         int n,m;
// //         cin>>n>>m;
        
// //         int arr[n][m];
// //         for(int i=0;i<n;i++){
// //             for(int j=0;j<m;j++){
// //                 cin>>arr[i][j];
// //             }
// //         }
// //         vector<int>ans(n);
// //         int mini=INT_MAX;
// //         for(int i=0;i<n;i++){
// //             for(int j=0;j<m;j++){
// //                 mini=min(mini,arr[i][j]);
// //             }
// //             ans[i]=mini;
// //             mini=INT_MAX;
// //         }
// //         vector<int>arr;
// //         for(int i=0;i<n;i++){
            
// //         }
        
        
        

// //     }
// //     return 0;
// // }

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n, m;
//         cin >> n >> m;

//         int arr[n][m];
//         for (int i = 0; i < n; i++) {
//             for (int j = 0; j < m; j++) {
//                 cin >> arr[i][j];
//             }
//         }

//         vector<int> ans(n);
//         int mini = INT_MAX;

//         // Find the minimum value in each row and store in `ans`
//         for (int i = 0; i < n; i++) {
//             for (int j = 0; j < m; j++) {
//                 mini = min(mini, arr[i][j]);
//             }
//             ans[i] = mini;
//             mini = INT_MAX;
//         }
//         vector<pair<int, int>> ranked;
//         for (int i = 0; i < n; i++) {
//             ranked.push_back({ans[i], i});
//         }
//         sort(ranked.begin(), ranked.end()); 
//         vector<int> ans;
//         for (const auto& p : ranked) {
//             ans.push_back(p.second);
//         }
//         for(int i=0;i<n;i++){
//             for(int j=0;j<m;j++){
//                 if(arr[ans[j]+1]){

//                 }
//             }
//         }
        
//     }
//     return 0;
// }


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve() {
    int t; // number of test cases
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<vector<int>> cards(n);  // stores the cards of each cow
        vector<pair<int, int>> smallest_cards(n); // {smallest card, cow index}

        // Reading cards for each cow and storing the smallest card
        for (int i = 0; i < n; ++i) {
            cards[i].resize(m);
            for (int j = 0; j < m; ++j) {
                cin >> cards[i][j];
            }
            sort(cards[i].begin(), cards[i].end()); // Sort the cards of each cow
            smallest_cards[i] = {cards[i][0], i};   // Store the smallest card and cow index
        }

        // Sort cows based on their smallest card
        sort(smallest_cards.begin(), smallest_cards.end());
        vector<int>abc;
        // Validate if the game is possible
        bool valid = true;
        int current_top_card = -1;  // Initialize the top card of the center pile
        for (int i = 0; i < n; ++i) {
            int cow_index = smallest_cards[i].second;

            // Check if the cow can play at least one card
            auto it = upper_bound(cards[cow_index].begin(), cards[cow_index].end(), current_top_card);
            abc.push_back(it);
            if (it == cards[cow_index].end()) {
                valid = false;
                break;
            }

            // Update the top card of the center pile
            current_top_card = *it;
        }

        // Output the result
        if (!valid) {
            cout << -1 << endl;
        } else {
            for (int i = 0; i < n; ++i) {
                cout << smallest_cards[i].second + 1 << " ";  // 1-based index
            }
            cout << endl;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
    