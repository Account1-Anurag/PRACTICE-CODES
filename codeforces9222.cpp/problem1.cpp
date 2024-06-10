#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

long long computeMaxValue(const vector<int>& A, int K) {
    long long sum = 0;
    for (int i = 0; i < K; ++i) {
        sum += A[i];
    }
    long long max_val = sum;
    for (int i = K; i < A.size(); ++i) {
        sum += A[i] - A[i - K];
        max_val = max(max_val, sum);
    }
    return max_val;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, Q;
        cin >> N >> Q;
        vector<int> A(N);
        for (int i = 0; i < N; ++i) {
            cin >> A[i];
        }
        for (int i = 0; i < Q; ++i) {
            int K;
            cin >> K;
            cout << computeMaxValue(A, K) << " ";
        }
        cout << endl;
    }
    return 0;
}
