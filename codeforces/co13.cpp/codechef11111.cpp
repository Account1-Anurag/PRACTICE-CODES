#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
            cout<<(long long)(n*(n+1)/2)+n-1<<endl;
    }
    return 0;
}