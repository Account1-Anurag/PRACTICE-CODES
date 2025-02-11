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
    int n;
    cin>>n;
    vector<pair<int,int>>p;
    int a,b;
    // int mini=INT_MAX;
    // int maxi=INT_MIN;
    // int ymin=0;
    // int ymax=0;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        // mini=min(a,mini);
        // maxi=max(a,maxi);
        p.push_back(make_pair(a,b));
    }
    vector<pair<int,int>>v;
    sort(p.begin(), p.end());
    int temp=p[0].first;
     for(auto i: p){
        if(i.first==temp){
            v.push_back(make_pair(temp,i.second));
        }
        else break;
     }
     temp=p[n-1].first;
    for (auto i = p.rbegin(); i != p.rend(); i++) {
         if(i->first==temp){
            v.push_back(make_pair(temp,i->second));
        }
        else break;
    }
    int mina=p[0].second;
      for(auto i = p.begin()+1;i!=p.end();i++){
           mina=min(mina,i->second);
           if(mina==i->second){
               v.push_back(make_pair(i->first,i->second));
           }
      }
   int mina1=p[n-1].second;
   int z=v.size();
   int x=v[z-1].first;
    for (auto i = p.rbegin()+1; i != p.rend(); i++) {
        mina1=min(mina1,i->second);
        if(mina1==mina)break;
        else if(mina1==i->second && i->first>x){
            v.push_back(make_pair(i->first,i->second));
        }
    }
    vector<pair<int,int>>d;
    
    int xmin=v[0].first;
    for (auto i = v.begin(); i != v.end(); i++) {
          if(i->first==xmin){
              continue;
          }
          else{
            d.push_back(make_pair(i->first,i->second));
          }
    }
    sort(d.begin(),d.end());
   long double total=0;
    int n1=d.size();
    for (int i=0;i+1<n1; i++) {
        total+=(sqrt((pow((abs(d[i+1].first - d[i].first)), 2)*1.0) + (pow(abs(d[i+1].second - d[i].second), 2)*1.0)));
    }
    // cout<<total<<"\n";
    int i=0;
    for (;i+1<z;i++) {
       if(v[i].first==xmin && v[i+1].first==xmin){
        total+=(sqrt((pow((abs(v[i+1].first - v[i].first)), 2)*1.0) + (pow(abs(v[i+1].second - v[i].second), 2)*1.0)));
          }
          else{
       break;
          }
    }
total+=(sqrt((pow((abs(v[0].first - d[0].first)), 2)*1.0) + (pow(abs(v[0].second - d[0].second), 2)*1.0)));
   total=round(total);
   cout<<total<<"\n";
    return 0;
}