#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin>>x;
    int t=0;
        t=x/5;
        x=x%5;
        if(x==0){
            cout<<t;
        }
        else{
            cout<<t+1;
        }
    
    return 0;
}