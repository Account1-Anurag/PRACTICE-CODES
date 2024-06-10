#include <iostream>
#include <string>

using namespace std;

int main() {
   int t;
   cin >> t;

   while (t--) {
       string keys;
       cin >> keys;

       string typedString = "";

       for (char key : keys) {
           if (key == 'b') {
               if (!typedString.empty() && islower(typedString.back())) {
                   typedString.pop_back();
               }
           } else if (key == 'B') {
               if (!typedString.empty() && isupper(typedString.back())) {
                   typedString.pop_back();
               }
           } else {
               typedString += key;
           }
       }

       cout << typedString << endl;
   }

   return 0;
}
