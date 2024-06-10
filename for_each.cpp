#include <bits/stdc++.h>
using namespace std;
int odd_number(int x){
    if(x%2!=0){
    cout<<x<<endl;
    }
}
int main(){
    int arr[5];
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    for_each(arr,arr+5,odd_number);
    return 0;
}