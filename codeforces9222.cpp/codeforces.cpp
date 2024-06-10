// // // #include<bits/stdc++.h>
// // // using namespace std;
// // // int main()
// // // {
// // //     int h, w;
// // //     cin >> h >> w;
// // //     vector<vector<char>> arr(h, vector<char>(w));
// // //     for (int i = 0; i < h; ++i)
// // //     {
// // //         for (int j = 0; j < w; ++j)
// // //         {
// // //             cin >> arr[i][j];
// // //         }
// // //     }
// // //     int count = 0;
// // //     for (int i = 0; i < h; i++)
// // //     {
// // //         for (int j = 0; j < w; j++)
// // //         {
// // //             if (arr[i][j] == '*')
// // //             {
// // //                 if (arr[i][j] == '@')
// // //                 {
// // //                     count++;
// // //                 }
// // //             }
// // //             else
// // //             {

// // //             }
// // //         }
// // //     }

// // //     return 0;
// // // }
// // #include <iostream>
// // #include <vector>

// // using namespace std;

// // int main() {
// //     int h, w;
// //     cin >> h >> w;
// //     vector<vector<char>> arr(h, vector<char>(w));
// //     for (int i = 0; i < h; ++i) {
// //         for (int j = 0; j < w; ++j) {
// //             cin >> arr[i][j];
// //         }
// //     }
// //     int count = 0;
// //     for (int i = 0; i < h; i++) {
// //         for (int j = 0; j < w; j++) {
// //             if (arr[i][j] == '*') {
// //                 // Check surrounding cells for '@'
// //                 for (int dx = -1; dx <= 1; dx++) {
// //                     for (int dy = -1; dy <= 1; dy++) {
// //                         int x = i + dx;
// //                         int y = j + dy;
// //                         if (x >= 0 && x < h && y >= 0 && y < w && arr[x][y] == '@') {
// //                             count++;
// //                         }
// //                     }
// //                 }
// //             }
// //         }
// //     }
// //     cout << count << endl;
// //     return 0;
// // }
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int h, w;
//     cin >> h >> w;
//     vector<vector<char>> arr(h, vector<char>(w));
//     for (int i = 0; i < h; ++i) {
//         for (int j = 0; j < w; ++j) {
//             cin >> arr[i][j];
//         }
//     }
//     int top = h, bottom = -1, left = w, right = -1;
//     for (int i = 0; i < h; ++i){
//         for (int j = 0; j < w; ++j) {
//             if (arr[i][j] == '*') 
//             {
//                 top = min(top, i);
//                 bottom = max(bottom, i);
//                 left = min(left, j);
//                 right = max(right, j);
//             }
//         }
//     }
//     int count = 0;
//     for (int i = top + 1; i < bottom; ++i) {
//         for (int j = left + 1; j < right; ++j) {
//             if (arr[i][j] == '@') {
//                 count++;
//             }
//         }
//     }
//     cout << count << endl;
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    return 0;
}