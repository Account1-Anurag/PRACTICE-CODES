#include <bits/stdc++.h>
using namespace std;


int main(){
    int n,x,t=0,s=0;
    cin>>n;
    while(n>0){
        x=n%10;
        n=n/10;
        if(x%2==0){
            t+=x;
        }
        else{
            s+=x;
        }
    }
    cout<<t<<" "<<s<<endl;
    
    return 0;
}