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
// #define arrin(i,arr,n); for(int i=0;i<n;i++){ cin >> arr[i]; }
// #define arrout(i,arr,n); for(int i=0;i<n;i++){ cout << arr[i]; }
// #define INF 2e18
// #define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
// #define all(x) (x).begin(), (x).end()
// #define sz(x) ((ll)(x).size())
// int main(){
//     fast_cin();
//     int n, k, l, c, d, p, a, b;
//     cin>>n>> k>> l>> c>> d>> p>> a>> b;
//     int drink=(k*l)/a;
//     int lime=c*d;
//     int salt=p/b;
    
//     int mini=min(drink,min(lime,salt));
//     cout<<mini/n;


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
    vector<int>ans;
    ans.push_back(3);
    ans.push_back(8);
    ans.push_back(1);
    ans.push_back(2);
    ans.push_back(9);
    ans.push_back(4);
    // int v=*min_element(ans.begin(),ans.end());
    // int k=*max_element(ans.begin(),ans.end());
    // ans.insert(ans.begin()+0,100);
    // cout<<ans[0]<<"\n";
    
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<"\n";


    // Sort the vector
    // sort(ans.begin()+1,ans.end()-1); // Quick Sort (Time Complexity : Big O(nlog n))
    

    // for(int i=0;i<ans.size();i++){
    //     cout<<ans[i]<<" ";
    // }
    // cout<<"\n";

    // To access the first element

    // cout<<ans.front();

    // To access the last element
    // cout<<ans.back();










    return 0;
}

