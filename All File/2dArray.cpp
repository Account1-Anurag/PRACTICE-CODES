#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        float p,x;
        cin>>p>>x;
        int R1;
        cin>>R1;
        float n,y;
        cin>>n>>y;
        int R2;
        cin>>R2;
        float a1=(p/x)+R1;
        float a2=(n/y)+R2;
        if(a1<a2){
            cout<<"PAUL"<<endl;
            cout<<floor(a1)<<endl;
        }
        else if(a1>a2){
            cout<<"NINA"<<endl;
            cout<<floor(a2)<<endl;
        }
        else{
            cout<<"BOTH"<<endl;
            cout<<a1<<endl;
        }
    }
    
    return 0;
}