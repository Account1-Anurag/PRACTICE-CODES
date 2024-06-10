// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;

//     while (t--) {
//         int n;
//         cin >> n;

//         string word;
//         cin >> word;

//         // Vector to store the syllable boundaries
//         vector<int> syllableBoundaries;

//         // Iterate through the word to find syllable boundaries
//         for (int i = 1; i < n; ++i) {
//             if ((word[i - 1] == 'a' || word[i - 1] == 'e') && (word[i] == 'b' || word[i] == 'c' || word[i] == 'd')) {
//                 syllableBoundaries.push_back(i);
//             }
//         }

//         // Print the syllables
//         int start = 0;
//         for (int boundary : syllableBoundaries) {
//             cout << word.substr(start, boundary - start) << ".";
//             start = boundary;
//         }
//         cout << word.substr(start) << endl;
//     }

//     return 0;
// }
#include <iostream>
#include <vector>
#include <string>
using namespace std;

void printSyllables(const string& word, const vector<int>& syllableBoundaries) {
    int start = 0;
    for (int boundary : syllableBoundaries) {
        cout << word.substr(start, boundary - start) << ".";
        start = boundary;
    }
    cout << word.substr(start) << endl;
}

vector<int> findSyllableBoundaries(const string& word) {
    vector<int> syllableBoundaries;

    for (int i = 1; i < word.length(); ++i) {
        if ((word[i - 1] == 'a' || word[i - 1] == 'e') && (word[i] == 'b' || word[i] == 'c' || word[i] == 'd')) {
            syllableBoundaries.push_back(i);
        }
    }

    return syllableBoundaries;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string word;
        cin >> word;

        vector<int> syllableBoundaries = findSyllableBoundaries(word);
        printSyllables(word, syllableBoundaries);
    }

    return 0;
}