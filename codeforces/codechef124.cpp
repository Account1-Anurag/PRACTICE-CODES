// // // // #include <iostream>
// // // // #include <vector>
// // // // #include <algorithm>
// // // // using namespace std;

// // // // int maxWeight(vector<int>& weights) {
// // // //     int total_weight = 0;
// // // //     for (int weight : weights) {
// // // //         total_weight += weight;
// // // //     }

// // // //     int n = weights.size();
// // // //     vector<bool> possible(total_weight + 1, false);
// // // //     possible[0] = true;

// // // //     for (int i = 0; i < n; ++i) {
// // // //         for (int j = total_weight; j >= weights[i]; --j) {
// // // //             possible[j] = possible[j] || possible[j - weights[i]];
// // // //         }
// // // //     }

// // // //     int max_possible_weight = 0;
// // // //     for (int weight = total_weight / 2; weight >= 0; --weight) {
// // // //         if (possible[weight]) {
// // // //             max_possible_weight = weight;
// // // //             break;
// // // //         }
// // // //     }

// // // //     return max_possible_weight;
// // // // }

// // // // int main() {
// // // //     int T;
// // // //     cin >> T;

// // // //     while (T--) {
// // // //         int N;
// // // //         cin >> N;

// // // //         vector<int> weights(N);
// // // //         for (int i = 0; i < N; ++i) {
// // // //             cin >> weights[i];
// // // //         }

// // // //         int max_weight = maxWeight(weights);
// // // //         cout << max_weight << endl;
// // // //     }

// // // //     return 0;
// // // // }



// // // // // #include <iostream>
// // // // // #include <vector>
// // // // // #include <algorithm>
// // // // // using namespace std;

// // // // // int maxWeight(vector<int>& weights) {
// // // // //     int total_weight = 0;
// // // // //     for (int weight : weights) {
// // // // //         total_weight += weight;
// // // // //     }

// // // // //     int n = weights.size();
// // // // //     vector<bool> possible(total_weight + 1, false);
// // // // //     possible[0] = true;

// // // // //     for (int i = 0; i < n; ++i) {
// // // // //         for (int j = total_weight; j >= weights[i]; --j) {
// // // // //             possible[j] = possible[j] || possible[j - weights[i]];
// // // // //         }
// // // // //     }

// // // // //     int max_possible_weight = 0;
// // // // //     for (int weight = total_weight / 2; weight >= 0; --weight) {
// // // // //         if (possible[weight]) {
// // // // //             max_possible_weight = weight;
// // // // //             break;
// // // // //         }
// // // // //     }

// // // // //     return max_possible_weight;
// // // // // }

// // // // // int main() {
// // // // //     int T;
// // // // //     cin >> T;

// // // // //     while (T--) {
// // // // //         int N;
// // // // //         cin >> N;

// // // // //         vector<int> weights(N);
// // // // //         for (int i = 0; i < N; ++i) {
// // // // //             cin >> weights[i];
// // // // //         }

// // // // //         int max_weight = maxWeight(weights);
// // // // //         cout << max_weight << endl;
// // // // //     }

// // // // //     return 0;
// // // // // }

// // // // // #include <iostream>
// // // // // #include <vector>
// // // // // #include <algorithm>
// // // // // using namespace std;

// // // // // int maxWeight(vector<int>& weights) {
// // // // //     int n = weights.size();
// // // // //     int total = 0;
// // // // //     for (int i = 0; i < n; ++i)
// // // // //         total += weights[i];
    
// // // // //     vector<bool> dp(total + 1, false);
// // // // //     dp[0] = true;

// // // // //     for (int i = 0; i < n; ++i) {
// // // // //         for (int j = total; j >= weights[i]; --j) {
// // // // //             dp[j] = dp[j] || dp[j - weights[i]];
// // // // //         }
// // // // //     }

