#include <iostream>
using namespace std;

bool canFormAnotherRectangle(int a, int b) {
    // Check if either side of the rectangle is 1
    if(b/a==2||a/b==2){
        return 0;
    }
    else if (a == 1 || b == 1) {
        // If one side is 1, the other side must be greater than 1 to form another rectangle
        return max(a, b) > 1;
    } else {
        // If both sides are greater than 1, we can always form another rectangle
        return true;
    }
}

int main() {
    int t;
    cin >> t; // Read the number of test cases

    while (t--) {
        int a, b;
        cin >> a >> b; // Read the dimensions of the rectangle

        // Check if Bob can form another rectangle
        if (canFormAnotherRectangle(a, b)) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }

    return 0;
}
