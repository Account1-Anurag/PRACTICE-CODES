#include<bits/stdc++.h>
using namespace std;

int main()
{
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
        int x;
        cin >> x;

        int power = 1;
        long long current_power = 1;

        // Finding the highest power of 2 less than or equal to x
        while(current_power < x) {
            current_power *= 2;
            power++;
        }

        vector<int> array(power, 0);
        array[power-1] = 1;

        int difference = current_power - x;
        string binary_diff = "";

        // Converting difference to binary
        while(difference) {
            if(difference % 2 == 1) {
                binary_diff += '1';
            } else {
                binary_diff += '0';
            }
            difference /= 2;
        }

        // Setting array elements based on binary_diff
        for(int j = 0; j < binary_diff.size(); j++) {
            if(binary_diff[j] == '1') {
                array[j] = -1;
            } 
        }
        for(int j = 0; j < power - 1; j++) {
            if(array[j] == -1 && array[j + 1] == -1) {
                array[j] = 1;
                j++;
                while(array[j] == -1) {
                    array[j] = 0;
                    j++;
                }
                array[j] = -1;
                j--;
            }
        }

        for(int j = 0; j < power - 1; j++) {
            if(array[j] == -1 && array[j + 1] == 1) {
                array[j] = 1;
                array[j + 1] = 0;
            }
            if(array[j] == 1 && array[j + 1] == -1) {
                 array[j] = -1;
                 array[j + 1] = 0;
            }
        }
        if(array[power - 1] == 0) {
            power--;
        }
        cout << power << endl;
        for(int j = 0; j < power; j++) {
            cout << array[j] << " ";
        }
        cout << endl;
    }

    return 0;
}
