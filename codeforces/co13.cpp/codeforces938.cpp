// Question 1

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int maxi=arr[0];
        for(int i=1;i<n-1;i++){
            if(arr[i]>maxi){
                maxi=arr[i];
            }
        }
        cout<<maxi+arr[n-1]<<"\n";
    }
    return 0;
}


// question 2

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
typedef pair<int,int> p32;
typedef pair<ll,ll> p64;
typedef pair<double,double> pdd;
typedef vector<ll> v64;
typedef vector<int> v32;
typedef vector<vector<int> > vv32;
typedef vector<vector<ll> > vv64;
typedef vector<vector<p64> > vvp64;
typedef vector<p64> vp64;
typedef vector<p32> vp32;
ll MOD = 998244353;
double eps = 1e-12;
#define forn(i,n) for(ll i = 0; i < n; i++)
#define forsn(i,s,e) for(ll i = s; i < e; i++)
#define rforn(i,s) for(ll i = s; i >= 0; i--)
#define rforsn(i,s,e) for(ll i = s; i >= e; i--)
#define ln "\n"
#define dbg(x) cout<<#x<<" = "<<x<<ln
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define cy cout<<"YES"<<endl
#define cn cout<<"NO"<<endl
#define nl cout<<endl
#define arrin(i,arr,n); for(int i=0;i<n;i++){ cin >> arr[i]; }
#define arrout(i,arr,n); for(int i=0;i<n;i++){ cout << arr[i] << "\t"; }
#define INF 2e18
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())
 

bool iscomposite(int n){
int c=0;
for (int i = 1; i <= n; i++) {
if (n % i == 0)
c++;}
if(c>2){ 
return true;
}
return false;
}
 

ll gcd(ll a, ll b) {
if (a == 0) return b;
if (b == 0) return a;
if (a == b) return a;
if (a > b) return gcd(a - b, b);
return gcd(a, b - a);}
 

long long lcm(int a, int b) {
return (a / gcd(a, b)) * b;}
 

bool isPrime(int n) {
if (n <= 1)
return false;
for (int i = 2; i <= n / 2; i++)
if (n % i == 0)
return false;
return true;}
 

int find_index(int x, int arr[], int n) {
for (int i = 0; i < n; i++) {
if (arr[i] == x) {
return i;}}
return 0;}
 

bool prime[200001];
void SieveOfEratosthenes() {
memset(prime, true, sizeof(prime));
for (int p = 2; p * p <= 200000; p++) {
if (prime[p] == true) {
for (int i = p * p; i <= 200000; i += p) {
prime[i] = false;}}}}
 

ll sod(ll n){
ll sum = 0;
while(n>0){
sum += n%10;
n /= 10;}
return sum;}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        ll n,a,b;
        cin>>n>>a>>b;
        ll mini=min(n,b);
        ll sum=0;
        if(a>=b){
            sum=n*a;
        }
        else{
            
            ll cc=b-a+1;
            cc=min(cc,n);
            sum+=(cc * (2 * b - cc + 1)) / 2;
            ll g=n-cc;
            sum+=(g*a);
            
        }
        cout<<sum<<"\n";
    }
 return 0;
}
