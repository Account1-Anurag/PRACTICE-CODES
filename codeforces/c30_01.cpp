#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
       
        long long n,k;
        cin>>n>>k;
        long long arr[n];
        long long mult=1;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            mult*=arr[i];
        }
        
        else if(2023%mult==0){
            cout<<"YES"<<endl;
            anurag[0]=2023/mult;
            for(int i=1;i<k;i++){
                anurag[i]=1;
            }
            for(int i=0;i<k;i++){
                cout<<anurag[i]<<" ";
                
            }
            cout<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
    return 0;
}