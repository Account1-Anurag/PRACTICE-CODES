#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Function to perform operation 1: insert two antiprotons around a proton
void operation1(vector<char>& state, int i) {
    state[i - 1] = 'A';
    state.insert(state.begin() + i, 'P');
    state.insert(state.begin() + i + 1, 'A');
}

// Function to perform operation 2: insert two protons around an antiproton
void operation2(vector<char>& state, int i) {
    state[i - 1] = 'P';
    state.insert(state.begin() + i, 'A');
    state.insert(state.begin() + i + 1, 'P');
}

// Function to perform operation 3: remove a contiguous subsequence of antiprotons
void operation3(vector<char>& state, int i, int a) {
    state.erase(state.begin() + i - 1, state.begin() + i - 1 + a);
}

// Function to perform operation 4: remove a contiguous subsequence of protons
void operation4(vector<char>& state, int i, int p) {
    state.erase(state.begin() + i - 1, state.begin() + i - 1 + p);
}

// Function to check if it's possible to transform initial state to goal state
bool canTransform(string initial, string goal) {
    if (initial.size() != goal.size()) return false;

    int n = initial.size();
    for (int i = 0; i < n; ++i) {
        if (initial[i] != goal[i]) {
            if (initial[i] == 'A' && goal[i] == 'P') return false; // Cannot change antiproton to proton directly
            if (initial[i] == 'P' && goal[i] == 'A') return false; // Cannot change proton to antiproton directly
        }
    }
    return true;
}

// Function to transform initial state to goal state
vector<string> transformState(string initial, string goal) {
    vector<string> operations;

    int n = initial.size();
    vector<char> state(initial.begin(), initial.end());

    for (int i = 0; i < n; ++i) {
        if (state[i] != goal[i]) {
            if (state[i] == 'P') {
                operation1(state, i + 1);
                operations.push_back("+P " + to_string(i + 1));
            } else {
                operation2(state, i + 1);
                operations.push_back("+A " + to_string(i + 1));
            }
        }
    }

    for (int i = n - 1; i >= 0; --i) {
        if (state[i] != goal[i]) {
            if (state[i] == 'P') {
                operation4(state, i + 1, 1);
                operations.push_back("-P " + to_string(i + 1));
            } else {
                operation3(state, i + 1, 1);
                operations.push_back("-A " + to_string(i + 1));
            }
        }
    }

    return operations;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, p;
        string initial, goal;
        cin >> a >> p >> initial >> goal;

        if (!canTransform(initial, goal)) {
            cout << -1 << endl;
            continue;
        }

        vector<string> operations = transformState(initial, goal);
        cout << operations.size() << endl;
        for (const auto& op : operations) {
            cout << op << endl;
        }
    }

    return 0;
}
