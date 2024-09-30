#include <iostream>
using namespace std;
// bool isprime(int n){
//     if(n==1)return false;
//     for(int i=2;i<n;i++){
//         if(n%i==0){
//         return false;}
        
            
        
//     }
//     return true;
// }

int main(){
    int n;
    cin>>n;
    // cout<<isprime(n);
    if(n==1){
        cout<<"FALSE";
    } bool p=0;
    for(int i=2;i<n;i++){
        if((n%i)==0){
             p=1; 
            break;
                 }
                //  else if(((n%i)!=0)){
                //     cout<<"TRUE";
                //     break;
                //  }
                 
    

    }

    if(p==1){
        cout<<"false";
    }
    else{
        cout<<"true";
    }
    return 0;
}