// #include <bits/stdc++.h> 
// #include <complex>
// #include <queue>
// #include <set>
// #include <unordered_set>
// #include <list>
// #include <chrono>
// #include <random>
// #include <iostream>
// #include <algorithm>
// #include <cmath>
// #include <string>
// #include <vector>
// #include <map>
// #include <unordered_map>
// #include <stack>
// #include <iomanip>
// #include <fstream>
// using namespace std;

// typedef long long ll;
// typedef long double ld;
// typedef pair<ll,ll> p64;
// typedef pair<double,double> pdd;
// typedef vector<ll> v64;
// typedef vector<vector<ll> > vv64;
// typedef vector<vector<p64> > vvp64;
// typedef vector<p64> vp64;
// ll MOD = 998244353;
// double eps = 1e-12;
// #define forn(i,n) for(ll i = 0; i < n; i++)
// #define forsn(i,s,e) for(ll i = s; i < e; i++)
// #define rforn(i,s) for(ll i = s; i >= 0; i--)
// #define rforsn(i,s,e) for(ll i = s; i >= e; i--)
// #define mp make_pair
// #define pb push_back
// #define fi first
// #define se second
// #define nl cout<<endl
// #define arrin(i,arr,n); for(ll i=0;i<n;i++){ cin >> arr[i]; }
// #define arrout(i,arr,n); for(ll i=0;i<n;i++){ cout << arr[i]; }
// #define INF 2e18
// #define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
// #define all(x) (x).begin(), (x).end()
// #define sz(x) ((ll)(x).size())
// int main(){
//     fast_cin();
//     ll t;
//     cin>>t;
//     while(t--){
//         ll n,l,r;
//         cin>>n>>l>>r;
//         ll arr[n];
//         for(ll i=0;i<n;i++){
//             cin>>arr[i];
//         }
//         vector<ll>v1;
//         vector<ll>v2;
//         vector<ll>v3;
//         for(ll i=0;i<n;i++){
//             if(r>=i+1&&i+1>=l){
//                 v1.push_back(arr[i]);
//             }else if(l>=i+1){
//                 v2.push_back(arr[i]);
//             }else{
//                 v3.push_back(arr[i]);
//             }
//         }
//         sort(v1.begin(),v1.end());
//         sort(v2.begin(),v2.end());
//         sort(v3.begin(),v3.end());
        

//         ll s1=v1.size();
//         ll s2=v2.size();
//         ll s3=v3.size();
//         ll j=0;
//         for(ll i=s1-1;i>=l-1;i--){
//             if(j < s2 &&v1[i]>v3[j]){
//                 v1[i]=v2[j];
//                 j++;
//             }else{
//                 break;
//             }
//         }
//         ll sum=0;
//         for(ll i=0;i<s1;i++){
//             sum+=v1[i];
//         }
//         j=0;
//         ll sum1=0;
//         for(ll i=0;i<r;i++){
//             if(j < s2 &&v1[i]>v2[j]){
//                 v1[i]=v2[j];
//                 j++;
//             }else{
//                 break;
//             }
//         }
//         for(ll i=0;i<s1;i++){
//             sum1+=v1[i];
//         }
//         cout<<sum<<"\n";
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
            if (i + 1 >= l && i + 1 <= r) {
    v1.push_back(arr[i]);  // Elements within the range [l, r]
} else if (i + 1 < l) {
    v2.push_back(arr[i]);  // Elements before the range
} else {
    v3.push_back(arr[i]);  // Elements after the range
}

        }
        
        // Sort the ranges
        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end());
        sort(v3.begin(), v3.end());

        for(ll i=0;i<v1.size();i++){
            cout<<v1[i]<<" ";
        }
        cout<<"\n";
        for(ll i=0;i<v2.size();i++){
            cout<<v2[i]<<" ";
        }
        cout<<"\n";
        for(ll i=0;i<v2.size();i++){
            cout<<v3[i]<<" ";
        }
        cout<<"\n";


        vector<ll> v1_copy = v1; // Copy of v1 for the second operation
        
        // Operation 1: Modify original v1 with v2
        ll s1 = v1.size();
        ll s2 = v2.size();
        ll s3 = v3.size();
        ll j = 0;
        for (ll i = s1 - 1; i >= 0; i--) {
            if (j < s2 && v1[i] > v2[j]) {
                v1[i] = v2[j];
                j++;
            } else {
                break;
            }
        }
        ll sum1 = 0;
        for (ll i = 0; i < s1; i++) {
            sum1 += v1[i];
        }

        // Operation 2: Use a copy of v1 for the second modification
        j = 0;
        ll sum2 = 0;
        for (ll i = 0; i < s1; i++) {
            if (j < s3 && v1_copy[i] > v3[j]) {
                v1_copy[i] = v3[j];
                j++;
            } else {
                break;
            }
        }
        for (ll i = 0; i < s1; i++) {
            sum2 += v1_copy[i];
        }

        // Print the minimum of the two results
        cout << min(sum1, sum2) << "\n";
    }
    return 0;
}