// // // // //     int max_weight = 0;
// // // // //     for (int i = total / 2; i >= 0; --i) {
// // // // //         if (dp[i]) {
// // // // //             max_weight = i;
// // // // //             break;
// // // // //         }
// // // // //     }

// // // // //     return max_weight;
// // // // // }

// // // // // int main() {
// // // // //     int T;
// // // // //     cin >> T;
// // // // //     while (T--) {
// // // // //         int N;
// // // // //         cin >> N;
// // // // //         vector<int> weights(N);
// // // // //         for (int i = 0; i < N; ++i)
// // // // //             cin >> weights[i];
// // // // //         int result = maxWeight(weights);
// // // // //         cout << result << endl;
// // // // //     }
// // // // //     return 0;
// // // // // }

// // // // // #include <iostream>
// // // // // #include <vector>
// // // // // #include <algorithm>
// // // // // using namespace std;

// // // // // int minOperationsToUnite(string& S) {
// // // // //     int n = S.length();
// // // // //     vector<int> indexes[26];

// // // // //     // Store the indexes of each character in the string
// // // // //     for (int i = 0; i < n; ++i) {
// // // // //         indexes[S[i] - 'a'].push_back(i);
// // // // //     }

// // // // //     int minOperations = n; // Maximum possible operations
// // // // //     for (int i = 0; i < 26; ++i) {
// // // // //         if (indexes[i].size() <= 1) continue; // Skip if only one occurrence

// // // // //         // Calculate the number of operations to unite the occurrences of this character
// // // // //         for (int j = 0; j < indexes[i].size() - 1; ++j) {
// // // // //             int operations = indexes[i][j + 1] - indexes[i][j] - 1;
// // // // //             minOperations = min(minOperations, operations);
// // // // //         }
// // // // //     }

// // // // //     return minOperations;
// // // // // }

// // // // // int main() {
// // // // //     int T;
// // // // //     cin >> T;
// // // // //     while (T--) {
// // // // //         string S;
// // // // //         cin >> S;
// // // // //         int result = minOperationsToUnite(S);
// // // // //         cout << result << endl;
// // // // //     }
// // // // //     return 0;
// // // // // }

// // // #include<bits/stdc++.h>
// // // using namespace std;
// // // int maxWeight(vector<int>& weights){
// // //     int total_weight = 0;
// // //     for (int weight : weights) {
// // //         total_weight += weight;
// // //     }
// // //     int n = weights.size();
// // //     vector<bool> possible(total_weight + 1, false);
// // //     possible[0] = true;
// // //     for (int i = 0; i < n; ++i) {
// // //         for (int j = total_weight; j >= weights[i]; --j) {
// // //             possible[j] = possible[j] || possible[j - weights[i]];
// // //         }
// // //     }
// // //     int max_possible_weight = 0;
// // //     for (int weight = total_weight / 2; weight >= 0; --weight) {
// // //         if (possible[weight]) {
// // //             max_possible_weight = weight;
// // //             break;
// // //         }
// // //     }
// // //     return max_possible_weight;
// // // }
// // // int main() {
// // //     int T;
// // //     cin >> T;
// // //     while (T--) {
// // //         int N;
// // //         cin >> N;
// // //         vector<int> weights(N);
// // //         for (int i = 0; i < N; ++i) {
// // //             cin >> weights[i];
// // //         }
// // //         int max_weight = maxWeight(weights);
// // //         cout << max_weight << endl;
// // //     }
// // //     return 0;
// // // }


// // #include <iostream>
// // #include <vector>
// // using namespace std;

// // // Function to check if two numbers are coprime (i.e., their GCD is 1)
// // bool areCoprime(int a, int b) {
// //     while (b != 0) {
// //         int temp = b;
// //         b = a % b;
// //         a = temp;
// //     }
// //     return a == 1;
// // }

// // vector<int> makeItOne(int L, int R) {
// //     int N = R - L + 1;
// //     vector<int> result(N);

