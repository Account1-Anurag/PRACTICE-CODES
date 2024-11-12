#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    int j;
    int p;
    
    while (t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        
        int count = 0;
        if (b > a) count++;
        if (c > a) count++;
        if (d > a) count++;
        
        cout << count << endl;
    }
    
    return 0;
}

