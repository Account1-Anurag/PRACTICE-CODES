#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int findK(const vector<int>& arr) {
   int n = arr.size();

   // Sort the array to bring potential candidates for k closer together
   sort(arr.begin(), arr.end());

   // Iterate through the array, looking for pairs of elements that differ by a potential k
   for (int i = 1; i < n; i++) {
       int diff = arr[i] - arr[i - 1];

       // Check if all elements modulo diff result in only two distinct values
       bool valid = true;
       for (int j = 0; j < n; j++) {
           int remainder = arr[j] % diff;
           if (remainder != arr[0] % diff && remainder != arr[1] % diff) {
               valid = false;
               break;
           }
       }

       if (valid) {
           return diff;
       }
   }

   // If no valid k is found within the differences, return the largest element
   // to ensure at least two distinct values (0 and 1) after the operation
   return arr[n - 1];
}

int main() {
   int t;
   cin >> t;

   while (t--) {
       int n;
       cin >> n;

       vector<int> arr(n);
       for (int i = 0; i < n; i++) {
           cin >> arr[i];
       }

       int k = findK(arr);
       cout << k << endl;
   }

   return 0;
}