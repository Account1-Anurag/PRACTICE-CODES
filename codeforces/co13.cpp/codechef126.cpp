
// // // #include <bits/stdc++.h>
// // // using namespace std;

// // // bool canSortArray(vector<int>& arr) {
// // //     int n = arr.size();
// // //     for (int i = 0; i < n - 1; i++) {
// // //         if (abs(arr[i] - arr[i + 1]) > 1) {
// // //             return true;
// // //         }
// // //     }
// // //     return false;
// // // }

// // // int main() {
// // //     int t;
// // //     cin >> t;
// // //     while (t--) {
// // //         int n;
// // //         cin >> n;
// // //         vector<int> arr(n);
// // //         for (int i = 0; i < n; i++) {
// // //             cin >> arr[i];
// // //         }
// // //         if (canSortArray(arr)) {
// // //             cout << "YES" << endl;
// // //         } else {
// // //             cout << "NO" << endl;
// // //         }
// // //     }
// // //     return 0;
// // // }




// // #include <iostream>
// // #include <vector>

// // bool canSort(std::vector<int>& A) {
// //     int n = A.size();
// //     std::vector<bool> visited(n, false);
// //     for (int i = 0; i < n; ++i) {
// //         if (visited[i]) continue;
// //         int j = i;
// //         while (true) {
// //             int next = -1;
// //             for (int k = i + 1; k < n; ++k) {
// //                 if (A[k] < A[j]) {
// //                     next = k;
// //                     break;
// //                 }
// //             }
// //             if (next == -1) break;
// //             std::swap(A[j], A[next]);
// //             visited[next] = true;
// //             j = next;
// //         }
// //     }
// //     for (int i = 0; i < n - 1; ++i) {
// //         if (A[i] > A[i + 1]) return false;
// //     }
// //     return true;
// // }

// // int main() {
// //     int T;
// //     std::cin >> T;
// //     while (T--) {
// //         int n;
// //         std::cin >> n;
// //         std::vector<int> A(n);
// //         for (int i = 0; i < n; ++i) {
// //             std::cin >> A[i];
// //         }
// //         if (canSort(A)) {
// //             std::cout << "YES" << std::endl;
// //         } else {
// //             std::cout << "NO" << std::endl;
// //         }
// //     }
// //     return 0;
// // }
// #include <iostream>
// #include <vector>

// using namespace std;

// string canSortArray(vector<int>& A) {
//     int n = A.size();
//     for (int i = 0; i < n - 1; ++i) {
//         if (A[i] > A[i + 1]) {
//             if (i < n - 2 && A[i] > A[i + 2]) {
//                 return "NO";
//             }
//             swap(A[i], A[i + 1]);
//             i++;
//         }
//     }
//     return "YES";
// }

// int main() {
//     int T;
//     cin >> T;

//     while (T--) {
//         int N;
//         cin >> N;

//         vector<int> A(N);
//         for (int i = 0; i < N; ++i) {
//             cin >> A[i];
//         }

//         cout << canSortArray(A) << endl;
//     }

//     return 0;
// }
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int N;
        cin >> N;

        vector<int> arr(N);
        for (int i = 0; i < N; ++i) {
            cin >> arr[i];
        }
        if (is_sorted(arr.begin(), arr.end())) {
            cout << "YES" << endl;
            continue;
        }
        if (N == 1) {
            cout << "YES" << endl;
            continue;
        }
        bool allEqual = true;
        for (int i = 1; i < N; ++i) {
            if (arr[i] != arr[0]) {
                allEqual = false;
                break;
            }
        }
        if (allEqual) {
            cout << "YES" << endl;
            continue;
        }

        vector<int> ans(arr.begin(), arr.end());
        sort(ans.begin(), ans.end());

        bool flag = true;
        for (int i = 0; i < N; ++i) {
            if (arr[i] != ans[i]) {
                if (i + 1 < N && arr[i + 1] == ans[i] && arr[i] == ans[i + 1]) {
                    flag = false;
                    break;
                }
            }
        }
        if (flag) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
