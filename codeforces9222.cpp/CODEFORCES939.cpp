#include <bits/stdc++.h>
using namespace std;
int val(const vector<int>& arr) {
    int mini = numeric_limits<int>::max();
    for (int n : arr) {
        if (n < mini) {
            mini = n;
        }
    }
    return mini;
}
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int>arr(n);
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    int j=val(arr);
	    if(arr[0]==j&&arr[0]==arr[n-1]){
	        cout<<"YES"<<"\n";
	    }
	    else{
	        cout<<"NO"<<"\n";
	    }
	}

}
