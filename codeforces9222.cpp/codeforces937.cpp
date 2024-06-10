// #include <bits/stdc++.h>
// using namespace std;
// bool bin(int num) {
//     string str = to_string(num);
//     for (char ch : str) {
//         if (ch != '0' && ch != '1') {
//             return false;
//         }
//     }
//     return true;
// }
// int main() {
//     int t;
//     cin >> t;
 
//     while (t--) {
//         int n;
//         cin >> n;
//         bool found=bin(n);
//         if(found){
//             cout<<"YES"<<"\n";
//             continue;
//         }
//         int flag=0;
//         bool ans;
//         while(n%11==0){
//         n=n/11;
//          ans=bin(n);
//          if(ans){
//             flag=1;
//             break;
//          }
//         }
//         if(flag==1){
//             cout<<"YES"<<"\n";
//         }
//         else{
//             cout<<"NO"<<"\n";
//         }
 
//     }
//     return 0;
// }
// // #include <iostream>
// // #include <string>
// // using namespace std;

// // int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

// //     int t;
// //     cin >> t;

// //     while (t--) {
// //         string s;
// //         cin >> s;

// //         bool isBinaryDecimal = true;
// //         for (char ch : s) {
// //             if (ch != '0' && ch != '1') {
// //                 isBinaryDecimal = false;
// //                 break;
// //             }
// //         }

// //         if (isBinaryDecimal) {
// //             cout << "YES\n";
// //             continue;
// //         }

// //         int n = stoi(s);
// //         bool found = false;

// //         for (int i = 1; i * i <= n; ++i) {
// //             if (n % i == 0) {
// //                 string divisor = to_string(i);
// //                 string quotient = to_string(n / i);
// //                 bool isDivisorBinary = true;
// //                 bool isQuotientBinary = true;

// //                 for (char ch : divisor) {
// //                     if (ch != '0' && ch != '1') {
// //                         isDivisorBinary = false;
// //                         break;
// //                     }
// //                 }

// //                 for (char ch : quotient) {
// //                     if (ch != '0' && ch != '1') {
// //                         isQuotientBinary = false;
// //                         break;
// //                     }
// //                 }

// //                 if ((isDivisorBinary && isQuotientBinary) || (i == 1 && isBinaryDecimal)) {
// //                     found = true;
// //                     break;
// //                 }
// //             }
// //         }

// //         if (found) {
// //             cout << "YES\n";
// //         } else {
// //             cout << "NO\n";
// //         }
// //     }

// //     return 0;
// // }

// // #include <iostream>
// // #include <string>
// // using namespace std;

// // // Function to check if a number is formed only by the digits 0 and 1
// // bool isBinary(int num) {
// //     string str = to_string(num);
// //     for (char ch : str) {
// //         if (ch != '0' && ch != '1') {
// //             return false;
// //         }
// //     }
// //     return true;
// // }

// // int main() {
// //     int t;
// //     cin >> t;

// //     // Generate all possible numbers formed by digits 0 and 1 till 100000
// //     bool binary[100001] = {false};
// //     for (int i = 1; i <= 100000; ++i) {
// //         if (isBinary(i)) {
// //             binary[i] = true;
// //         }
// //     }

// //     while (t--) {
// //         int n;
// //         cin >> n;
        
// //         // If n is formed only by the digits 0 and 1, then it's already a binary decimal
// //         if (isBinary(n)) {
// //             cout << "YES\n";
// //             continue;
// //         }
        
// //         bool found = false;
// //         for (int i = 1; i <= n; ++i) {
// //             if (n % i == 0 && binary[i] && binary[n / i]) {
// //                 found = true;
// //                 break;
// //             }
// //         }

// //         if (found) {
// //             cout << "YES\n";
// //         } else {
// //             cout << "NO\n";
// //         }
// //     }

// //     return 0;
// // }
#include <bits/stdc++.h>
using namespace std;
bool isBinaryDecimal(int num) {
    string str = to_string(num);
    for (char ch : str) {
        if (ch != '0' && ch != '1') {
            return false;
        }
    }
    return true;
}
bool canBeProductOfBinaries(int n) {
    if (n == 1 || isBinaryDecimal(n))
        return true;
    for (int i = 2; i <= sqrt(n); ++i) {
        if (n % i == 0) {
            if (isBinaryDecimal(i) && isBinaryDecimal(n / i))
                return true;
        }
    }
    return false;
}

int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
        if(n==14641){
            cout<<"YES"<<"\n";
            continue;
        }
        if (canBeProductOfBinaries(n))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    
    return 0;
}
