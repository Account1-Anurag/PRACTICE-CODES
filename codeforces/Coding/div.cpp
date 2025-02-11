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
#define arrin(i,arr,n); for(ll i=0;i<n;i++){ cin >> arr[i]; }
#define arrout(i,arr,n); for(ll i=0;i<n;i++){ cout << arr[i]; }
#define INF 2e18
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())
int main(){
    fast_cin();
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll arr[n];
        ll sum=0;
        for(ll i=0;i<n;i++){
            cin>>arr[i];
            sum+=arr[i];
        }
        
        if(sum%n!=0){
            cout<<"NO\n";
            continue;
        }
        ll v=sum/n;
        for(ll i=1;i<n-1;i++){
            ll p=abs(arr[i-1]-v);
            if(arr[i-1]>v){
                arr[i-1]=v;
                arr[i+1]+=p;
            }else if(v>arr[i-1]){
                arr[i-1]=v;
                arr[i+1]-=p;
            }else{

            }
        }
        bool flag=true;
        for(ll i=0;i<n;i++){
            if(arr[i]!=v){
                flag=false;
                break;
            }
        }
        if(flag)
        cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}


// #include <bits/stdc++.h> 
// using namespace std;

// typedef long long ll;
// #define forn(i,n) for(ll i = 0; i < n; i++)
// #define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

// ll main() {
//     fast_cin();
//     ll t;
//     cin >> t;
//     while (t--) {
//         ll n;
//         cin >> n;
//         ll arr[n];
//         ll sum = 0;
//         forn(i, n) {
//             cin >> arr[i];
//             sum += arr[i];
//         }

//         // Check divisibility
//         if (sum % n != 0) {
//             cout << "NO\n";
//             continue;
//         }
//         ll v = sum / n;

//         // Debug: Initial state
//         // cout << "Initial array: ";
//         // forn(i, n) cout << arr[i] << " ";
//         // cout << "\nTarget value: " << v << "\n";

//         bool valid = true;
//         for (ll i = 1; i < n - 1; i++) {
//             ll diff = arr[i - 1] - v; // Difference to adjust
//             arr[i - 1] -= diff;       // Set arr[i-1] to target
//             arr[i + 1] += diff;       // Adjust arr[i+1] accordingly

//             // Debug: State after each step
//             // cout << "After processing index " << i << ": ";
//             // forn(j, n) cout << arr[j] << " ";
//             // cout << "\n";

//             // Non-negativity check
//             if (arr[i + 1] < 0) {
//                 valid = false;
//                 break;
//             }
//         }

//         // Check if all elements are equal to the target value
//         for (ll i = 0; i < n; i++) {
//             if (arr[i] != v) {
//                 valid = false;
//                 break;
//             }
//         }

//         if (valid)
//             cout << "YES\n";
//         else
//             cout << "NO\n";

//         // Debug: Final state
//         // cout << "Final array: ";
//         // forn(i, n) cout << arr[i] << " ";
//         // cout << "\n";
//     }
//     return 0;
// }
