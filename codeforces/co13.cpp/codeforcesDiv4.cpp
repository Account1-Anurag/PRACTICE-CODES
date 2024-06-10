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

        vector<int> m;
        for(int k=0;k<n;k++){
            int z=k+1;
            for(int i=k;i<n-2;i++){
                int max=arr[i];
                for(int j=i+1;j<=z;j++){
                    if(arr[j]>max){
                        max=arr[j];
                    }
                }
                m.push_back(max);
                z++;
            }
            z=k+1;
        }

        int lol = 0;
        for(int i=0; i<m.size();i++){
            if(m[i] > lol){
                lol=m[i];
            }
        }
        cout<<lol<<endl;
    }
    return 0;
}