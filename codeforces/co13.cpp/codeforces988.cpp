// // // #include <iostream>
// // // #include <vector>

// // // using namespace std;

// // // int main() {
// // //     int t;
// // //     cin >> t;

// // //     while (t--) {
// // //         int n;
// // //         cin >> n;

// // //         vector<int> a(n);
// // //         long long sum = 0; // Using long long to prevent overflow
// // //         for (int i = 0; i < n; ++i) {
// // //             cin >> a[i];
// // //             sum += a[i];
// // //         }

// // //         int remainder = sum % 3;
// // //         int moves = 0;

// // //         // Case 1: When the sum is already divisible by 3
// // //         if (remainder == 0) {
// // //             moves = 0;
// // //         }
// // //         // Case 2: When the sum leaves remainder 1
// // //         else if (remainder == 1) {
// // //             // Check if we can remove one element which leaves remainder 1

// // //         }
// // //         // Case 3: When the sum leaves remainder 2
// // //         else  {
// // //             cout<<"1"<<endl;
// // //         }

// // //         cout << moves << endl;
// // //     }

// // //     return 0;
// // // }

// // #include <bits/stdc++.h>
// // using namespace std;
// // int main()
// // {
// //     int t;
// //     cin >> t;
// //     while (t--)
// //     {
// //         int n;
// //         cin >> n;
// //         int arr[n];
// //         long long sum = 0;
// //         for (int i = 0; i < n; i++)
// //         {
// //             cin >> arr[i];
// //             sum += arr[i];
// //         }
// //         int remainder = sum % 3;
// //         int moves = 0;
// //         if (remainder == 0)
// //         {
// //             cout << "0" << endl;
// //         }
// //         else if (remainder == 2)
// //         {
// //             cout << "1" << endl;
// //         }
// //         else
// //         {
// //             bool found = false;
// //             for (int i = 0; i < n; ++i)
// //             {
// //                 if (arr[i] % 3 == 1)
// //                 {
// //                     found = true;
// //                     break;
// //                 }
// //             }
// //             if (found)
// //             {
// //                 moves = 1;
// //             }
// //             else
// //             {
// //                 // Check if we can remove two elements which leave remainder 2
// //                 int count = 0;
// //                 for (int i = 0; i < n; ++i)
// //                 {
// //                     if (arr[i] % 3 == 2)
// //                     {
// //                         count++;
// //                     }
// //                 }
// //                 if (count >= 2)
// //                 {
// //                     moves = 2;
// //                 }
// //                 else
// //                 {
// //                     moves = -1; // Impossible to make the sum divisible by 3
// //                 }
// //             }
// //         }
        
// //     }
// //     return 0;
// // }
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
//         int arr[n];
//         long long sum = 0;
//         for (int i = 0; i < n; i++) {
//             cin >> arr[i];
//             sum += arr[i];
//         }
//         int remainder = sum % 3;
//         int moves = 0;
//         if (remainder == 0) {
//             cout << "0" << endl;
//         } else if (remainder == 2) {
//             cout << "1" << endl;
//         } else {
//             bool found = false;
//             for (int i = 0; i < n; ++i) {
//                 if (arr[i] % 3 == 1) {
//                     found = true;
//                     break;
//                 }
//             }
//             if (found) {
//                 moves = 1;
//             } else {
//                 int count = 0;
//                 for (int i = 0; i < n; ++i) {
//                     if (arr[i] % 3 == 2) {
//                         count++;
//                     }
//                 }
//                 if (count >= 2) {
//                     moves = 2;
//                 } else {
//                     moves = -1;
//                 }
//             }
//             cout << moves << endl;
//         }
//     }
//     return 0;
// }
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b, l;
        cin >> a >> b >> l;

        unordered_set<int> possible_values;

        for (int x = 0; x <= 100; ++x) {
            for (int y = 0; y <= 100; ++y) {
                int k = l;
                for (int i = 0; i < x; ++i)
                    k /= a;
                for (int i = 0; i < y; ++i)
                    k /= b;

                if (k * (int)pow(a, x) * (int)pow(b, y) == l)
                    possible_values.insert(k);
            }
        }

        cout << possible_values.size() << endl;
    }

    return 0;
}
