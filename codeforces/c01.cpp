// // #include <bits/stdc++.h>
// // using namespace std;
// // bool issubarray(long long arr[], long long n)
// // {
// //     long long sum=0;
// //     set<long long>st{0};
// //     for (int i = 0; i < n; i++)
// //     {
// //         sum+=arr[i];
// //         if(st.find(sum)!=st.end())
// //         {
// //             return true;
// //         }
// //         st.insert(sum);
// //     }
// //     return false;
// // }
// // int main()
// // {
// //     long long t;
// //     cin >> t;
// //     while (t--)
// //     {
// //         long long n;
// //         cin >> n;
// //         long long arr[n];
// //         for (int i = 0; i < n; i++)
// //         {
// //             cin >> arr[i];
// //         }
// //         for (int i = 1; i < n; i+=2)
// //         {
// //             arr[i] = (-1 * arr[i]);
// //         }
// //         if (issubarray(arr, n))
// //         {
// //             cout << "YES"<<endl;
// //         }
// //         else
// //         {
// //             cout << "NO"<<endl;
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
//         long long n, k;
//         cin >> n >> k;
//         long long arr[n];
//         long long mult = 1;
//         for (int i = 0; i < n; i++) {
//             cin >> arr[i];
//             mult *= arr[i];
//         }

//         if (mult == 1 && k == 3) {
//             cout << "YES" << endl;
//             cout << "7 17 17" << endl;
//         } else if (mult == 1) {
//             cout << "NO" << endl;
//         } else if (2023 % mult == 0) {
//             cout << "YES" << endl;
//             cout << 2023 / mult << " ";
//             for (int i = 1; i < k; i++) {
//                 cout << "1 ";
//             }
//             cout << endl;
//         } else {
//             cout << "NO" << endl;
//         }
//     }
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n,k;
//         cin>>n>>k;
//      int arr[n];
//      int rem;
//      vector<int>ans;;
//      for(int i=0;i<n;i++){
//         cin>>arr[i];
//      }
//   int product = accumulate(arr, arr + n, 1, multiplies<int>());

//      if(2023%product!=0){
//         cout<<"NO"<<endl;
//      }
//      else{
//         rem=2023/product;
//         if(k==3 && rem==2023){
//             ans.push_back(7);
//             ans.push_back(17);
//             ans.push_back(17);
//         }
//        else if(rem==7){
//                    ans.push_back(7);
//                    k=k-1;
//              while(k--){
//                     ans.push_back(1);
//              }
//         }
//         else if(rem==17){
//                ans.push_back(17);
//                k=k-1;
//             while(k--){
//                 ans.push_back(1);
            
//             }   
//         }
//         else if(rem==119){
//             if(k>2){
//             while(k--){
//             if(k>2 && k<5){
//                 ans.push_back(17);
//                 ans.push_back(7);
//             }
//             else{
//                 ans.push_back(1);
//             }
//         }}
//         else{
//             ans.push_back(119);
//             ans.push_back(1);
//         }
            
//         }
//         else if(rem==289){
//             if(k==2){
//                 ans.push_back(289);
//                 ans.push_back(1);
//             }
//             else{
//                 ans.push_back(17);
//                 ans.push_back(17);
//                 k=k-2;
//                 while(k--){
//                     ans.push_back(1);
//                 }
//             }
//         }
//         else{
//             while(k--){
//                 ans.push_back(1);
//             }
//         }
//         cout<<"YES"<<endl;
//         for(int i=0;i<ans.size();i++){
//               cout<<ans[i];
//               cout<<" ";
//         }
//         if(t!=0){
//         cout<<endl;
//      }
//      }
//     }
//     return 0;
// }

#include <bits/stdc++.h> 
#include <complex>
#include <queue>
#include <set>
#include <unordered_set>
#include <list>
#include <chrono>
#include <random>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <stack>
#include <iomanip>
#include <fstream>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair<ll,ll> p64;
typedef pair<double,double> pdd;
typedef vector<ll> v64;
typedef vector<vector<ll> > vv64;
typedef vector<vector<p64> > vvp64;
typedef vector<p64> vp64;
ll MOD = 998244353;
double eps = 1e-12;
#define forn(i,n) for(ll i = 0; i < n; i++)
#define forsn(i,s,e) for(ll i = s; i < e; i++)
#define rforn(i,s) for(ll i = s; i >= 0; i--)
#define rforsn(i,s,e) for(ll i = s; i >= e; i--)
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define nl cout<<endl
#define arrin(i,arr,n); for(int i=0;i<n;i++){ cin >> arr[i]; }
#define arrout(i,arr,n); for(int i=0;i<n;i++){ cout << arr[i]; }
#define INF 2e18
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())
int main(){
    fast_cin();
    
    return 0;
}