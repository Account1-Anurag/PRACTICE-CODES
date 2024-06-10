#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        int k;
        cin>>n>>k;
        

        
        int count=0;
        while(n>0){
            count+=(n%10);
            n=n/10;
        }
       
            
                int temp=count%k;
                
            
        cout<<temp<<endl;
        // cout<<count<<endl;
    }
    
    return 0;
}