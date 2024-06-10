#include <bits/stdc++.h>
using namespace std;

bool isKeyPresent(int *arr,int n,int key){
    for (int i = 0; i < n; i++)
    {
        if(arr[i]==key){
            return 1;
        }
    }
    return 0;
    
}

int main(){
    int n;
    cout<<"btao kitne size ka array chahiye: "<<endl;
    cin>>n;
    int arr[n];
    cout<<"ek ek krke value daaal : "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }    
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    int key;
    cout<<"btao konsa number dhudhe: "<<endl;
    cin>>key;

    cout<<isKeyPresent(arr,n,key);
    
    return 0;
}
