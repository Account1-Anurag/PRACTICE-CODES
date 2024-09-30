#include <bits/stdc++.h>
using namespace std;

int main(){
    string alpha="aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
    string petya;
    string alp;
    cin>>petya;
    cin>>alp;
    int x=petya.size();
    int y=alp.size();
    int z=0;
    int q=0;

    for(int i=0;i<alpha.size();i++){
        if(alpha[i]==petya[x-1]){
            z+=i;
        }
        else if(alpha[i]==alp[y-1]){
            q+=i;
        }
    }
    if(z>q){
        cout<<"1";
    }
    else if(q>z){
        cout<<"-1";
    }
    else if(petya[z]=='a'&&alp[q]=='A'){
        cout<<"0";
    }
    return 0;
}