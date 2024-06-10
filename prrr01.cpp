#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a;
        int b;
        int c;
        cin>>a;
        cin>>b;
        cin>>c;
        if(a==b){
            cout<<c<<endl;
        }
        if(a==c){
            cout<<b<<endl;
        }
        if(b==c){
            cout<<a<<endl;
        }
    }
    return 0;
}