#include <iostream>
#include <vector>
using namespace std;

const int MAX_N = 10000000;

// Function to compute prime numbers using Sieve of Eratosthenes
vector<bool> sieve_of_eratosthenes(int limit) {
    vector<bool> is_prime(limit + 1, true);
    is_prime[0] = is_prime[1] = false;

    for (int i = 2; i * i <= limit; ++i) {
        if (is_prime[i]) {
            for (int j = i * i; j <= limit; j += i) {
                is_prime[j] = false;
            }
        }
    }

    return is_prime;
}

// Function to count N-subtractorizations
int count_n_subtractorizations(int N, const vector<bool>& is_prime) {
    int count = 0;
    // Check only for primes p <= N
    for (int p = 2; p <= N; ++p) {
        if (is_prime[p] && N - p >= 2 && is_prime[N - p]) {
            count++;
        }
    }
    // Since each pair (p, N-p) is counted twice, we need to halve the count
    return count / 2;
}

int main() {
    // Precompute primes up to MAX_N using Sieve of Eratosthenes
    vector<bool> is_prime = sieve_of_eratosthenes(MAX_N);

    int T;
    cin >> T;

    for (int t = 1; t <= T; ++t) {
        int N;
        cin >> N;

        // Count the number of N-subtractorizations for the current test case
        int result = count_n_subtractorizations(N, is_prime);
        
        // Output the result in the required format
        cout << "Case #" << t << ": " << result << endl;
    }

    return 0;
}
