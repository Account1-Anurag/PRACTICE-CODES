// #include <iostream>
// #include <vector>
// using namespace std;
// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n; 
//         vector<int> buckets(n);
//         int total_balls = 0;
//         for (int i = 0; i < n; ++i) {
//             cin >> buckets[i];
//             total_balls += buckets[i];
//         }
//         int alice_points = 0, bob_points = 0;
//         bool alice_turn = true;
//         while (total_balls > 0) {
//             int max_balls = 0;
//             int max_balls_bucket = -1;
//             for (int i = 0; i < n; ++i) {
//                 if (buckets[i] > max_balls) {
//                     max_balls = buckets[i];
//                     max_balls_bucket = i;
//                 }
//             }
//             buckets[max_balls_bucket]--;
//             total_balls--;
//             if (buckets[max_balls_bucket] == 0) {
//                 if (alice_turn) {
//                     alice_points++;
//                 } else {
//                     bob_points++;
//                 }
//             }
//             alice_turn = !alice_turn;
//         }
//         if (alice_points > bob_points) {
//             cout << "Alice" << endl;
//         } else if (bob_points > alice_points) {
//             cout << "Bob" << endl;
//         } else {
//             cout << "Draw" << endl;
//         }
//     }
    
//     return 0;
// }
// // #include <iostream>
// // using namespace std;

// // int main() {
// //     int t;
// //     cin >> t;

// //     while (t--) {
// //         int n;
// //         cin >> n;

// //         if (n == 1) {
// //             cout << "YES" << endl;
// //             cout << "A" << endl;
// //         } else if (n == 2) {
// //             cout << "YES" << endl;
// //             cout << "AB" << endl;
// //         } else if (n > 2) {
// //             cout << "YES" << endl;
// //             int count = n / 2;
// //             char first = 'A', second = 'B';
// //             for (int i = 0; i < count; ++i) {
// //                 cout << first << second;
// //                 first++;
// //                 second++;
// //             }
// //             if (n % 2 == 1)
// //                 cout << "A";
// //             cout << endl;
// //         } else {
// //             cout << "NO" << endl;
// //         }
// //     }

// //     return 0;
// // }

// #include<bits/stdc++.h>
// using namespace std;
 
// int main(){
//     int t;
//     cin>>t;
 
//     while(t--){
//         int n;
//         cin>>n;
 
//         string s;
 
//         if(n%2==1){
//             cout<<"NO"<<endl;
//         } 
//         else{
//             cout<<"YES"<<endl;
//             for(int i=0;i<n/2;i++){
//                 s+="AAB";
//             }
//             cout<<s<<endl;
//         }
//     }
//     return 0;
// }
#include <iostream>
#include <vector>
using namespace std;

bool isNonDecreasing(const vector<int>& a) {
    for (int i = 1; i < a.size(); ++i) {
        if (a[i] < a[i - 1]) {
            return false;
        }
    }
    return true;
}

bool canSort(vector<int>& a) {
    for (int i = 0; i < a.size(); ++i) {
        while (a[i] >= 10) {
            int num = a[i];
            vector<int> digits;
            while (num > 0) {
                digits.push_back(num % 10);
                num /= 10;
            }
            for (int j = digits.size() - 1; j >= 0; --j) {
                a.insert(a.begin() + i, digits[j]);
            }
            a.erase(a.begin() + i + digits.size());
        }
    }
    return isNonDecreasing(a);
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        if (canSort(a)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
