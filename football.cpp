#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int n=s.size();
    int count=1;
    for(int i=0;i<n;i++){
        if(s[i]==s[i+1]){
            ++count;
        }
        else{
            count=1;
        }
        if(count>=7){
            cout<<"YES";
            return 0;
        }
        
    }
    cout<<"NO";
    
    return 0;
}