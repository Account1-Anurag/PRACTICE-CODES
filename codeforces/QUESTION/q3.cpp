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
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        arrin(i,arr,n);
        vector<int>ans(n,-1);
        int countl=0;
        if(arr[0]==0){
            ans[0]=1;
        }else{
            ans[0]=0;
            countl++;
        }
        int flag=0;
        cout<<ans[0]<<" ";
        for(int i=1;i<n;i++){
         cout<<ans[i]<<" "<<i<<" ";
            cout<<"\n";
            if(arr[i]>i){
                ans[i]=0;
                countl++;
            }
            else{
                if(arr[i]>countl){
                    ans[i]=0;
                }
            }
            if(ans[i]==0 && ans[i-1]==0){
                flag=1;
                break;
            }
            else if(ans[i-1]==0){
                   ans[i]=1;
            }
        }
        cout<<"\n";
        if(flag)cout<<0<<"\n";
        else{
          for(int i=0;i<n;i++){
            cout<<ans[i]<<" ";
          }   
          cout<<"\n";

        }

    }
    return 0;
}