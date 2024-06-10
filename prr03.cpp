#include <bits/stdc++.h>
using namespace std;
bool isSquareRoot(long long n) {
    if (n < 0) {
        return false; 
    }

    long long root = static_cast<int>(sqrt(n));
    return root * root == n;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        long long sum=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
        }
        if(isSquareRoot(sum)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
    return 0;
}