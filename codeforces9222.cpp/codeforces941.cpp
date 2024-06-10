// #include <iostream>
// #include <cmath>
// using namespace std;

// int main() {
//     int n, abhishek, abhishekk; // Keeping the variables unchanged
//     // cout << "ENTER SIZE OF ARRAY: ";
//     cin >> n;
    
//     int a[n];
//     // cout << "ENTER ELEMENTS OF ARRAY: ";
//     for (int i = 0; i < n; i++) {
//         cin >> a[i];
//     }
    
//     int p = a[0];
//     for (int i = 1; i < n; i++) {
//         p = max(p, a[i]);
//     }
//     cout << p << endl;

//     for (int i = 0; i < n; i++) {
//         if (p >= a[i]) {
//             abhishek = i;
//         }
//     }

//     if (abhishek == n - 1) { // Corrected the equality operator
//         cout << a[n - 1];
//         return 0;
//     }

//     abhishek++;

//     int q = a[abhishek];
//     for (int i = abhishek; i < n; i++) { // Removed unnecessary -1
//         q = max(q, a[i]);
//     }
//     cout << q << endl;

//     for (int i = abhishek; i < n; i++) { // Removed unnecessary -1
//         if (q >= a[i]) {
//             abhishekk = i;
//         }
//     }
//     if (abhishekk == n - 1) { // Corrected the equality operator
//         cout << a[n - 1];
//         return 0;
//     }

//     abhishekk++;

//     int r = a[abhishekk];
//     for (int i = abhishekk; i < n; i++) { // Removed unnecessary -1
//         r = max(r, a[i]);
//     }
//     cout << r << endl;

//     return 0;
// }
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n; // Keeping the variables unchanged
    cout << "ENTER SIZE OF ARRAY: ";
    cin >> n;
    
    int a[n];
    cout << "ENTER ELEMENTS OF ARRAY: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    int max_right = a[n - 1];
    cout << "Leaders from right: " << max_right << " ";

    // Leaders from right
    for (int i = n - 2; i >= 0; i--) {
        if (a[i] >= max_right) {
            cout << a[i] << " ";
            max_right = a[i];
        }
    }

    cout << endl;

    int max_left = a[0];
    // cout << "Leaders from left: ";

    // Leaders from left
    for (int i = 0; i < n; i++) {
        if (a[i] >= max_left) {
            cout << a[i] << " ";
            max_left = a[i];
        }
    }

    return 0;
}

