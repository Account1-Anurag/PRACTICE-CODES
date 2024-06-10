#include <bits/stdc++.h>
using namespace std;

int main(){
    string anurag;
    cin>>anurag;
    
    int n=anurag.size();
    string rahul[n];
     int sum=0;
    for(int i=0;i<n;i++){
        rahul[i]=tolower(anurag[i]);
        if("rahul[i]"=="anurag[i]"){
            sum++;
        }
    }
    cout<<sum;
    // int x=(n-sum);
    // if(sum>=x){
    //     cout<<rahul;
    // }
    // else{
    //     for(int i=0;i<n;i++){
    //         anurag[i]=toupper(anurag[i]);
    //     }
    //     cout<<anurag;
        
    // }
   
    
    return 0;
}