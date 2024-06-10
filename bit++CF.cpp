#include <bits/stdc++.h>
using namespace std;

int main(){
    int X=0;
    int t;
    cin>>t;
    while(t--){
        string z;
        cin>>z;
        if(z=="++X"){
            ++X;
        }
        else if(z=="X++"){
            X++;
        }
        else if(z=="--X"){
            --X;
        }
        else{
            X--;
        }
    }
    cout<<X;
    return 0;
}