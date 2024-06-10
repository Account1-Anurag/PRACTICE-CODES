#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string str =to_string(n);
    // if(n%4==0||n%7==0){
    //     cout<<"YES"<<endl;
    //     return 0;
    // }
    int j=str.size();
    for(int i=0;i<j;i++){
        if(str[i]!='4'&& str[i]!='7'){
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    return 0;
}