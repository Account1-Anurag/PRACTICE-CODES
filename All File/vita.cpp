#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of avengers : ";
    cin>>n;
    
    int arr[n];
    
    for(int i=0;i<n;i++){
        cout<<"Enter the power of avengers :";
        cin>>arr[i];
    }
    int iron=0;
    int captain=0;
    int c1=arr[0];
    int c2=arr[n-1];
    int p=0;
    int z=1;
    for(int i=0;i<n;i++){
        
        p=max(c1,c2);
        if(i%2==0){
        iron+=p;
        }
        else{
            captain+=p;
        }
        if(c1>c2){
            c1=arr[i];
        
        }
        else{
            c2=arr[(n-1-z)];
            z++;
        }
        }
        int ans;
    if(iron>captain){
        ans=iron-captain;
    }
    else{
        ans=captain-iron;
    }
    cout<<ans;
    return 0;
}