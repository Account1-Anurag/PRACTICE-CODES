// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int arr[8];
//     int brr[8];
//     cout<<"Enter the first Binary Number"<<endl;
//     for(int i=0;i<8;i++){
//         cin>>arr[i];
//     }
//     cout<<"Enter the second binary number"<<endl;
//     for(int i=0;i<8;i++){
//         cin>>brr[i];
//     }
//     int num1=0;
//     for(int i=7;i>=0;i--){
//         num1+=arr[i]*pow(2,7-i);
//     }
//     int num2=0;
//     for(int i=7;i>=0;i--){
//         num2+=brr[i]*pow(2,7-i);
//     }
//     int sum=num1+num2;
//     while(sum>0){
//         cout<<sum%2;
//         sum=sum/2;
//     }

    
//     return 0;
// }
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int arr[8];
    int brr[8];
    
    cout << "Enter the first Binary Number" << endl;
    for(int i = 0; i < 8; i++) {
        cin >> arr[i];
    }
    
    cout << "Enter the second binary number" << endl;
    for(int i = 0; i < 8; i++) {
        cin >> brr[i];
    }
    
    int num1 = 0;
    for(int i = 7; i >= 0; i--) {
        num1 += arr[i] * pow(2, 7 - i);
    }
    // cout<<num1<<endl;
    int num2 = 0;
    for(int i = 7; i >= 0; i--) {
        num2 += brr[i] * pow(2, 7 - i);
    } 
    // cout<<num2<<endl;
    int sum = num1 + num2;
    int binarySum[8];
    int index = 0;
    while (sum > 0) {
        binarySum[index++] = sum % 2;
        sum /= 2;
    }

    cout << "Sum of the two binary numbers: ";
    for (int i = index - 1; i >= 0; i--) {
        cout << binarySum[i];
    }
    cout << endl;

    return 0;
}
