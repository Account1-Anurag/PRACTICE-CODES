#include <bits/stdc++.h>
using namespace std;
bool isPower(int n){

    
    while(n>1){
        if(n%2==0){
            n=n/2;
        }
        else{
            return 0;
        }
    }
    return 1;
}
int main(){
    int n;
    cin>>n;
    cout<<isPower(n);
    return 0;
}