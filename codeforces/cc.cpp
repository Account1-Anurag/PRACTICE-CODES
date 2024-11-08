#include<iostream>
using namespace std;
int main(){
    string x;
    cin>>x;
    if(x[0]+x[1]+x[2]==x[3]+x[4]+x[5]){
        cout<<"YES\n";
    }else{
        cout<<"NO\n";
    }
}