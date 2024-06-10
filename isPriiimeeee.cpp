#include <bits/stdc++.h>
using namespace std;

bool isprime(int x){
    for(int i=2; i<x; i++){
        if(x%i==0){return 0;}   
    }
    return 1;
}

int main(){
    cout<<isprime(9);
    return 0;
}