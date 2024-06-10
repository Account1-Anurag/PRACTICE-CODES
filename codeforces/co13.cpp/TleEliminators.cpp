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
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int ans=INT32_MAX;
        for(int i=0;i<n-1;i++){
            int mini=arr[i];
            for(int j=i+1;j<n;j++){
                if(arr[j]>=mini){
                    mini=arr[j];
                    if(ans>=mini){
                        ans=mini;
                    }
                }

            }
        }
        cout<<ans-1<<"\n";
    }
    return 0;
}





