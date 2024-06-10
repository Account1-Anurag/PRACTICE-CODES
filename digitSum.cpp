#include <bits/stdc++.h>
using namespace std;
int sum(int n){
    int count=0;
    while(n>0){
            count+=(n%10);
            n=n/10;
        }
        return count;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        int k;
        cin>>n>>k;
        

        
        int count=0;
        int x=sum(n);
       
            
                for(int i=1;;i++){
                    if(x%k!=0){
                    n++;
                    x=sum(n);
                }
                else{
                break;
                }
            }
        
        cout<<n<<endl;
    }
    
    return 0;
}