// //     // If R - L + 1 is less than 3, it's not possible to create an array
// //     if (N < 3) {
// //         return {-1};
// //     }

// //     // Fill the array with numbers from L to R
// //     for (int i = 0; i < N; ++i) {
// //         result[i] = L + i;
// //     }

// //     // Swap adjacent elements to make sure that GCD(i, i+1) = 1
// //     for (int i = 0; i < N - 1; i += 2) {
// //         swap(result[i], result[i + 1]);
// //     }

// //     return result;
// // }

// // int main() {
// //     int T;
// //     cin >> T;

// //     while (T--) {
// //         int L, R;
// //         cin >> L >> R;

// //         vector<int> B = makeItOne(L, R);

// //         if (B[0] == -1) {
// //             cout << -1 << endl;
// //         } else {
// //             for (int num : B) {
// //                 cout << num << " ";
// //             }
// //             cout << endl;
// //         }
// //     }

// //     return 0;
// // }
// #include <iostream>
// #include <vector>
// using namespace std;

// const int MOD = 998244353;

// // Function to calculate GCD of two numbers
// int gcd(int a, int b) {
//     while (b != 0) {
//         int temp = b;
//         b = a % b;
//         a = temp;
//     }
//     return a;
// }

// // Function to calculate LCM of two numbers
// int lcm(int a, int b) {
//     return (a * b) / gcd(a, b);
// }

// // Function to calculate modular inverse using Extended Euclidean Algorithm
// int modInverse(int a, int m) {
//     int m0 = m;
//     int y = 0, x = 1;

//     if (m == 1)
//         return 0;

//     while (a > 1) {
//         int q = a / m;
//         int t = m;

//         m = a % m;
//         a = t;
//         t = y;

//         y = x - q * y;
//         x = t;
//     }

//     if (x < 0)
//         x += m0;

//     return x;
// }

// // Function to calculate the number of arrays with LCM equal to X
// int countArrays(int N, int X) {
//     int result = 0;

//     for (int length = 1; length <= N; ++length) {
//         if (X % length == 0 && gcd(length, X / length) == 1) {
//             // Calculate the number of permutations of length N with length elements
//             int permutations = 1;
//             for (int i = 0; i < length; ++i) {
//                 permutations = (permutations * (N - i)) % MOD;
//             }

//             // Calculate the number of arrays with LCM equal to X and length equal to length
//             int arrays = 1;
//             for (int i = 1; i <= length; ++i) {
//                 arrays = (arrays * i) % MOD;
//             }

//             result = (result + (permutations * modInverse(arrays, MOD)) % MOD) % MOD;
//         }
//     }

//     return result;
// }

// int main() {
//     int T;
//     cin >> T;

//     while (T--) {
//         int N, X;
//         cin >> N >> X;
        
//         cout << countArrays(N, X) << endl;
//     }

//     return 0;
// }
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxWeight(vector<int>& strengths) {
    int n = strengths.size();
    int totalStrength = 0;

    // Calculate the total strength of all legs
    for (int i = 0; i < n; ++i) {
        totalStrength += strengths[i];
    }

    // dp[i] represents whether it's possible to achieve a total strength of i
    vector<bool> dp(totalStrength + 1, false);
    dp[0] = true;

    // Iterate through each leg's strength and update dp
    for (int i = 0; i < n; ++i) {
        for (int j = totalStrength; j >= strengths[i]; --j) {
            dp[j] = dp[j] || dp[j - strengths[i]];
        }
    }

    // Find the maximum weight that can be withstood
    int maxWeight = 0;
    for (int i = 1; i <= totalStrength; ++i) {
        if (dp[i]) {
            maxWeight = i;
        }
    }

    return maxWeight;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;
        vector<int> strengths(N);
        for (int i = 0; i < N; ++i) {
            cin >> strengths[i];
        }
        cout << maxWeight(strengths) << endl;
    }

    return 0;
}
