// // // #include <iostream>
// // // #include <string>
// // // #include <vector>
// // // using namespace std;

// // // bool isPalindrome(const string& s) {
// // //     int i = 0, j = s.length() - 1;
// // //     while (i < j) {
// // //         if (s[i] != s[j])
// // //             return false;
// // //         i++;
// // //         j--;
// // //     }
// // //     return true;
// // // }

// // // int main() {
// // //     int T;
// // //     cin >> T;
// // //     while (T--) {
// // //         int n;
// // //         string s;
// // //         cin >> n >> s;
// // //         for(int i=n-1;i>=0;i--){

// // //         }
// // //     }
// // //     return 0;
// // // }
// // #include <iostream>
// // #include <string>
// // using namespace std;

// // bool isPalindrome(const string &s)
// // {
// //     int i = 0, j = s.length() - 1;
// //     while (i < j)
// //     {
// //         if (s[i] != s[j])
// //             return false;
// //         i++;
// //         j--;
// //     }
// //     return true;
// // }

// // bool cycle(const string &s)
// // {
// //     string concatenated = s + s;
// //     int n = concatenated.length();
// //     for (int i = 0; i < n - 1; i++)
// //     {
// //         for (int len = 2; len <= n / 2; len++)
// //         {
// //             if (i + len <= n && isPalindrome(concatenated.substr(i, len)))
// //             {
// //                 return true;
// //             }
// //         }
// //     }
// //     return false;
// // }

// // int main()
// // {
// //     int t;
// //     cin >> t;
// //     while (t--)
// //     {
// //         int n;
// //         cin >> n;
// //         string s;
// //         cin >> s;
// //         bool alice=false;
// //         bool bob=false;
// //         for(int i=0;i<n-1;i++){
// //             s[n-1]=s[0];
// //             s[i]=s[i+1];
// //             if(cycle(s)){
// //                 n--;
// //                 alice=true;
// //             }
// //         }
// //     }

// //     return 0;
// // }
// #include <iostream>
// #include <string>
// using namespace std;

// bool isPalindrome(const string& s) {
//     int i = 0, j = s.length() - 1;
//     while (i < j) {
//         if (s[i] != s[j])
//             return false;
//         i++;
//         j--;
//     }
//     return true;
// }

// bool hasCyclicPalindrome(const string& s) {
//     string concatenated = s + s;
//     int n = concatenated.length();
//     for (int i = 0; i < n - 1; i++) {
//         for (int len = 2; len <= n / 2; len++) {
//             if (i + len <= n && isPalindrome(concatenated.substr(i, len))) {
//                 return true;
//             }
//         }
//     }
//     return false;
// }

// int playGame(string S) {
//     int ans=0;
//     while (S.length() > 1 && hasCyclicPalindrome(S)) {
//         string concatenated = S + S;
//         int n = concatenated.length();
//         for (int i = 0; i < n - 1; i++) {
//             for (int len = 2; len <= n / 2; len++) {
//                 if (i + len <= n && isPalindrome(concatenated.substr(i, len))) {
//                     int idx = i + len / 2;
//                     if (idx >= S.length()) idx -= S.length();
//                     S.erase(idx, 1);
//                     break;
//                 }
//             }
//             if (S.length() == 1 || !hasCyclicPalindrome(S))
//                 break;
//                 else{
//                     ans++;
//                 }
//         }
//     }
//     return ans;
// }

// int main() {
//     int T;
//     cin >> T;
//     while (T--) {
//         int N;
//         cin >> N;
//         string S;
//         cin >> S;
//         int result = playGame(S);
//         cout<<result;
//         // if (N-result%2==0)
//         //     cout << "BOB" << endl;
//         // else
//         //     cout << "ALICE" << endl;
//     }
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    char c='Z';
    int v=c-64;
    cout<<v*v<<"\n";
    return 0;
}